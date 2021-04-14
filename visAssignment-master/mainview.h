#ifndef MAINVIEW_H
#define MAINVIEW_H

#include "C:/glew-2.1.0/include/GL/glew.h"

#include <QGLWidget>
#include <QTimer>
#include "ui_uiinput.h"
#include "scene.h"

class MainView : public QGLWidget
{
    Q_OBJECT

private:
    QTimer *timer;
    Scene *scene;
    int samples=16;




public:
    MainView( const QGLFormat & format, QWidget *parent = 0);
    vec3 eye = {0.0,0.0,2.0};// eye/camera co-ordinates
    vec3 point= {0.0,0.0,0.0}; // lookat point
    vec3 d = {0.0,1.0,0.0}; //directional vector line
    float alpha;
    float line[6]={0.0,0.0,0.0,0.0,1.0,0.0}; //point representation of line
    float u=1.0; //Scalar multiplier for line length
    void calcLine();
    void calcRot();
    float ambientReflection =1.0f;
    float diffuseReflection =1.0f;
    float specularReflection =1.0f;
    float constantAttenuation =1.0f;
    float linearAttenuation =1.0f;
    float quadraticAttenuation =1.0f;
    float spotCutoff =1.0f;
    float spotExponent =1.0f;
    vec4 ambientColor = {1.0,1.0,1.0,1.0};
    vec4 diffuseColor1 = {1.0,1.0,1.0,1.0};
    vec4 specularColor1 = {1.0,1.0,1.0,1.0};
    float lightX =0.0;
    float lightY= 0.0;



protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);




public slots:
    void timerUpdate();
    void toggleAnimation();


};

#endif // MAINVIEW_H
