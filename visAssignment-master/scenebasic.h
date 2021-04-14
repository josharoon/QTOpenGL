#ifndef SCENEBASIC_H
#define SCENEBASIC_H

#include "scene.h"
#include "C:/glew-2.1.0/include/GL/glew.h"
#include "glslprogram.h"
#include "C:/glm/glm/glm.hpp"
#include <QImage>


using glm::mat4;
using glm::vec3;

class SceneBasic : public Scene
{
private:
    int width, height;
    GLuint vboHandles[7];
    GLuint vaoHandle;
    GLSLProgram prog1, prog2,prog3;
    QImage* image;
    float lightAngle;


    mat4 model;
    mat4 view;
    mat4 projection;
    mat4 tranB;
    mat4 tranMinB;
    mat4 rot;
    float rotData[16];
    float OneMinCosAlpha;
    float alpha=0.0;
    vec3 dNorm;

    // TODO: I am in the process of implementing sliders to control the position of the light.
    vec4 lightPosition1;
    vec4 lightPosition1a;//data for light positon
    vec4 lightPosition1b; //data for light positon


    void readDataLight(const char* fname);
    void readDataCube(const char* fname);
    void readData(const char* fname);
    void CreateVBO();

    float positionData[108]; // +6 for line
    float colorData[108];

    float lineData[6]= {0.0,0.0,0.0,0.0,1.0,0.0};
    float color2Data[6]={1.0,0.0,0.0,0.0,0.0,1.0};

    // Added so I can start working with textures and lights

    float cubePositionData[108];
    float cubeNormalData[108];
    float cubeTextureData[72];
    float lightPositionData[54];
    float lightColorData[54];
    float linePositionData[6]= {0.0,0.0,0.0,0.0,1.0,0.0};
    float lineColorData[6]={1.0,0.0,0.0,0.0,0.0,1.0};




public:
    SceneBasic();
    void setMatrices(vec3 eye, vec3 point, mat4 rot);

    void setMatricesLine(vec3 eye, vec3 point);
    void createRotMatrix();
    void createTransMatrix();
    void setDnorm(vec3 d);
    void initScene();
    void render(vec3 eye, vec3 point);
    void resize(int, int);
    void update( QImage* image );
    void update(float t);
    void setLineData(float line[6]);
    void setMatricesLight1(float angleX,float angleY);
    void setView(float distance);
    void setRot();
    void setAlpha(float alpha);
    void setDefaults();
    void printActiveUniforms(GLuint programHandle);
    void printActiveAttribs(GLuint programHandle);
    void setMaterialContributions(float ambientReflection,float diffuseReflection,float specularReflection,float constantAttenuation,float linearAttenuation,float quadraticAttenuation,float spotCutoff,float spotExponent,vec4 ambientColor,vec4 diffuseColor1,vec4 specularColor1);



};

#endif // SCENEBASIC_H
