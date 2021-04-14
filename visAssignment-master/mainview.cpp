#include "mainview.h"
#include "scenebasic.h"
#include "glutils.h"

#include "uiinput.h"
#include <iostream>
#include <cstdio>
#include <QDebug>
using std::cout;
using std::endl;



MainView::MainView(const QGLFormat & format, QWidget *parent) : QGLWidget(format, parent)
{


    // This tells the widget to accept keyboard focus when the widget is clicked.
    this->setFocusPolicy(Qt::ClickFocus);






    timer = new QTimer(this);
    connect( timer, SIGNAL(timeout()), this, SLOT(timerUpdate()) );
    timer->start(50);

    this->setMinimumSize(800,600);






}

void MainView::calcLine()
{
    /**
     * calculate line points based on formula.
     */
    this->line[3]=this->line[0]+(this->d.x*u);
    this->line[4]=this->line[1]+(this->d.y*u);
    this->line[5]=this->line[2]+(this->d.z*u);
    scene->setDnorm(this->d);

    qDebug() << "p1.xyz = " << this->line[0] << this->line[1] << this->line[2];
    qDebug() << "p2.xyz = " << this->line[3] << this->line[4] << this->line[5];
}

void MainView::calcRot()
{
    scene->setAlpha(this->alpha);
    scene->setRot();


}


void MainView::initializeGL() {

    //////////////// PLUG IN SCENE HERE /////////////////
    scene = new SceneBasic();
    ////////////////////////////////////////////////////

    GLenum err = glewInit();
    if( GLEW_OK != err )
    {
        cout <<"Error initializing GLEW: " << glewGetErrorString(err) << endl;
    }
   // GLUtils::checkForOpenGLError(__FILE__,__LINE__);
     GLUtils::checkForOpenGLError();

    QGLFormat format = this->format();
    printf("QGLFormat reports profile: ");
    if( format.profile() == QGLFormat::CompatibilityProfile )
        printf("compatability.\n");
    else if( format.profile() == QGLFormat::CoreProfile )
        printf("core.\n");
    else
        printf("none.\n");

    GLUtils::dumpGLInfo();

    glClearColor(0.0f,0.0f,0.0f,1.0f);

    scene->initScene();
}

void MainView::paintGL() {
    GLUtils::checkForOpenGLError();
    scene->setMaterialContributions(ambientReflection,diffuseReflection,specularReflection,constantAttenuation,linearAttenuation,quadraticAttenuation,spotCutoff,spotExponent,ambientColor,diffuseColor1,specularColor1);
    scene->setLineData(line);
    scene->setMatricesLight1(lightX,lightY);
    scene->render(eye,point);


}

void MainView::resizeGL(int w, int h ) {
    scene->resize(w,h);
}


void MainView::toggleAnimation() {
    if( timer->isActive() )
        timer->stop();
    else
        timer->start();
}

void MainView::timerUpdate() {
    scene->update(1.0f);
    updateGL();
}






