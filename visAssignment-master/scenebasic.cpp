#include "scenebasic.h"

#include <cstdio>
#include <cstdlib>

#include <iostream>

#include <fstream>

using std::ifstream;

#include <sstream>
#include <QDebug>
#include <QImage>
#include <QGLWidget>
using std::ostringstream;

#include "glutils.h"
#include "C:/glm/glm/gtc/matrix_transform.hpp"
#include "C:/glm/glm/gtc/type_ptr.hpp"
#include "C:/glm/glm/gtx/transform2.hpp"
#include "C:/glm/glm/gtx/string_cast.hpp"

const float PI = 4.0*atan(1.0);

SceneBasic::SceneBasic()  : lightAngle(0.0)
{

   readDataCube("shader/scenebasic2.dat");
   const char * texName = "texture/image3.jpg";
   image = new QImage(texName,"JPG");
   readDataLight("shader/spotlight.dat");



}


// These methods were added from another vis course example so that
// I could further experiment with lighting and normals.
/**
  Reads vertex normal and texture coordinates
  */


void SceneBasic::readDataCube(const char* fname)
{
    ifstream ifs(fname);

    if (!ifs) {
        std::cout << "data file not found\n";
        exit(1);
    } else {
        for (int i=0; i<108; i++) ifs >> positionData[i];
        for (int i=0; i<108; i++) ifs >> cubeNormalData[i];
        for (int i=0; i<72; i++) ifs >> cubeTextureData[i];
    }
}




void SceneBasic::readDataLight(const char* fname)
{
    ifstream ifs(fname);

    if (!ifs) {
        std::cout << "data file not found\n";
        exit(1);
    } else {
        for (int i=0; i<54; i++) ifs >> lightPositionData[i];
        for (int i=0; i<54; i++) ifs >> lightColorData[i];
    }
}






void SceneBasic::CreateVBO()
{
    // Create and populate the buffer objects
    glGenBuffers(7, vboHandles);

    GLuint cubePositionBufferHandle = vboHandles[0];
    GLuint cubeNormalBufferHandle = vboHandles[1];
    GLuint cubeTextureBufferHandle = vboHandles[2];

    GLuint lightPositionBufferHandle = vboHandles[3];
    GLuint lightColorBufferHandle = vboHandles[4];

    GLuint linePositionBufferHandle = vboHandles[5];
    GLuint lineColorBufferHandle = vboHandles[6];




    // bind positionBufferHandle to GL_ARRAY_BUFFER buffer object target
    glBindBuffer(GL_ARRAY_BUFFER, cubePositionBufferHandle);
    // creates and initializes GL_ARRAY_BUFFER buffer object's data store
    glBufferData(GL_ARRAY_BUFFER, 108 * sizeof(float), positionData, GL_STATIC_DRAW);
    // bind normalBufferHandle to GL_ARRAY_BUFFER target
    glBindBuffer(GL_ARRAY_BUFFER, cubeNormalBufferHandle);
    glBufferData(GL_ARRAY_BUFFER, 108 * sizeof(float), cubeNormalData, GL_STATIC_DRAW);

    // bind textureBufferHandle to GL_ARRAY_BUFFER target
    glBindBuffer(GL_ARRAY_BUFFER, cubeTextureBufferHandle);
    glBufferData(GL_ARRAY_BUFFER, 72 * sizeof(float), cubeTextureData, GL_STATIC_DRAW);

    // bind lightPositionBufferHandle to GL_ARRAY_BUFFER target
    glBindBuffer(GL_ARRAY_BUFFER, lightPositionBufferHandle);
    glBufferData(GL_ARRAY_BUFFER, 54 * sizeof(float), lightPositionData, GL_STATIC_DRAW);
    //std::cout << glGetError() << std::endl;
    // bind lightColorBufferHandle to GL_ARRAY_BUFFER target
    glBindBuffer(GL_ARRAY_BUFFER, lightColorBufferHandle);
    glBufferData(GL_ARRAY_BUFFER, 54 * sizeof(float), lightColorData, GL_STATIC_DRAW);

    // bind linePositionBufferHandle to GL_ARRAY_BUFFER target
    glBindBuffer(GL_ARRAY_BUFFER, linePositionBufferHandle);
    glBufferData(GL_ARRAY_BUFFER, 6 * sizeof(float), linePositionData, GL_STATIC_DRAW);
    //std::cout << glGetError() << std::endl;
    // bind lightColorBufferHandle to GL_ARRAY_BUFFER target
    glBindBuffer(GL_ARRAY_BUFFER, lineColorBufferHandle);
    glBufferData(GL_ARRAY_BUFFER, 6 * sizeof(float), lineColorData, GL_STATIC_DRAW);
    //std::cout << glGetError() << std::endl;
    // Create and set-up the vertex array object
    glGenVertexArrays( 1, &vaoHandle );
    // bind the vertex array object
    glBindVertexArray(vaoHandle);
    glBindBuffer(GL_ARRAY_BUFFER, cubePositionBufferHandle);


    /* define an array of generic vertex attribute data
       specifies the location and data format of the array of generic
       vertex attributes at index 0 to use when rendering */
    glVertexAttribPointer( 0, 3, GL_FLOAT, GL_FALSE, 0, 0);

    glBindBuffer(GL_ARRAY_BUFFER, cubeNormalBufferHandle);
    glVertexAttribPointer( 1, 3, GL_FLOAT, GL_FALSE, 0, 0);

    glBindBuffer(GL_ARRAY_BUFFER, cubeTextureBufferHandle);
    glVertexAttribPointer( 2, 2, GL_FLOAT, GL_FALSE, 0, 0);


    glBindBuffer(GL_ARRAY_BUFFER, lightPositionBufferHandle);
    glVertexAttribPointer( 3, 3, GL_FLOAT, GL_FALSE, 0, 0);

    glBindBuffer(GL_ARRAY_BUFFER, lightColorBufferHandle);
    glVertexAttribPointer( 4, 3, GL_FLOAT, GL_FALSE, 0, 0);

    glBindBuffer(GL_ARRAY_BUFFER, linePositionBufferHandle);
    glVertexAttribPointer( 5, 3, GL_FLOAT, GL_FALSE, 0, 0);

    glBindBuffer(GL_ARRAY_BUFFER, lineColorBufferHandle);
    glVertexAttribPointer( 6, 3, GL_FLOAT, GL_FALSE, 0, 0);




    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
    glEnableVertexAttribArray(2);
    glEnableVertexAttribArray(3);
    glEnableVertexAttribArray(4);
    glEnableVertexAttribArray(5);
    glEnableVertexAttribArray(6);

}










void SceneBasic::initScene()
{
    //////////////////////////////////////////////////////
    /////////// Vertex shader //////////////////////////
    //////////////////////////////////////////////////////

    /* The OpenGL Extension Wrangler Library (GLEW) is a cross-platform
     open-source C/C++ extension loading library. GLEW provides efficient
     run-time mechanisms for determining which OpenGL extensions are supported
     on the target platform.

     if you link with some function - it must exist on target platform,
     or your program wouldn't launch. GLEW handles that - you're not linking
     with GL functions directly, but instead getting function pointers after
     initialization phase. It allows you to check at runtime which extensions
     are present and which functions may be used.

     GLEW obtains information on the supported extensions from the graphics driver.
     Experimental or pre-release drivers, however, might not report every available
     extension through the standard mechanism, in which case GLEW will report
     it unsupported. To circumvent this situation, the glewExperimental global switch
     can be turned on by setting it to GL_TRUE before calling glewInit(), which ensures
     that all extensions with valid entry points will be exposed. */

    glewExperimental = GL_TRUE;
    glewInit();

    // Create the vertex shader object
    GLuint vertShader = prog1.createShader(GL_VERTEX_SHADER);

    // Check status
    if( 0 == vertShader)
    {
        fprintf(stderr, "Error creating vertex shader.\n");
        exit(1);
    }

    // load the shader from the file
    prog1.load_shader(vertShader,"shader/basic.vert");
    std::cout << glGetError() << std::endl;
    // compile the shader
    prog1.compileShader(vertShader);
    std::cout << glGetError() << std::endl;
    // Check compilation status
    prog1.checkCompileStatus(vertShader);
    std::cout << glGetError() << std::endl;


    //////////////////////////////////////////////////////
    /////////// line Vertex shader //////////////////////////
    //////////////////////////////////////////////////////
    // Create the vertex shader object
    GLuint vertShader3 = prog3.createShader(GL_VERTEX_SHADER);

    // Check status
    if( 0 == vertShader3)
    {
        fprintf(stderr, "Error creating vertex shader.\n");
        exit(1);
    }

    // load the shader from the file
    prog3.load_shader(vertShader3,"shader/lineshader.vert");
    std::cout << glGetError() << std::endl;
    // compile the shader
    prog3.compileShader(vertShader3);
    std::cout << glGetError() << std::endl;
    // Check compilation status
    prog3.checkCompileStatus(vertShader3);

    // Create the program object
    if (!prog3.createObject()) printf("error\n");

    // attach shaders to program object
    prog3.attachShader(vertShader3);


     //link the program
    prog3.link();




    //////////////////////////////////////////////////////
    /////////// Fragment shader //////////////////////////
    //////////////////////////////////////////////////////


   // Create the fragment shader object
    GLuint fragShader = prog1.createShader(GL_FRAGMENT_SHADER);

    // Check status
    if( 0 == fragShader)
    {
        fprintf(stderr, "Error creating fragment shader.\n");
        exit(1);
    }

    // load the shader from the file
    prog1.load_shader(fragShader,"shader/basic.frag");

    // compile the shader
    prog1.compileShader(fragShader);

    // Check compilation status
    prog1.checkCompileStatus(fragShader);

    // Create the program object
    if (!prog1.createObject()) printf("error\n");

    // attach shaders to program object
    prog1.attachShader(vertShader);
    prog1.attachShader(fragShader);

    // link the program
    prog1.link();

    // Create the vertex shader object
    GLuint vertShader2 = prog2.createShader(GL_VERTEX_SHADER);

    // Check status
    if( 0 == vertShader2)
    {
        fprintf(stderr, "Error creating vertex shader.\n");
        exit(1);
    }

    // load the shader from the file
    prog2.load_shader(vertShader2,"shader/light.vert");

    // compile the shader
    prog2.compileShader(vertShader2);

    // Check compilation status
    prog2.checkCompileStatus(vertShader2);


    //////////////////////////////////////////////////////
    /////////// Fragment shader //////////////////////////
    //////////////////////////////////////////////////////


   // Create the fragment shader object
    GLuint fragShader2 = prog2.createShader(GL_FRAGMENT_SHADER);

    // Check status
    if( 0 == fragShader2)
    {
        fprintf(stderr, "Error creating fragment shader.\n");
        exit(1);
    }

    // load the shader from the file
    prog2.load_shader(fragShader2,"shader/light.frag");

    // compile the shader
    prog2.compileShader(fragShader2);

    // Check compilation status
    prog2.checkCompileStatus(fragShader2);

    // Create the program object
    if (!prog2.createObject()) printf("error\n");

    // attach shaders to program object
    prog2.attachShader(vertShader2);
    prog2.attachShader(fragShader2);

    // link the program
    prog2.link();

    // create and populate the vertex buffer opbject
    CreateVBO();

    prog1.printActiveUniforms();
    //prog3.printActiveUniforms();

    // initialise he modelling and viewing matrices
    model = mat4(1.0f);
    projection = mat4(1.0f);

    // set the background window color
    glClearColor( 0.0, 0.5, 0.8, 1.0 );
    glEnable(GL_DEPTH_TEST);
    // Load texture file
    QImage timg = QGLWidget::convertToGLFormat(*image);
    std::cout << glGetError() << "image depth" << timg.depth() << "image height" << timg.height() << std::endl;
    // Copy image texture file to OpenGL
    glActiveTexture(GL_TEXTURE0);
    std::cout << glGetError() << std::endl;
    GLuint tid;
    std::cout << glGetError() << std::endl;
    glGenTextures(1, &tid);
    std::cout << glGetError() << std::endl;
    glBindTexture(GL_TEXTURE_2D, tid);
    std::cout << glGetError() << std::endl;
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, timg.width(), timg.height(), 0,
                 GL_RGBA, GL_UNSIGNED_BYTE, timg.bits());
    std::cout << glGetError() << std::endl;
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    std::cout << glGetError() << std::endl;
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    std::cout << glGetError() << std::endl;
    prog1.use();
    prog1.setUniform("Tex1", 0);
    prog1.setUniform("ambientColor", vec4(0.4,0.4,0.4,1.0));
    prog1.setUniform("diffuseColor1", vec4(0.0f,0.0f,1.0f,1.0));
    prog1.setUniform("diffuseColor2", vec4(1.0f,0.0f,0.0f,1.0));
    prog1.setUniform("diffuseColor3", vec4(0.0f,1.0f,0.0f,1.0));
    prog1.setUniform("specularColor1", vec4(0.0,0.0,1.0,1.0));
    prog1.setUniform("specularColor2", vec4(1.0,0.0,0.0,1.0));
    prog1.setUniform("specularColor3", vec4(0.0,1.0,0.0,1.0));
    prog1.setUniform("ambientReflection", 1.0f);
    prog1.setUniform("diffuseReflection", 1.0f);
    prog1.setUniform("specularReflection", 1.0f);
    prog1.setUniform("shininess", (GLfloat) 50.0);
    prog1.setUniform("spotCutoff",45.0f);
    prog1.setUniform("spotExponent",20.0f);
    prog1.setUniform("constantAttenuation",0.0f);
    prog1.setUniform("linearAttenuation",1.0f);
    prog1.setUniform("quadraticAttenuation",0.0f);
    prog1.release();
    std::cout << "prog1 released"<< glGetError() << std::endl;

}




void SceneBasic::update( QImage* image )
{
    this->image = image;
    QImage timg = QGLWidget::convertToGLFormat(*image);

    // Copy file to OpenGL
    glActiveTexture(GL_TEXTURE0);
    GLuint tid;
    glGenTextures(1, &tid);
    glBindTexture(GL_TEXTURE_2D, tid);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, timg.width(), timg.height(), 0,
                 GL_RGBA, GL_UNSIGNED_BYTE, timg.bits());
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
}


void SceneBasic::update( float t)
{

}


void SceneBasic::setLineData(float line[6])
{
    for (int i = 0; i < 6; ++i) {
        linePositionData[i]=line[i];
        CreateVBO();
    }



}

void SceneBasic::setRot()
{

    this->createTransMatrix();
    this->createRotMatrix();


}

void SceneBasic::setAlpha(float alpha)
{
    this->alpha=alpha;

}

void SceneBasic::setDefaults()
{

    setDnorm(vec3(0.0f,1.0f,0.0f));
    setAlpha(0.0f);
    setRot();

    setMatrices( vec3(0.0f,0.0f,2.0f),  vec3(0.0f,0.0f,0.0f),this->rot);
    setMatricesLine(vec3(0.0f,0.0f,2.0f),  vec3(0.0f,0.0f,0.0f));


}


void SceneBasic::setMatrices(vec3 eye, vec3 point ,mat4 rot)
{

    model=tranB*rot*tranMinB;

    view = glm::lookAt(eye, point, vec3(0.0f,1.0f,0.0f));
    mat4 mv = view *model;
    prog1.use();  // tells which prog to use.
    prog1.setUniform("ModelViewMatrix", mv);
    prog1.setUniform("MVP", projection * mv);
    prog1.setUniform("NormalMatrix",
                                mat3( vec3(mv[0]), vec3(mv[1]), vec3(mv[2]) ));
    prog1.setUniform("lightPosition1", view * lightPosition1);

    // Bind index 0 to the shader input variable "VertexPosition"
      prog1.bindAttribLocation(0, "VertexPosition");
      // Bind index 1 to the shader input variable "VertexNormal"
      prog1.bindAttribLocation(1, "VertexNormal");
      // Bind index 2 to the shader input variable "VertexTexCoord"
      prog1.bindAttribLocation(2, "VertexTexCoord");

//      /* enables the generic vertex attribute array
//         the values in the generic vertex attribute array will be accessed
//         and used for rendering when calls are made to vertex array commands
//         such as glDrawArrays */

       glEnableVertexAttribArray(0);
       glEnableVertexAttribArray(1);
       glEnableVertexAttribArray(2);

      glDrawArrays(GL_TRIANGLES, 0, 36 );


//      /* disables the generic vertex attribute array */
      glDisableVertexAttribArray(0);
      glDisableVertexAttribArray(1);
      glDisableVertexAttribArray(2);

//      // release the program object
      prog1.release();

}

void SceneBasic::setMatricesLine(glm::vec3 eye, glm::vec3 point)
{

    model=mat4(1.0f);
    view = glm::lookAt(eye, point, vec3(0.0f,1.0f,0.0f));
    mat4 mv = view * model;
    prog3.use();  // tells which prog to use.
    prog3.setUniform("ModelViewMatrix", mv);
    prog3.setUniform("MVP", projection * mv);
  ;
    //prog1.setUniform("lightPosition1", view * lightPosition1);

    // Bind index 5 to the shader input variable "VertexPosition"
      prog3.bindAttribLocation(5, "VertexPosition");
      // Bind index 6 to the shader input variable "VertexNormal"
      prog3.bindAttribLocation(6, "VertexColor");


      /* enables the generic vertex attribute array
         the values in the generic vertex attribute array will be accessed
         and used for rendering when calls are made to vertex array commands
         such as glDrawArrays */

       glEnableVertexAttribArray(5);
       glEnableVertexAttribArray(6);



      glDrawArrays(GL_LINES, 0, 2 );

      /* disables the generic vertex attribute array */

      glDisableVertexAttribArray(5);
      glDisableVertexAttribArray(6);

      // release the program object
      prog3.release();

}




void SceneBasic::setMatricesLight1(float angleX,float angleY)
{


    model = mat4(1.0f);


    lightPosition1b = glm::rotate(mat4(1.0f),angleX,vec3(0.0,1.0,0.0))* vec4(0.0f, 0.0f, 2.5f, 1.0f);
    lightPosition1a = glm::rotate(mat4(1.0f),angleY,vec3(1.0,0.0,0.0))* vec4(0.0f, 0.0f, 2.5f, 1.0f);
    lightPosition1=lightPosition1b;//*lightPosition1a;
    mat4 m1 = glm::translate(mat4(1.0f),vec3(lightPosition1.x,lightPosition1.y,lightPosition1.z));
    mat4 m1_1 = glm::translate(mat4(1.0f),vec3(lightPosition1b.x,lightPosition1b.y,lightPosition1b.z));
    mat4 m2 = glm::rotate(mat4(1.0f),angleX,vec3(0.0,1.0,0.0));
    mat4 m2_2 = glm::rotate(mat4(1.0f),angleY,vec3(0.1,0.0,0.0));
    mat4 m3 = glm::rotate(mat4(1.0f),PI/2.0f,vec3(1.0,0.0,0.0));
    mat4 m4 = glm::scale(mat4(1.0f),vec3(0.5f,0.5f,0.5f));
    mat4 m5 = glm::translate(mat4(1.0f),vec3(0.0f,-1.0f,0.0f));

    model = m1 *m1_1 * m2 * m2_2 * m3 * m4 * m5;
    mat4 mv = view * model;

    prog2.use();
    prog2.setUniform("MVP", projection * mv);
    // Bind index 3 to the shader input variable "VertexPosition"
    prog2.bindAttribLocation(3, "VertexPosition");
    // Bind index 4 to the shader input variable "VertexColor"
    prog2.bindAttribLocation(4, "VertexColor");

    glEnableVertexAttribArray(3);
    glEnableVertexAttribArray(4);

    // draw the light pyramid
    glDrawArrays(GL_TRIANGLES, 0, 18 );

    glDisableVertexAttribArray(3);
    glDisableVertexAttribArray(4);

    // release the program object
    prog2.release();
}





void SceneBasic::createRotMatrix()
{

    float x=dNorm.x;
    float y=dNorm.y;
    float z=dNorm.z;





    OneMinCosAlpha=1.0f-cos(this->alpha);



    //col1
    this->rotData[0]=OneMinCosAlpha*x*x+(cos(alpha));
    this->rotData[1]=OneMinCosAlpha*x*y+(z*sin(alpha));
    this->rotData[2]=OneMinCosAlpha*z*x-(y*sin(alpha));
    this->rotData[3]=0.0f;
    //col2
    this->rotData[4]=OneMinCosAlpha*x*y-(z*sin(alpha));
    this->rotData[5]=OneMinCosAlpha*y*y+(  cos(alpha));
    this->rotData[6]=OneMinCosAlpha*y*z+(x*sin(alpha));
    this->rotData[7]=0.0f;
    //col3
    this->rotData[8]=OneMinCosAlpha*z*x+(y*sin(alpha));
    this->rotData[9]=OneMinCosAlpha*y*z-(x*sin(alpha));
    this->rotData[10]=OneMinCosAlpha*z*z+(  cos(alpha));
    this->rotData[11]=0.0f;
    //col4
    this->rotData[12]=0.0f;
    this->rotData[13]=0.0f;
    this->rotData[14]=0.0f;
    this->rotData[15]=1.0f;



    rot = glm::make_mat4(rotData);










}

void SceneBasic::createTransMatrix()
{
    qDebug() << "line data b" << this->linePositionData[0]  <<","<< this->linePositionData[1] <<","<< this->linePositionData[2] ;
    this->tranB = glm::translate(glm::mat4(1.0), glm::vec3(this->linePositionData[0], this->linePositionData[1], this->linePositionData[2]));

    qDebug() << "set translation b matrix" ;
    std::cout << glm::to_string(tranB) << std::endl;
    this->tranMinB = glm::translate(glm::mat4(1.0),  glm::vec3(-1*(this->linePositionData[0]), -1*(this->linePositionData[1]), -1*(this->linePositionData[2])));
    qDebug() << "set translation minus b matrix" ;
    std::cout << glm::to_string(tranMinB) << std::endl;

}

void SceneBasic::setDnorm(vec3 d)
{
    this->dNorm= glm::normalize(d);
}




void SceneBasic::render(vec3 eye,vec3 point)
{

    /* sets the bitplane area of the window to values previously
       selected by glClear. GL_COLOR_BUFFER_BIT indicates the buffers
       currently enabled for color writing. */

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    /* render primitives from array data
       GL_TRIANGLES Specifies what kind of primitives to render.
       Possibilities are symbolic constants GL_POINTS, GL_LINE_STRIP,
       GL_LINE_LOOP, GL_LINES, GL_TRIANGLE_STRIP, GL_TRIANGLE_FAN and GL_TRIANGLES.
       0 specifies the starting index in the enabled arrays.
       36 specifies the number of indices to be rendered. */

    setMatrices(eye,point,this->rot);
    setMatricesLight1(0.0,0.0);
    setMatricesLine(eye,point);

    ;
}

void SceneBasic::resize(int w, int h)
{
    glViewport(0,0,w,h);
    width = w;
    height = h;
    projection = glm::perspective(2*PI/8.0f, (float)w/h, 0.3f, 10.0f);
}


void SceneBasic::printActiveUniforms(GLuint programHandle) {

    GLint nUniforms, size, location, maxLen;
    GLchar * name;
    GLsizei written;
    GLenum type;

    glGetProgramiv( programHandle, GL_ACTIVE_UNIFORM_MAX_LENGTH, &maxLen);
    glGetProgramiv( programHandle, GL_ACTIVE_UNIFORMS, &nUniforms);

    name = (GLchar *) malloc( maxLen );

    printf(" Location | Name\n");
    printf("------------------------------------------------\n");
    for( int i = 0; i < nUniforms; ++i ) {
        glGetActiveUniform( programHandle, i, maxLen, &written, &size, &type, name );
        location = glGetUniformLocation(programHandle, name);
        printf(" %-8d | %s\n",location, name);
    }

    free(name);
}

void SceneBasic::printActiveAttribs(GLuint programHandle) {

    GLint written, size, location, maxLength, nAttribs;
    GLenum type;
    GLchar * name;

    glGetProgramiv(programHandle, GL_ACTIVE_ATTRIBUTE_MAX_LENGTH, &maxLength);
    glGetProgramiv(programHandle, GL_ACTIVE_ATTRIBUTES, &nAttribs);

    name = (GLchar *) malloc( maxLength );

    printf(" Index | Name\n");
    printf("------------------------------------------------\n");
    for( int i = 0; i < nAttribs; i++ ) {
        glGetActiveAttrib( programHandle, i, maxLength, &written, &size, &type, name );
        location = glGetAttribLocation(programHandle, name);
        printf(" %-5d | %s\n",location, name);
    }

    free(name);
}

void SceneBasic::setMaterialContributions(float ambientReflection,float diffuseReflection,float specularReflection,float constantAttenuation,float linearAttenuation,float quadraticAttenuation,float spotCutoff,float spotExponent,vec4 ambientColor,vec4 diffuseColor1,vec4 specularColor1)
{


    prog1.use();



    prog1.setUniform("ambientReflection",ambientReflection);
    prog1.setUniform("diffuseReflection",diffuseReflection);
    prog1.setUniform("specularReflection",specularReflection);
    prog1.setUniform("constantAttenuation",constantAttenuation);
    prog1.setUniform("linearAttenuation",linearAttenuation);
    prog1.setUniform("quadraticAttenuation",quadraticAttenuation);
    prog1.setUniform("spotCutoff",spotCutoff);
    prog1.setUniform("spotExponent",spotExponent);
    prog1.setUniform("ambientColor",ambientColor);
    prog1.setUniform("diffuseColor1",diffuseColor1);
    prog1.setUniform("specularColor1",specularColor1);



//      // release the program object
      prog1.release();

}
