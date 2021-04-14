#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QColor>
#include "mainview.h"

namespace Ui {
class MainWindow;
}



class MainWindow : public QMainWindow
{
    Q_OBJECT
    Q_PROPERTY(QColor color READ color NOTIFY colorChanged)

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setView(MainView* &view);
    void colorChanged();
    void colorChanged2();
    void colorChanged3();


public:
    MainView* view;
    Ui::MainWindow *uid;

    void setDefaults();
    QColor color() const
{
    return m_color;
}


    void changePalette();

private:
    float valScale =50.0f;
    QColor m_color;


//signals:



private slots:
    void on_eyeYspin_2_valueChanged(double arg1);
    void on_eyeXspin_2_valueChanged(double arg1);
    void on_eyeZspin_2_valueChanged(double arg1);
    void on_LookAtZspin_2_valueChanged(double arg1);
    void on_LookAtYspin_2_valueChanged(double arg1);
    void on_LookAtXspin_2_valueChanged(double arg1);
    void on_bX_valueChanged(double arg1);
    void on_bY_valueChanged(double arg1);
    void on_bZ_valueChanged(double arg1);

    void on_MuYSpin_valueChanged(double arg1);
    void on_dSpin_valueChanged(double arg1);
    void on_MuXSpin_valueChanged(double arg1);
    void on_MuZSpin_valueChanged(double arg1);

    void on_alphaSpinBox_valueChanged(double arg1);

    void on_Default_clicked();

    void on_CodeDocPushButton_clicked();

    void on_ambientReflectionSpinBox_valueChanged(int arg1);
    void on_spotExponentSpinBox_valueChanged(int arg1);
    void on_spotCutoffSpinBox_valueChanged(int arg1);
    void on_specularReflectionSpinBox_valueChanged(int arg1);
    void on_diffuseReflectionSpinBox_valueChanged(int arg1);
    void on_constantAttenuationSpinBox_valueChanged(int arg1);
    void on_linearAttenuationSpinBox_valueChanged(int arg1);
    void on_quadraticAttenuationSpinBox_valueChanged(int arg1);
    void on_redSlider_valueChanged(int value);
    void on_greenSlider_valueChanged(int value);
    void on_blueSlider_valueChanged(int value);
    void on_alphaSlider_valueChanged(int value);
    void on_redSliderDiffuse_valueChanged(int value);
    void on_greenSliderDiffuse_valueChanged(int value);
    void on_blueSliderDiffuse_valueChanged(int value);
    void on_blueSliderSpecular_valueChanged(int value);
    void on_greenSliderSpecular_valueChanged(int value);
    void on_redSliderSpecular_valueChanged(int value);


    void on_lightSliderHorizontal_valueChanged(int value);
    void on_lightSliderVertical_valueChanged(int value);
};

#endif // MAINWINDOW_H
