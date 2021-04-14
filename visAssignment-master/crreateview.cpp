#include "crreateview.h"
#include <QDebug>

MainView *  crreateView::view= nullptr;
crreateView::crreateView()
{

}



MainView *crreateView::setView(MainWindow &window)
{
    qDebug() << "setView";

    QGLFormat format;
    format.setVersion(4,0);
    format.setProfile(QGLFormat::CoreProfile);
    format.setSampleBuffers(true);
    format.setSamples(64); //add antialiasing;
    this->window=&window;


    // The GL view

    MainView *glView = new MainView(format, &window);
    crreateView::view=glView;
    return glView;

}

