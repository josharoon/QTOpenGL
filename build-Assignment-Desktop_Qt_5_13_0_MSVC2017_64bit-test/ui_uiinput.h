/********************************************************************************
** Form generated from reading UI file 'uiinput.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIINPUT_H
#define UI_UIINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_uiInput
{
public:
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QDoubleSpinBox *bX;
    QDoubleSpinBox *bY;
    QDoubleSpinBox *bY_2;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *eyeLabelsLayout;
    QLabel *eyeXlabel;
    QLabel *eyeZlabel;
    QLabel *eyeYlabel;
    QVBoxLayout *eyeSpinBoxLayout;
    QDoubleSpinBox *eyeXspin;
    QDoubleSpinBox *eyeYspin;
    QDoubleSpinBox *eyeZspin;
    QPushButton *Defaults;
    QVBoxLayout *LookAtLabelsLayout;
    QLabel *LookAtXlabel;
    QLabel *LookAtZlabel;
    QLabel *LookAtYlabel;
    QVBoxLayout *LookAtSpinBoxLayout;
    QDoubleSpinBox *LookAtZspin;
    QDoubleSpinBox *LookAtXspin;
    QDoubleSpinBox *LookAtYspin;

    void setupUi(QWidget *uiInput)
    {
        if (uiInput->objectName().isEmpty())
            uiInput->setObjectName(QString::fromUtf8("uiInput"));
        uiInput->resize(587, 681);
        verticalLayoutWidget_6 = new QWidget(uiInput);
        verticalLayoutWidget_6->setObjectName(QString::fromUtf8("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(69, 59, 391, 208));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_6 = new QLabel(verticalLayoutWidget_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_5->addWidget(label_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(verticalLayoutWidget_6);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        bX = new QDoubleSpinBox(verticalLayoutWidget_6);
        bX->setObjectName(QString::fromUtf8("bX"));

        verticalLayout->addWidget(bX);

        bY = new QDoubleSpinBox(verticalLayoutWidget_6);
        bY->setObjectName(QString::fromUtf8("bY"));

        verticalLayout->addWidget(bY);

        bY_2 = new QDoubleSpinBox(verticalLayoutWidget_6);
        bY_2->setObjectName(QString::fromUtf8("bY_2"));

        verticalLayout->addWidget(bY_2);


        horizontalLayout_3->addLayout(verticalLayout);

        label_2 = new QLabel(verticalLayoutWidget_6);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(verticalLayoutWidget_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        doubleSpinBox_2 = new QDoubleSpinBox(verticalLayoutWidget_6);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));

        verticalLayout_2->addWidget(doubleSpinBox_2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_4 = new QLabel(verticalLayoutWidget_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_3->addWidget(label_4);

        doubleSpinBox_3 = new QDoubleSpinBox(verticalLayoutWidget_6);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));

        verticalLayout_3->addWidget(doubleSpinBox_3);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_3);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_5 = new QLabel(verticalLayoutWidget_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_4->addWidget(label_5);

        doubleSpinBox_4 = new QDoubleSpinBox(verticalLayoutWidget_6);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));

        verticalLayout_4->addWidget(doubleSpinBox_4);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_6->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 5, -1);
        eyeLabelsLayout = new QVBoxLayout();
        eyeLabelsLayout->setObjectName(QString::fromUtf8("eyeLabelsLayout"));
        eyeXlabel = new QLabel(verticalLayoutWidget_6);
        eyeXlabel->setObjectName(QString::fromUtf8("eyeXlabel"));

        eyeLabelsLayout->addWidget(eyeXlabel);

        eyeZlabel = new QLabel(verticalLayoutWidget_6);
        eyeZlabel->setObjectName(QString::fromUtf8("eyeZlabel"));

        eyeLabelsLayout->addWidget(eyeZlabel);

        eyeYlabel = new QLabel(verticalLayoutWidget_6);
        eyeYlabel->setObjectName(QString::fromUtf8("eyeYlabel"));

        eyeLabelsLayout->addWidget(eyeYlabel);


        horizontalLayout->addLayout(eyeLabelsLayout);

        eyeSpinBoxLayout = new QVBoxLayout();
        eyeSpinBoxLayout->setObjectName(QString::fromUtf8("eyeSpinBoxLayout"));
        eyeXspin = new QDoubleSpinBox(verticalLayoutWidget_6);
        eyeXspin->setObjectName(QString::fromUtf8("eyeXspin"));

        eyeSpinBoxLayout->addWidget(eyeXspin);

        eyeYspin = new QDoubleSpinBox(verticalLayoutWidget_6);
        eyeYspin->setObjectName(QString::fromUtf8("eyeYspin"));

        eyeSpinBoxLayout->addWidget(eyeYspin);

        eyeZspin = new QDoubleSpinBox(verticalLayoutWidget_6);
        eyeZspin->setObjectName(QString::fromUtf8("eyeZspin"));

        eyeSpinBoxLayout->addWidget(eyeZspin);


        horizontalLayout->addLayout(eyeSpinBoxLayout);

        Defaults = new QPushButton(verticalLayoutWidget_6);
        Defaults->setObjectName(QString::fromUtf8("Defaults"));

        horizontalLayout->addWidget(Defaults);

        LookAtLabelsLayout = new QVBoxLayout();
        LookAtLabelsLayout->setObjectName(QString::fromUtf8("LookAtLabelsLayout"));
        LookAtXlabel = new QLabel(verticalLayoutWidget_6);
        LookAtXlabel->setObjectName(QString::fromUtf8("LookAtXlabel"));

        LookAtLabelsLayout->addWidget(LookAtXlabel);

        LookAtZlabel = new QLabel(verticalLayoutWidget_6);
        LookAtZlabel->setObjectName(QString::fromUtf8("LookAtZlabel"));

        LookAtLabelsLayout->addWidget(LookAtZlabel);

        LookAtYlabel = new QLabel(verticalLayoutWidget_6);
        LookAtYlabel->setObjectName(QString::fromUtf8("LookAtYlabel"));

        LookAtLabelsLayout->addWidget(LookAtYlabel);


        horizontalLayout->addLayout(LookAtLabelsLayout);

        LookAtSpinBoxLayout = new QVBoxLayout();
        LookAtSpinBoxLayout->setObjectName(QString::fromUtf8("LookAtSpinBoxLayout"));
        LookAtZspin = new QDoubleSpinBox(verticalLayoutWidget_6);
        LookAtZspin->setObjectName(QString::fromUtf8("LookAtZspin"));

        LookAtSpinBoxLayout->addWidget(LookAtZspin);

        LookAtXspin = new QDoubleSpinBox(verticalLayoutWidget_6);
        LookAtXspin->setObjectName(QString::fromUtf8("LookAtXspin"));

        LookAtSpinBoxLayout->addWidget(LookAtXspin);

        LookAtYspin = new QDoubleSpinBox(verticalLayoutWidget_6);
        LookAtYspin->setObjectName(QString::fromUtf8("LookAtYspin"));

        LookAtSpinBoxLayout->addWidget(LookAtYspin);


        horizontalLayout->addLayout(LookAtSpinBoxLayout);


        verticalLayout_6->addLayout(horizontalLayout);


        retranslateUi(uiInput);

        QMetaObject::connectSlotsByName(uiInput);
    } // setupUi

    void retranslateUi(QWidget *uiInput)
    {
        uiInput->setWindowTitle(QCoreApplication::translate("uiInput", "Form", nullptr));
        label_6->setText(QCoreApplication::translate("uiInput", "Line Defenition", nullptr));
        label->setText(QCoreApplication::translate("uiInput", "b", nullptr));
        label_2->setText(QCoreApplication::translate("uiInput", "+", nullptr));
        label_3->setText(QCoreApplication::translate("uiInput", "u", nullptr));
        label_4->setText(QCoreApplication::translate("uiInput", "d", nullptr));
        label_5->setText(QCoreApplication::translate("uiInput", "alpha", nullptr));
        eyeXlabel->setText(QCoreApplication::translate("uiInput", "Eye X", nullptr));
        eyeZlabel->setText(QCoreApplication::translate("uiInput", "Eye Y", nullptr));
        eyeYlabel->setText(QCoreApplication::translate("uiInput", "Eye Z", nullptr));
        Defaults->setText(QCoreApplication::translate("uiInput", "Reset to Defaults", nullptr));
        LookAtXlabel->setText(QCoreApplication::translate("uiInput", "Look at  X", nullptr));
        LookAtZlabel->setText(QCoreApplication::translate("uiInput", "Look at Y", nullptr));
        LookAtYlabel->setText(QCoreApplication::translate("uiInput", "Look at Z", nullptr));
    } // retranslateUi

};

namespace Ui {
    class uiInput: public Ui_uiInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIINPUT_H
