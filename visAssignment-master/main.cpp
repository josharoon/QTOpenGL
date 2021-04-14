#include <QApplication>
#include <QMainWindow>
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QMainWindow>
#include "mainview.h"
#include "ui_uiinput.h"
#include "uiinput.h"
#include <QGLFormat>
#include "mainwindow.h"
#include <QSpacerItem>
#include <QDebug>
#include "crreateview.h"





int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MainWindow *window = new MainWindow();
    // The main window
    QWidget* win = new QWidget(window);




    QGLFormat format;
    format.setVersion(4,0);
    format.setProfile(QGLFormat::CoreProfile);
    format.setSampleBuffers(true);
    format.setSamples(64); //add antialiasing;


    // The GL view

      MainView *glView2 = new MainView(format, window);


    window->setView(glView2);
    QVBoxLayout *mainLayout = new QVBoxLayout(win);
    mainLayout->addWidget(glView2);
    //mainLayout->addWidget(window->centralWidget()->findChild<QWidget*>("ControlWidget"));
    mainLayout->addWidget(window->centralWidget()->findChild<QWidget*>("tabWidget"));
    window->setLayout(mainLayout);
    window->setCentralWidget(win);
    window->setFixedSize(850,850);
    window->show();
    window->setDefaults();
    return app.exec();


}

