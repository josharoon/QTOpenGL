#ifndef CRREATEVIEW_H
#define CRREATEVIEW_H
#include "mainview.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QObject>



class crreateView: public QObject
{
    Q_OBJECT

public:
    crreateView();
    MainView *setView(MainWindow &window);

    static MainView * view;

    MainWindow *window;
    void updateSamples(int samples=2);









};



#endif // CRREATEVIEW_H
