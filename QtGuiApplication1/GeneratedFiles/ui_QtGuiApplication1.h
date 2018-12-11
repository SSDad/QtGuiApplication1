/********************************************************************************
** Form generated from reading UI file 'QtGuiApplication1.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIAPPLICATION1_H
#define UI_QTGUIAPPLICATION1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QVTKOpenGLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_QtGuiApplication1
{
public:
    QAction *actionOpenFile;
    QAction *actionExit;
    QAction *actionPrint;
    QAction *actionHelp;
    QAction *actionSave;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QVTKOpenGLWidget *qvtkWidget_axial_2;
    QVTKOpenGLWidget *qvtkWidget_rend_2;
    QVTKOpenGLWidget *qvtkWidget_axial;
    QVTKOpenGLWidget *qvtkWidget_rend;

    void setupUi(QMainWindow *QtGuiApplication1)
    {
        if (QtGuiApplication1->objectName().isEmpty())
            QtGuiApplication1->setObjectName(QStringLiteral("QtGuiApplication1"));
        QtGuiApplication1->resize(746, 545);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QtGuiApplication1->sizePolicy().hasHeightForWidth());
        QtGuiApplication1->setSizePolicy(sizePolicy);
        actionOpenFile = new QAction(QtGuiApplication1);
        actionOpenFile->setObjectName(QStringLiteral("actionOpenFile"));
        actionOpenFile->setEnabled(true);
        actionExit = new QAction(QtGuiApplication1);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionPrint = new QAction(QtGuiApplication1);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        actionHelp = new QAction(QtGuiApplication1);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionSave = new QAction(QtGuiApplication1);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        centralwidget = new QWidget(QtGuiApplication1);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, pushButton);


        verticalLayout->addLayout(formLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout->setStretch(1, 1);

        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetNoConstraint);
        qvtkWidget_axial_2 = new QVTKOpenGLWidget(centralwidget);
        qvtkWidget_axial_2->setObjectName(QStringLiteral("qvtkWidget_axial_2"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qvtkWidget_axial_2->sizePolicy().hasHeightForWidth());
        qvtkWidget_axial_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(qvtkWidget_axial_2, 1, 0, 1, 1);

        qvtkWidget_rend_2 = new QVTKOpenGLWidget(centralwidget);
        qvtkWidget_rend_2->setObjectName(QStringLiteral("qvtkWidget_rend_2"));
        sizePolicy1.setHeightForWidth(qvtkWidget_rend_2->sizePolicy().hasHeightForWidth());
        qvtkWidget_rend_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(qvtkWidget_rend_2, 0, 1, 1, 1);

        qvtkWidget_axial = new QVTKOpenGLWidget(centralwidget);
        qvtkWidget_axial->setObjectName(QStringLiteral("qvtkWidget_axial"));
        sizePolicy1.setHeightForWidth(qvtkWidget_axial->sizePolicy().hasHeightForWidth());
        qvtkWidget_axial->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(qvtkWidget_axial, 1, 1, 1, 1);

        qvtkWidget_rend = new QVTKOpenGLWidget(centralwidget);
        qvtkWidget_rend->setObjectName(QStringLiteral("qvtkWidget_rend"));
        sizePolicy1.setHeightForWidth(qvtkWidget_rend->sizePolicy().hasHeightForWidth());
        qvtkWidget_rend->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(qvtkWidget_rend, 0, 0, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);

        horizontalLayout->addLayout(gridLayout);

        horizontalLayout->setStretch(2, 1);
        QtGuiApplication1->setCentralWidget(centralwidget);

        retranslateUi(QtGuiApplication1);

        QMetaObject::connectSlotsByName(QtGuiApplication1);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiApplication1)
    {
        QtGuiApplication1->setWindowTitle(QApplication::translate("QtGuiApplication1", "QtGuiApplication1", nullptr));
        actionOpenFile->setText(QApplication::translate("QtGuiApplication1", "Open File...", nullptr));
        actionExit->setText(QApplication::translate("QtGuiApplication1", "Exit", nullptr));
        actionPrint->setText(QApplication::translate("QtGuiApplication1", "Print", nullptr));
        actionHelp->setText(QApplication::translate("QtGuiApplication1", "Help", nullptr));
        actionSave->setText(QApplication::translate("QtGuiApplication1", "Save", nullptr));
        label->setText(QApplication::translate("QtGuiApplication1", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("QtGuiApplication1", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("QtGuiApplication1", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("QtGuiApplication1", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtGuiApplication1: public Ui_QtGuiApplication1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPPLICATION1_H
