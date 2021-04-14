/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *ControlWidget;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_8;
    QDoubleSpinBox *bX;
    QDoubleSpinBox *bY;
    QDoubleSpinBox *bZ;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_Mu;
    QDoubleSpinBox *MuXSpin;
    QDoubleSpinBox *MuYSpin;
    QDoubleSpinBox *MuZSpin;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout;
    QLabel *label_11;
    QDoubleSpinBox *dSpin;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_12;
    QDoubleSpinBox *alphaSpinBox;
    QVBoxLayout *verticalLayout_13;
    QPushButton *pushButton;
    QPushButton *CodeDocPushButton;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_12;
    QSlider *lightSliderHorizontal;
    QSlider *lightSliderVertical;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *eyeLabelsLayout_2;
    QLabel *eyeXlabel_2;
    QLabel *eyeZlabel_2;
    QLabel *eyeYlabel_2;
    QVBoxLayout *eyeSpinBoxLayout_2;
    QDoubleSpinBox *eyeXspin_2;
    QDoubleSpinBox *eyeYspin_2;
    QDoubleSpinBox *eyeZspin_2;
    QPushButton *Default;
    QVBoxLayout *LookAtLabelsLayout_2;
    QLabel *LookAtXlabel_2;
    QLabel *LookAtZlabel_2;
    QLabel *LookAtYlabel_2;
    QVBoxLayout *LookAtSpinBoxLayout_2;
    QDoubleSpinBox *LookAtXspin_2;
    QDoubleSpinBox *LookAtYspin_2;
    QDoubleSpinBox *LookAtZspin_2;
    QWidget *tab_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *ambientReflection;
    QLabel *diffuseReflection;
    QLabel *specularReflection;
    QLabel *constantAttenuation;
    QLabel *linearAttenuation;
    QLabel *quadraticAttenuation;
    QLabel *spotCutoff;
    QLabel *spotExponent;
    QHBoxLayout *horizontalLayout_3;
    QSlider *ambientReflectionSlider;
    QSlider *diffuseReflectionSlider;
    QSlider *specularReflectionSlider;
    QSlider *constantAttenuationSlider;
    QSlider *linearAttenuationSlider;
    QSlider *quadraticAttenuationSlider;
    QSlider *spotCutoffSlider;
    QSlider *spotExponentSlider;
    QHBoxLayout *horizontalLayout_8;
    QSpinBox *ambientReflectionSpinBox;
    QSpinBox *diffuseReflectionSpinBox;
    QSpinBox *specularReflectionSpinBox;
    QSpinBox *constantAttenuationSpinBox;
    QSpinBox *linearAttenuationSpinBox;
    QSpinBox *quadraticAttenuationSpinBox;
    QSpinBox *spotCutoffSpinBox;
    QSpinBox *spotExponentSpinBox;
    QWidget *colorTab;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *AmbientColorLayout;
    QLabel *label;
    QWidget *colorWidget;
    QHBoxLayout *horizontalLayout_9;
    QSlider *redSlider;
    QSlider *greenSlider;
    QSlider *blueSlider;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *diffuseColorLayout;
    QLabel *label_2;
    QWidget *colorWidget2;
    QHBoxLayout *horizontalLayout_10;
    QSlider *redSliderDiffuse;
    QSlider *blueSliderDiffuse;
    QSlider *greenSliderDiffuse;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *diffuseColorLayout_2;
    QLabel *label_3;
    QWidget *colorWidget3;
    QHBoxLayout *horizontalLayout_11;
    QSlider *redSliderSpecular;
    QSlider *blueSliderSpecular;
    QSlider *greenSliderSpecular;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(863, 775);
        MainWindow->setMinimumSize(QSize(512, 768));
        MainWindow->setMaximumSize(QSize(2048, 2048));
        MainWindow->setAutoFillBackground(true);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(384, 512));
        centralwidget->setMaximumSize(QSize(1024, 768));
        centralwidget->setLayoutDirection(Qt::LeftToRight);
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMaximumSize(QSize(768, 16777215));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        ControlWidget = new QWidget(tab);
        ControlWidget->setObjectName(QString::fromUtf8("ControlWidget"));
        ControlWidget->setGeometry(QRect(0, 0, 721, 181));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ControlWidget->sizePolicy().hasHeightForWidth());
        ControlWidget->setSizePolicy(sizePolicy1);
        ControlWidget->setMaximumSize(QSize(768, 256));
        ControlWidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_8 = new QVBoxLayout(ControlWidget);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_7 = new QLabel(ControlWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_9->addWidget(label_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_8 = new QLabel(ControlWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(56, 16777215));

        verticalLayout_10->addWidget(label_8);

        bX = new QDoubleSpinBox(ControlWidget);
        bX->setObjectName(QString::fromUtf8("bX"));
        bX->setMaximumSize(QSize(56, 16777215));
        bX->setMinimum(-99.000000000000000);

        verticalLayout_10->addWidget(bX);

        bY = new QDoubleSpinBox(ControlWidget);
        bY->setObjectName(QString::fromUtf8("bY"));
        bY->setMaximumSize(QSize(56, 16777215));
        bY->setMinimum(-99.000000000000000);

        verticalLayout_10->addWidget(bY);

        bZ = new QDoubleSpinBox(ControlWidget);
        bZ->setObjectName(QString::fromUtf8("bZ"));
        bZ->setMaximumSize(QSize(56, 16777215));
        bZ->setMinimum(-99.000000000000000);

        verticalLayout_10->addWidget(bZ);


        horizontalLayout_5->addLayout(verticalLayout_10);

        label_9 = new QLabel(ControlWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(56, 16777215));

        horizontalLayout_5->addWidget(label_9);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_Mu = new QLabel(ControlWidget);
        label_Mu->setObjectName(QString::fromUtf8("label_Mu"));

        verticalLayout_11->addWidget(label_Mu);

        MuXSpin = new QDoubleSpinBox(ControlWidget);
        MuXSpin->setObjectName(QString::fromUtf8("MuXSpin"));
        MuXSpin->setMaximumSize(QSize(56, 16777215));
        MuXSpin->setMinimum(-99.000000000000000);

        verticalLayout_11->addWidget(MuXSpin);

        MuYSpin = new QDoubleSpinBox(ControlWidget);
        MuYSpin->setObjectName(QString::fromUtf8("MuYSpin"));
        MuYSpin->setMaximumSize(QSize(56, 16777215));
        MuYSpin->setMinimum(-99.000000000000000);
        MuYSpin->setValue(1.000000000000000);

        verticalLayout_11->addWidget(MuYSpin);

        MuZSpin = new QDoubleSpinBox(ControlWidget);
        MuZSpin->setObjectName(QString::fromUtf8("MuZSpin"));
        MuZSpin->setMaximumSize(QSize(56, 16777215));
        MuZSpin->setMinimum(-99.000000000000000);

        verticalLayout_11->addWidget(MuZSpin);


        horizontalLayout_5->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout_12->setContentsMargins(10, 10, 10, 10);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_11 = new QLabel(ControlWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy2);
        label_11->setMaximumSize(QSize(56, 16777215));
        label_11->setTextFormat(Qt::AutoText);

        horizontalLayout->addWidget(label_11);

        dSpin = new QDoubleSpinBox(ControlWidget);
        dSpin->setObjectName(QString::fromUtf8("dSpin"));
        sizePolicy2.setHeightForWidth(dSpin->sizePolicy().hasHeightForWidth());
        dSpin->setSizePolicy(sizePolicy2);
        dSpin->setMaximumSize(QSize(56, 16777215));
        dSpin->setMinimum(-99.000000000000000);
        dSpin->setValue(1.000000000000000);

        horizontalLayout->addWidget(dSpin);


        verticalLayout_12->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_12 = new QLabel(ControlWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy2.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy2);
        label_12->setMaximumSize(QSize(112, 24));

        horizontalLayout_2->addWidget(label_12);

        alphaSpinBox = new QDoubleSpinBox(ControlWidget);
        alphaSpinBox->setObjectName(QString::fromUtf8("alphaSpinBox"));
        alphaSpinBox->setMaximumSize(QSize(56, 16777215));
        alphaSpinBox->setMinimum(-360.000000000000000);
        alphaSpinBox->setMaximum(360.000000000000000);
        alphaSpinBox->setValue(1.000000000000000);

        horizontalLayout_2->addWidget(alphaSpinBox);


        verticalLayout_12->addLayout(horizontalLayout_2);


        horizontalLayout_5->addLayout(verticalLayout_12);


        verticalLayout_9->addLayout(horizontalLayout_5);


        horizontalLayout_4->addLayout(verticalLayout_9);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setSizeConstraint(QLayout::SetMaximumSize);
        pushButton = new QPushButton(ControlWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 85, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(255, 85, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        QBrush brush3(QColor(0, 0, 0, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        QBrush brush4(QColor(0, 0, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        QBrush brush5(QColor(0, 0, 255, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        pushButton->setPalette(palette);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8(""));
        pushButton->setFlat(false);

        verticalLayout_13->addWidget(pushButton);

        CodeDocPushButton = new QPushButton(ControlWidget);
        CodeDocPushButton->setObjectName(QString::fromUtf8("CodeDocPushButton"));
#if QT_CONFIG(tooltip)
        CodeDocPushButton->setToolTip(QString::fromUtf8("<html><head/><body><p>Opens Doxygen Code documentation in your default web browser</p></body></html>"));
#endif // QT_CONFIG(tooltip)
        CodeDocPushButton->setToolTipDuration(-1);

        verticalLayout_13->addWidget(CodeDocPushButton);

        pushButton_3 = new QPushButton(ControlWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_13->addWidget(pushButton_3);


        horizontalLayout_4->addLayout(verticalLayout_13);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        lightSliderHorizontal = new QSlider(ControlWidget);
        lightSliderHorizontal->setObjectName(QString::fromUtf8("lightSliderHorizontal"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lightSliderHorizontal->sizePolicy().hasHeightForWidth());
        lightSliderHorizontal->setSizePolicy(sizePolicy3);
        lightSliderHorizontal->setMinimumSize(QSize(48, 0));
        lightSliderHorizontal->setMinimum(-90);
        lightSliderHorizontal->setMaximum(90);
        lightSliderHorizontal->setValue(0);
        lightSliderHorizontal->setSliderPosition(0);
        lightSliderHorizontal->setOrientation(Qt::Horizontal);

        horizontalLayout_12->addWidget(lightSliderHorizontal);

        lightSliderVertical = new QSlider(ControlWidget);
        lightSliderVertical->setObjectName(QString::fromUtf8("lightSliderVertical"));
        lightSliderVertical->setSliderPosition(50);
        lightSliderVertical->setOrientation(Qt::Vertical);

        horizontalLayout_12->addWidget(lightSliderVertical);


        horizontalLayout_4->addLayout(horizontalLayout_12);


        verticalLayout_8->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_8->addItem(verticalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(1);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_6->setContentsMargins(-1, -1, 5, -1);
        eyeLabelsLayout_2 = new QVBoxLayout();
        eyeLabelsLayout_2->setSpacing(1);
        eyeLabelsLayout_2->setObjectName(QString::fromUtf8("eyeLabelsLayout_2"));
        eyeLabelsLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        eyeLabelsLayout_2->setContentsMargins(-1, 0, 0, 0);
        eyeXlabel_2 = new QLabel(ControlWidget);
        eyeXlabel_2->setObjectName(QString::fromUtf8("eyeXlabel_2"));
        eyeXlabel_2->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(eyeXlabel_2->sizePolicy().hasHeightForWidth());
        eyeXlabel_2->setSizePolicy(sizePolicy4);
        eyeXlabel_2->setMinimumSize(QSize(112, 0));
        eyeXlabel_2->setMaximumSize(QSize(112, 24));

        eyeLabelsLayout_2->addWidget(eyeXlabel_2);

        eyeZlabel_2 = new QLabel(ControlWidget);
        eyeZlabel_2->setObjectName(QString::fromUtf8("eyeZlabel_2"));
        eyeZlabel_2->setEnabled(true);
        sizePolicy4.setHeightForWidth(eyeZlabel_2->sizePolicy().hasHeightForWidth());
        eyeZlabel_2->setSizePolicy(sizePolicy4);
        eyeZlabel_2->setMinimumSize(QSize(112, 0));
        eyeZlabel_2->setMaximumSize(QSize(112, 24));

        eyeLabelsLayout_2->addWidget(eyeZlabel_2);

        eyeYlabel_2 = new QLabel(ControlWidget);
        eyeYlabel_2->setObjectName(QString::fromUtf8("eyeYlabel_2"));
        eyeYlabel_2->setEnabled(true);
        sizePolicy4.setHeightForWidth(eyeYlabel_2->sizePolicy().hasHeightForWidth());
        eyeYlabel_2->setSizePolicy(sizePolicy4);
        eyeYlabel_2->setMinimumSize(QSize(112, 0));
        eyeYlabel_2->setMaximumSize(QSize(112, 24));

        eyeLabelsLayout_2->addWidget(eyeYlabel_2);


        horizontalLayout_6->addLayout(eyeLabelsLayout_2);

        eyeSpinBoxLayout_2 = new QVBoxLayout();
        eyeSpinBoxLayout_2->setSpacing(1);
        eyeSpinBoxLayout_2->setObjectName(QString::fromUtf8("eyeSpinBoxLayout_2"));
        eyeSpinBoxLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        eyeSpinBoxLayout_2->setContentsMargins(-1, 0, 0, 0);
        eyeXspin_2 = new QDoubleSpinBox(ControlWidget);
        eyeXspin_2->setObjectName(QString::fromUtf8("eyeXspin_2"));
        eyeXspin_2->setEnabled(true);
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(eyeXspin_2->sizePolicy().hasHeightForWidth());
        eyeXspin_2->setSizePolicy(sizePolicy5);
        eyeXspin_2->setMinimumSize(QSize(56, 0));
        eyeXspin_2->setMaximumSize(QSize(56, 24));
        eyeXspin_2->setMinimum(-99.000000000000000);

        eyeSpinBoxLayout_2->addWidget(eyeXspin_2);

        eyeYspin_2 = new QDoubleSpinBox(ControlWidget);
        eyeYspin_2->setObjectName(QString::fromUtf8("eyeYspin_2"));
        eyeYspin_2->setEnabled(true);
        sizePolicy5.setHeightForWidth(eyeYspin_2->sizePolicy().hasHeightForWidth());
        eyeYspin_2->setSizePolicy(sizePolicy5);
        eyeYspin_2->setMinimumSize(QSize(56, 0));
        eyeYspin_2->setMaximumSize(QSize(56, 24));
        eyeYspin_2->setMinimum(-99.000000000000000);

        eyeSpinBoxLayout_2->addWidget(eyeYspin_2);

        eyeZspin_2 = new QDoubleSpinBox(ControlWidget);
        eyeZspin_2->setObjectName(QString::fromUtf8("eyeZspin_2"));
        eyeZspin_2->setEnabled(true);
        sizePolicy3.setHeightForWidth(eyeZspin_2->sizePolicy().hasHeightForWidth());
        eyeZspin_2->setSizePolicy(sizePolicy3);
        eyeZspin_2->setMinimumSize(QSize(56, 0));
        eyeZspin_2->setMaximumSize(QSize(56, 16777215));
        eyeZspin_2->setMinimum(-99.000000000000000);
        eyeZspin_2->setValue(0.000000000000000);

        eyeSpinBoxLayout_2->addWidget(eyeZspin_2);


        horizontalLayout_6->addLayout(eyeSpinBoxLayout_2);

        Default = new QPushButton(ControlWidget);
        Default->setObjectName(QString::fromUtf8("Default"));
        Default->setMaximumSize(QSize(128, 16777215));
        Default->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));

        horizontalLayout_6->addWidget(Default);

        LookAtLabelsLayout_2 = new QVBoxLayout();
        LookAtLabelsLayout_2->setSpacing(1);
        LookAtLabelsLayout_2->setObjectName(QString::fromUtf8("LookAtLabelsLayout_2"));
        LookAtLabelsLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        LookAtLabelsLayout_2->setContentsMargins(-1, 0, 0, 0);
        LookAtXlabel_2 = new QLabel(ControlWidget);
        LookAtXlabel_2->setObjectName(QString::fromUtf8("LookAtXlabel_2"));
        LookAtXlabel_2->setEnabled(true);
        sizePolicy4.setHeightForWidth(LookAtXlabel_2->sizePolicy().hasHeightForWidth());
        LookAtXlabel_2->setSizePolicy(sizePolicy4);
        LookAtXlabel_2->setMinimumSize(QSize(112, 24));
        LookAtXlabel_2->setMaximumSize(QSize(112, 24));

        LookAtLabelsLayout_2->addWidget(LookAtXlabel_2);

        LookAtZlabel_2 = new QLabel(ControlWidget);
        LookAtZlabel_2->setObjectName(QString::fromUtf8("LookAtZlabel_2"));
        LookAtZlabel_2->setEnabled(true);
        sizePolicy4.setHeightForWidth(LookAtZlabel_2->sizePolicy().hasHeightForWidth());
        LookAtZlabel_2->setSizePolicy(sizePolicy4);
        LookAtZlabel_2->setMinimumSize(QSize(112, 24));
        LookAtZlabel_2->setMaximumSize(QSize(112, 24));

        LookAtLabelsLayout_2->addWidget(LookAtZlabel_2);

        LookAtYlabel_2 = new QLabel(ControlWidget);
        LookAtYlabel_2->setObjectName(QString::fromUtf8("LookAtYlabel_2"));
        LookAtYlabel_2->setEnabled(true);
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(LookAtYlabel_2->sizePolicy().hasHeightForWidth());
        LookAtYlabel_2->setSizePolicy(sizePolicy6);
        LookAtYlabel_2->setMinimumSize(QSize(112, 24));
        LookAtYlabel_2->setMaximumSize(QSize(112, 24));

        LookAtLabelsLayout_2->addWidget(LookAtYlabel_2);


        horizontalLayout_6->addLayout(LookAtLabelsLayout_2);

        LookAtSpinBoxLayout_2 = new QVBoxLayout();
        LookAtSpinBoxLayout_2->setSpacing(1);
        LookAtSpinBoxLayout_2->setObjectName(QString::fromUtf8("LookAtSpinBoxLayout_2"));
        LookAtSpinBoxLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        LookAtSpinBoxLayout_2->setContentsMargins(-1, 0, 0, 0);
        LookAtXspin_2 = new QDoubleSpinBox(ControlWidget);
        LookAtXspin_2->setObjectName(QString::fromUtf8("LookAtXspin_2"));
        LookAtXspin_2->setEnabled(true);
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(LookAtXspin_2->sizePolicy().hasHeightForWidth());
        LookAtXspin_2->setSizePolicy(sizePolicy7);
        LookAtXspin_2->setMinimumSize(QSize(56, 24));
        LookAtXspin_2->setMaximumSize(QSize(56, 16777215));
        LookAtXspin_2->setStyleSheet(QString::fromUtf8(""));
        LookAtXspin_2->setMinimum(-99.000000000000000);

        LookAtSpinBoxLayout_2->addWidget(LookAtXspin_2);

        LookAtYspin_2 = new QDoubleSpinBox(ControlWidget);
        LookAtYspin_2->setObjectName(QString::fromUtf8("LookAtYspin_2"));
        LookAtYspin_2->setEnabled(true);
        sizePolicy5.setHeightForWidth(LookAtYspin_2->sizePolicy().hasHeightForWidth());
        LookAtYspin_2->setSizePolicy(sizePolicy5);
        LookAtYspin_2->setMinimumSize(QSize(56, 24));
        LookAtYspin_2->setMaximumSize(QSize(56, 24));
        LookAtYspin_2->setMinimum(-99.000000000000000);

        LookAtSpinBoxLayout_2->addWidget(LookAtYspin_2);

        LookAtZspin_2 = new QDoubleSpinBox(ControlWidget);
        LookAtZspin_2->setObjectName(QString::fromUtf8("LookAtZspin_2"));
        LookAtZspin_2->setEnabled(true);
        sizePolicy5.setHeightForWidth(LookAtZspin_2->sizePolicy().hasHeightForWidth());
        LookAtZspin_2->setSizePolicy(sizePolicy5);
        LookAtZspin_2->setMinimumSize(QSize(56, 24));
        LookAtZspin_2->setMaximumSize(QSize(56, 24));
        LookAtZspin_2->setMinimum(-99.000000000000000);

        LookAtSpinBoxLayout_2->addWidget(LookAtZspin_2);


        horizontalLayout_6->addLayout(LookAtSpinBoxLayout_2);


        verticalLayout_8->addLayout(horizontalLayout_6);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayoutWidget = new QWidget(tab_2);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 10, 721, 241));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout->setContentsMargins(0, 0, 0, 6);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        ambientReflection = new QLabel(gridLayoutWidget);
        ambientReflection->setObjectName(QString::fromUtf8("ambientReflection"));

        horizontalLayout_7->addWidget(ambientReflection);

        diffuseReflection = new QLabel(gridLayoutWidget);
        diffuseReflection->setObjectName(QString::fromUtf8("diffuseReflection"));

        horizontalLayout_7->addWidget(diffuseReflection);

        specularReflection = new QLabel(gridLayoutWidget);
        specularReflection->setObjectName(QString::fromUtf8("specularReflection"));

        horizontalLayout_7->addWidget(specularReflection);

        constantAttenuation = new QLabel(gridLayoutWidget);
        constantAttenuation->setObjectName(QString::fromUtf8("constantAttenuation"));

        horizontalLayout_7->addWidget(constantAttenuation);

        linearAttenuation = new QLabel(gridLayoutWidget);
        linearAttenuation->setObjectName(QString::fromUtf8("linearAttenuation"));

        horizontalLayout_7->addWidget(linearAttenuation);

        quadraticAttenuation = new QLabel(gridLayoutWidget);
        quadraticAttenuation->setObjectName(QString::fromUtf8("quadraticAttenuation"));

        horizontalLayout_7->addWidget(quadraticAttenuation);

        spotCutoff = new QLabel(gridLayoutWidget);
        spotCutoff->setObjectName(QString::fromUtf8("spotCutoff"));

        horizontalLayout_7->addWidget(spotCutoff);

        spotExponent = new QLabel(gridLayoutWidget);
        spotExponent->setObjectName(QString::fromUtf8("spotExponent"));

        horizontalLayout_7->addWidget(spotExponent);


        gridLayout->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ambientReflectionSlider = new QSlider(gridLayoutWidget);
        ambientReflectionSlider->setObjectName(QString::fromUtf8("ambientReflectionSlider"));
        ambientReflectionSlider->setOrientation(Qt::Vertical);

        horizontalLayout_3->addWidget(ambientReflectionSlider);

        diffuseReflectionSlider = new QSlider(gridLayoutWidget);
        diffuseReflectionSlider->setObjectName(QString::fromUtf8("diffuseReflectionSlider"));
        diffuseReflectionSlider->setOrientation(Qt::Vertical);

        horizontalLayout_3->addWidget(diffuseReflectionSlider);

        specularReflectionSlider = new QSlider(gridLayoutWidget);
        specularReflectionSlider->setObjectName(QString::fromUtf8("specularReflectionSlider"));
        specularReflectionSlider->setOrientation(Qt::Vertical);

        horizontalLayout_3->addWidget(specularReflectionSlider);

        constantAttenuationSlider = new QSlider(gridLayoutWidget);
        constantAttenuationSlider->setObjectName(QString::fromUtf8("constantAttenuationSlider"));
        constantAttenuationSlider->setOrientation(Qt::Vertical);

        horizontalLayout_3->addWidget(constantAttenuationSlider);

        linearAttenuationSlider = new QSlider(gridLayoutWidget);
        linearAttenuationSlider->setObjectName(QString::fromUtf8("linearAttenuationSlider"));
        linearAttenuationSlider->setOrientation(Qt::Vertical);

        horizontalLayout_3->addWidget(linearAttenuationSlider);

        quadraticAttenuationSlider = new QSlider(gridLayoutWidget);
        quadraticAttenuationSlider->setObjectName(QString::fromUtf8("quadraticAttenuationSlider"));
        quadraticAttenuationSlider->setOrientation(Qt::Vertical);

        horizontalLayout_3->addWidget(quadraticAttenuationSlider);

        spotCutoffSlider = new QSlider(gridLayoutWidget);
        spotCutoffSlider->setObjectName(QString::fromUtf8("spotCutoffSlider"));
        spotCutoffSlider->setOrientation(Qt::Vertical);

        horizontalLayout_3->addWidget(spotCutoffSlider);

        spotExponentSlider = new QSlider(gridLayoutWidget);
        spotExponentSlider->setObjectName(QString::fromUtf8("spotExponentSlider"));
        spotExponentSlider->setOrientation(Qt::Vertical);

        horizontalLayout_3->addWidget(spotExponentSlider);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout_8->setContentsMargins(-1, 3, -1, 12);
        ambientReflectionSpinBox = new QSpinBox(gridLayoutWidget);
        ambientReflectionSpinBox->setObjectName(QString::fromUtf8("ambientReflectionSpinBox"));

        horizontalLayout_8->addWidget(ambientReflectionSpinBox);

        diffuseReflectionSpinBox = new QSpinBox(gridLayoutWidget);
        diffuseReflectionSpinBox->setObjectName(QString::fromUtf8("diffuseReflectionSpinBox"));

        horizontalLayout_8->addWidget(diffuseReflectionSpinBox);

        specularReflectionSpinBox = new QSpinBox(gridLayoutWidget);
        specularReflectionSpinBox->setObjectName(QString::fromUtf8("specularReflectionSpinBox"));

        horizontalLayout_8->addWidget(specularReflectionSpinBox);

        constantAttenuationSpinBox = new QSpinBox(gridLayoutWidget);
        constantAttenuationSpinBox->setObjectName(QString::fromUtf8("constantAttenuationSpinBox"));

        horizontalLayout_8->addWidget(constantAttenuationSpinBox);

        linearAttenuationSpinBox = new QSpinBox(gridLayoutWidget);
        linearAttenuationSpinBox->setObjectName(QString::fromUtf8("linearAttenuationSpinBox"));

        horizontalLayout_8->addWidget(linearAttenuationSpinBox);

        quadraticAttenuationSpinBox = new QSpinBox(gridLayoutWidget);
        quadraticAttenuationSpinBox->setObjectName(QString::fromUtf8("quadraticAttenuationSpinBox"));

        horizontalLayout_8->addWidget(quadraticAttenuationSpinBox);

        spotCutoffSpinBox = new QSpinBox(gridLayoutWidget);
        spotCutoffSpinBox->setObjectName(QString::fromUtf8("spotCutoffSpinBox"));

        horizontalLayout_8->addWidget(spotCutoffSpinBox);

        spotExponentSpinBox = new QSpinBox(gridLayoutWidget);
        spotExponentSpinBox->setObjectName(QString::fromUtf8("spotExponentSpinBox"));

        horizontalLayout_8->addWidget(spotExponentSpinBox);


        gridLayout->addLayout(horizontalLayout_8, 3, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        colorTab = new QWidget();
        colorTab->setObjectName(QString::fromUtf8("colorTab"));
        verticalLayoutWidget = new QWidget(colorTab);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 10, 160, 104));
        AmbientColorLayout = new QVBoxLayout(verticalLayoutWidget);
        AmbientColorLayout->setObjectName(QString::fromUtf8("AmbientColorLayout"));
        AmbientColorLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        AmbientColorLayout->addWidget(label);

        colorWidget = new QWidget(verticalLayoutWidget);
        colorWidget->setObjectName(QString::fromUtf8("colorWidget"));
        colorWidget->setMinimumSize(QSize(0, 24));
        colorWidget->setAutoFillBackground(true);

        AmbientColorLayout->addWidget(colorWidget);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        redSlider = new QSlider(verticalLayoutWidget);
        redSlider->setObjectName(QString::fromUtf8("redSlider"));
        redSlider->setStyleSheet(QString::fromUtf8("background-color: red;\n"
"color: rgb(0, 0, 0);\n"
"handle-color: black;"));
        redSlider->setOrientation(Qt::Vertical);

        horizontalLayout_9->addWidget(redSlider);

        greenSlider = new QSlider(verticalLayoutWidget);
        greenSlider->setObjectName(QString::fromUtf8("greenSlider"));
        greenSlider->setStyleSheet(QString::fromUtf8("background-color: green"));
        greenSlider->setOrientation(Qt::Vertical);

        horizontalLayout_9->addWidget(greenSlider);

        blueSlider = new QSlider(verticalLayoutWidget);
        blueSlider->setObjectName(QString::fromUtf8("blueSlider"));
        blueSlider->setStyleSheet(QString::fromUtf8("background-color: blue"));
        blueSlider->setOrientation(Qt::Vertical);

        horizontalLayout_9->addWidget(blueSlider);


        AmbientColorLayout->addLayout(horizontalLayout_9);

        verticalLayoutWidget_2 = new QWidget(colorTab);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(170, 10, 160, 104));
        diffuseColorLayout = new QVBoxLayout(verticalLayoutWidget_2);
        diffuseColorLayout->setObjectName(QString::fromUtf8("diffuseColorLayout"));
        diffuseColorLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        diffuseColorLayout->addWidget(label_2);

        colorWidget2 = new QWidget(verticalLayoutWidget_2);
        colorWidget2->setObjectName(QString::fromUtf8("colorWidget2"));
        colorWidget2->setMinimumSize(QSize(0, 24));
        colorWidget2->setAutoFillBackground(true);

        diffuseColorLayout->addWidget(colorWidget2);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        redSliderDiffuse = new QSlider(verticalLayoutWidget_2);
        redSliderDiffuse->setObjectName(QString::fromUtf8("redSliderDiffuse"));
        redSliderDiffuse->setStyleSheet(QString::fromUtf8("background-color: red;\n"
"color: rgb(0, 0, 0);\n"
"handle-color: black;"));
        redSliderDiffuse->setOrientation(Qt::Vertical);

        horizontalLayout_10->addWidget(redSliderDiffuse);

        blueSliderDiffuse = new QSlider(verticalLayoutWidget_2);
        blueSliderDiffuse->setObjectName(QString::fromUtf8("blueSliderDiffuse"));
        blueSliderDiffuse->setStyleSheet(QString::fromUtf8("background-color: green"));
        blueSliderDiffuse->setOrientation(Qt::Vertical);

        horizontalLayout_10->addWidget(blueSliderDiffuse);

        greenSliderDiffuse = new QSlider(verticalLayoutWidget_2);
        greenSliderDiffuse->setObjectName(QString::fromUtf8("greenSliderDiffuse"));
        greenSliderDiffuse->setStyleSheet(QString::fromUtf8("background-color: blue"));
        greenSliderDiffuse->setOrientation(Qt::Vertical);

        horizontalLayout_10->addWidget(greenSliderDiffuse);


        diffuseColorLayout->addLayout(horizontalLayout_10);

        verticalLayoutWidget_3 = new QWidget(colorTab);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(340, 10, 160, 104));
        diffuseColorLayout_2 = new QVBoxLayout(verticalLayoutWidget_3);
        diffuseColorLayout_2->setObjectName(QString::fromUtf8("diffuseColorLayout_2"));
        diffuseColorLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        diffuseColorLayout_2->addWidget(label_3);

        colorWidget3 = new QWidget(verticalLayoutWidget_3);
        colorWidget3->setObjectName(QString::fromUtf8("colorWidget3"));
        colorWidget3->setMinimumSize(QSize(0, 24));
        colorWidget3->setAutoFillBackground(true);

        diffuseColorLayout_2->addWidget(colorWidget3);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        redSliderSpecular = new QSlider(verticalLayoutWidget_3);
        redSliderSpecular->setObjectName(QString::fromUtf8("redSliderSpecular"));
        redSliderSpecular->setStyleSheet(QString::fromUtf8("background-color: red;\n"
"color: rgb(0, 0, 0);\n"
"handle-color: black;"));
        redSliderSpecular->setOrientation(Qt::Vertical);

        horizontalLayout_11->addWidget(redSliderSpecular);

        blueSliderSpecular = new QSlider(verticalLayoutWidget_3);
        blueSliderSpecular->setObjectName(QString::fromUtf8("blueSliderSpecular"));
        blueSliderSpecular->setStyleSheet(QString::fromUtf8("background-color: green"));
        blueSliderSpecular->setOrientation(Qt::Vertical);

        horizontalLayout_11->addWidget(blueSliderSpecular);

        greenSliderSpecular = new QSlider(verticalLayoutWidget_3);
        greenSliderSpecular->setObjectName(QString::fromUtf8("greenSliderSpecular"));
        greenSliderSpecular->setStyleSheet(QString::fromUtf8("background-color: blue"));
        greenSliderSpecular->setOrientation(Qt::Vertical);

        horizontalLayout_11->addWidget(greenSliderSpecular);


        diffuseColorLayout_2->addLayout(horizontalLayout_11);

        tabWidget->addTab(colorTab, QString());

        verticalLayout_2->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 863, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);
        QObject::connect(ambientReflectionSlider, SIGNAL(valueChanged(int)), ambientReflectionSpinBox, SLOT(setValue(int)));
        QObject::connect(ambientReflectionSpinBox, SIGNAL(valueChanged(int)), ambientReflectionSlider, SLOT(setValue(int)));
        QObject::connect(diffuseReflectionSlider, SIGNAL(valueChanged(int)), diffuseReflectionSpinBox, SLOT(setValue(int)));
        QObject::connect(diffuseReflectionSpinBox, SIGNAL(valueChanged(int)), diffuseReflectionSlider, SLOT(setValue(int)));
        QObject::connect(specularReflectionSpinBox, SIGNAL(valueChanged(int)), specularReflectionSlider, SLOT(setValue(int)));
        QObject::connect(specularReflectionSlider, SIGNAL(valueChanged(int)), specularReflectionSpinBox, SLOT(setValue(int)));
        QObject::connect(constantAttenuationSpinBox, SIGNAL(valueChanged(int)), constantAttenuationSlider, SLOT(setValue(int)));
        QObject::connect(constantAttenuationSlider, SIGNAL(valueChanged(int)), constantAttenuationSpinBox, SLOT(setValue(int)));
        QObject::connect(linearAttenuationSpinBox, SIGNAL(valueChanged(int)), linearAttenuationSlider, SLOT(setValue(int)));
        QObject::connect(linearAttenuationSlider, SIGNAL(valueChanged(int)), linearAttenuationSpinBox, SLOT(setValue(int)));
        QObject::connect(quadraticAttenuationSlider, SIGNAL(valueChanged(int)), quadraticAttenuationSpinBox, SLOT(setValue(int)));
        QObject::connect(quadraticAttenuationSpinBox, SIGNAL(valueChanged(int)), quadraticAttenuationSlider, SLOT(setValue(int)));
        QObject::connect(spotCutoffSlider, SIGNAL(valueChanged(int)), spotCutoffSpinBox, SLOT(setValue(int)));
        QObject::connect(spotCutoffSpinBox, SIGNAL(valueChanged(int)), spotCutoffSlider, SLOT(setValue(int)));
        QObject::connect(spotExponentSlider, SIGNAL(valueChanged(int)), spotExponentSpinBox, SLOT(setValue(int)));
        QObject::connect(spotExponentSpinBox, SIGNAL(valueChanged(int)), spotExponentSlider, SLOT(setValue(int)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Line Defenition", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "b", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        label_Mu->setText(QCoreApplication::translate("MainWindow", "d", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\316\274", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "alpha", nullptr));
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Opens Simple User Documentation and project description</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QCoreApplication::translate("MainWindow", "User Guide", nullptr));
        CodeDocPushButton->setText(QCoreApplication::translate("MainWindow", "Code Documentation", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_3->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Opens a UML default Class Diagram</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Class Diagram", nullptr));
#if QT_CONFIG(tooltip)
        lightSliderHorizontal->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Light X rotation</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        eyeXlabel_2->setText(QCoreApplication::translate("MainWindow", "Eye X", nullptr));
        eyeZlabel_2->setText(QCoreApplication::translate("MainWindow", "Eye Y", nullptr));
        eyeYlabel_2->setText(QCoreApplication::translate("MainWindow", "Eye Z", nullptr));
#if QT_CONFIG(tooltip)
        Default->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Default->setText(QCoreApplication::translate("MainWindow", "Reset to Defaults", nullptr));
        LookAtXlabel_2->setText(QCoreApplication::translate("MainWindow", "Look at  X", nullptr));
        LookAtZlabel_2->setText(QCoreApplication::translate("MainWindow", "Look at Y", nullptr));
        LookAtYlabel_2->setText(QCoreApplication::translate("MainWindow", "Look at Z", nullptr));
#if QT_CONFIG(tooltip)
        LookAtXspin_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        LookAtYspin_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        LookAtZspin_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Main", nullptr));
        ambientReflection->setText(QCoreApplication::translate("MainWindow", "ambientReflection", nullptr));
        diffuseReflection->setText(QCoreApplication::translate("MainWindow", "diffuseReflection", nullptr));
        specularReflection->setText(QCoreApplication::translate("MainWindow", "specularReflection", nullptr));
        constantAttenuation->setText(QCoreApplication::translate("MainWindow", "constantAttenuation", nullptr));
        linearAttenuation->setText(QCoreApplication::translate("MainWindow", "linearAttenuation", nullptr));
        quadraticAttenuation->setText(QCoreApplication::translate("MainWindow", "quadraticAttenuation", nullptr));
        spotCutoff->setText(QCoreApplication::translate("MainWindow", "spotCutoff", nullptr));
        spotExponent->setText(QCoreApplication::translate("MainWindow", "spotExponent", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Light Contributions", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Ambient Colour", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Diffuse Colour", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Specular Colour", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(colorTab), QCoreApplication::translate("MainWindow", "Light Colours", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
