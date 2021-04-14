#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <iostream>
#include <QCoreApplication>
#include <QDir>
#include <QDesktopServices>
#include <QUrl>
#include <QPalette>



const float PI = 4.0*atan(1.0);

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), uid(new Ui::MainWindow)
{
    uid->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete uid;
}

void MainWindow::setView(MainView* &view)
{
    this->view = view;
}




void MainWindow::on_eyeXspin_2_valueChanged(double arg1)
{

    view->eye.x =arg1;
}

void MainWindow::on_eyeYspin_2_valueChanged(double arg1)
{
     view->eye.y =arg1;
}

void MainWindow::on_eyeZspin_2_valueChanged(double arg1)
{
     view->eye.z =arg1;
}

void MainWindow::on_LookAtZspin_2_valueChanged(double arg1)
{
    view->point.z =arg1;
}

void MainWindow::on_LookAtYspin_2_valueChanged(double arg1)
{
    view->point.y =arg1;
}

void MainWindow::on_LookAtXspin_2_valueChanged(double arg1)
{
    view->point.x =arg1;
}


void MainWindow::on_bX_valueChanged(double arg1)
{
  view->line[0]=arg1;
  view->calcLine();
}

void MainWindow::on_bY_valueChanged(double arg1)
{
   view->line[1]=arg1;
   view->calcLine();
}

void MainWindow::on_bZ_valueChanged(double arg1)
{
    view->line[2]=arg1;
    view->calcLine();
}



void MainWindow::on_MuYSpin_valueChanged(double arg1)
{
    view->d.y=arg1;
    view->calcLine();
    qDebug() << "p2.Y =" << view->line[3];
}

void MainWindow::on_dSpin_valueChanged(double arg1)
{
    view->u=arg1;
    view->calcLine();

}

void MainWindow::on_MuXSpin_valueChanged(double arg1)
{
    view->d.x=arg1;
    view->calcLine();

}

void MainWindow::on_MuZSpin_valueChanged(double arg1)
{
    view->d.z=arg1;
    view->calcLine();

}

void MainWindow::on_alphaSpinBox_valueChanged(double arg1)
{
    view->alpha=(arg1*PI)/180.0;
    view->calcLine();
    view->calcRot();

}

void MainWindow::setDefaults()
{
    qDebug() << "Setting default Values";
    uid->eyeXspin_2->setValue(0.0);
    uid->eyeYspin_2->setValue(0.0);
    uid->eyeZspin_2->setValue(2.0);

    uid->LookAtXspin_2->setValue(0.0);
    uid->LookAtYspin_2->setValue(0.0);
    uid->LookAtZspin_2->setValue(0.0);

    uid->dSpin->setValue(1.0);


    uid->bX->setValue(0.0);
    uid->bY->setValue(0.0);
    uid->bZ->setValue(0.0);

    uid->MuXSpin->setValue(0.0);
    uid->MuYSpin->setValue(1.0);
    uid->MuZSpin->setValue(0.0);
    uid->alphaSpinBox->setValue(0.0);
}

void MainWindow::on_Default_clicked()
{
    qDebug() << "defaults clicked ";
    setDefaults();



}



void MainWindow::on_CodeDocPushButton_clicked()
{
   QDir doc=QDir(QCoreApplication::applicationDirPath()).relativeFilePath("./documentation/html/");
   //qDebug() << QCoreApplication::applicationDirPath();
   qDebug() << doc.absolutePath();
   //qDebug() << QDir(QCoreApplication::applicationDirPath()).dirName();
   QDesktopServices::openUrl(doc.absoluteFilePath("index.html"));
}



void MainWindow::on_ambientReflectionSpinBox_valueChanged(int arg1)
{
    view->ambientReflection=arg1/valScale;
}

void MainWindow::on_spotExponentSpinBox_valueChanged(int arg1)
{
    view->spotExponent=arg1;
}

void MainWindow::on_spotCutoffSpinBox_valueChanged(int arg1)
{
    view->spotCutoff=arg1/3000.0f;
}

void MainWindow::on_specularReflectionSpinBox_valueChanged(int arg1)
{
    view->specularReflection=arg1/valScale;
}

void MainWindow::on_diffuseReflectionSpinBox_valueChanged(int arg1)
{
    view->diffuseReflection=arg1/valScale;
}

void MainWindow::on_constantAttenuationSpinBox_valueChanged(int arg1)
{
    view->constantAttenuation=arg1/valScale;
}

void MainWindow::on_linearAttenuationSpinBox_valueChanged(int arg1)
{
    view->linearAttenuation=arg1/valScale;
}

void MainWindow::on_quadraticAttenuationSpinBox_valueChanged(int arg1)
{
   view->quadraticAttenuation=arg1/valScale;
}

void MainWindow::on_redSlider_valueChanged(int value)
{
    view->ambientColor[0]=value/255.0;


    colorChanged();

}
void MainWindow::on_greenSlider_valueChanged(int value)
{
    view->ambientColor[1]=value/255.0;

    colorChanged();

}
void MainWindow::on_blueSlider_valueChanged(int value)

{

    view->ambientColor[2]=value/255.0;
    colorChanged();

}



void MainWindow::colorChanged()
{
   m_color.setRgb(uid->redSlider->value(),uid->greenSlider->value(),uid->blueSlider->value());
   QPalette pal = uid->colorWidget->palette();
   pal.setColor(QPalette::Window, m_color);
   uid->colorWidget->setPalette(pal);


}

void MainWindow::colorChanged2()
{
   m_color.setRgb(uid->redSliderDiffuse->value(),uid->greenSliderDiffuse->value(),uid->blueSliderDiffuse->value());
   QPalette pal = uid->colorWidget2->palette();
   pal.setColor(QPalette::Window, m_color);
   uid->colorWidget2->setPalette(pal);


}


void MainWindow::colorChanged3()
{
   m_color.setRgb(uid->redSliderSpecular->value(),uid->greenSliderSpecular->value(),uid->blueSliderSpecular->value());
   QPalette pal = uid->colorWidget3->palette();
   pal.setColor(QPalette::Window, m_color);
   uid->colorWidget3->setPalette(pal);


}


void MainWindow::on_alphaSlider_valueChanged(int value)
{
     view->ambientColor[3]=value/255.0;
}

void MainWindow::on_redSliderDiffuse_valueChanged(int value)
{
    view->diffuseColor1[0]=value/255.0;

    colorChanged2();
}


void MainWindow::on_greenSliderDiffuse_valueChanged(int value)
{
    view->diffuseColor1[1]=value/255.0;

    colorChanged2();
}

void MainWindow::on_blueSliderDiffuse_valueChanged(int value)
{
    view->diffuseColor1[2]=value/255.0;
    colorChanged2();
}


void MainWindow::on_blueSliderSpecular_valueChanged(int value)
{
    view->specularColor1[2]=value/255.0;
    colorChanged3();
}

void MainWindow::on_greenSliderSpecular_valueChanged(int value)
{
    view->specularColor1[1]=value/255.0;
    colorChanged3();
}
void MainWindow::on_redSliderSpecular_valueChanged(int value)
{
    view->specularColor1[0]=value/255.0;
    colorChanged3();
}



void MainWindow::on_lightSliderHorizontal_valueChanged(int value)
{
    view->lightX=value*(PI/180);
}

void MainWindow::on_lightSliderVertical_valueChanged(int value)
{
    view->lightY=value*(PI/180);
}
