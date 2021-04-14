#ifndef SCENE_H
#define SCENE_H

#include "C:/glm/glm/glm.hpp"
#include <QImage>
using glm::vec3;
using glm::vec4;


class Scene
{
public:




    /**
      Load textures, initialize shaders, etc.
      */
    virtual void initScene() = 0;

    /**
      This is called prior to every frame.  Use this
      to update your animation.
      */
    virtual void update( float t ) = 0;
    virtual void update( QImage* image ) = 0;




    /**
      Draw your scene.
      */
    virtual void render(vec3 eye ,vec3 point) = 0;

    /**
      Called when screen is resized
      */
    virtual void resize(int, int) = 0;

    /**
    sets up line from 2 3D points
      */

    virtual void setLineData(float line[6])= 0;


    /**
    sets up our rotational matrix
      */


    virtual void setRot()= 0;

    /**
    sets the angle of rotation for our object
      */


    virtual void setMatricesLight1(float x, float y)= 0;

    /**
    set matricies for our light
      */


    virtual void setAlpha(float alpha)= 0;

    /**
    sets the alpha property used to calculate the angle of rotation about our line
      */




    virtual void setDnorm(vec3 d) =0;

    /**
    sets normalised value of vector d from our line equation
      */



    virtual void setMaterialContributions(float ambientReflection,float diffuseReflection,float specularReflection,float constantAttenuation,float linearAttenuation,float quadraticAttenuation,float spotCutoff,float spotExponent,vec4 ambientColor,vec4 diffuseColor1,vec4 specularColor1) = 0;
    /**
    set values for various lighting properties to be passed to the shader.
      */

};

#endif // SCENE_H
