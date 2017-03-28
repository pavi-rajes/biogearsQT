/********************************************************************************
** Form generated from reading UI file 'biogearsqt.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIOGEARSQT_H
#define UI_BIOGEARSQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_biogearsQTClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_age;
    QMenuBar *menuBar;
    QMenu *menuPatient_form;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *biogearsQTClass)
    {
        if (biogearsQTClass->objectName().isEmpty())
            biogearsQTClass->setObjectName(QStringLiteral("biogearsQTClass"));
        biogearsQTClass->resize(600, 400);
        centralWidget = new QWidget(biogearsQTClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 200, 75, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 90, 47, 13));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 130, 47, 13));
        lineEdit_name = new QLineEdit(centralWidget);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(260, 80, 113, 20));
        lineEdit_age = new QLineEdit(centralWidget);
        lineEdit_age->setObjectName(QStringLiteral("lineEdit_age"));
        lineEdit_age->setGeometry(QRect(260, 130, 113, 20));
        biogearsQTClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(biogearsQTClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menuPatient_form = new QMenu(menuBar);
        menuPatient_form->setObjectName(QStringLiteral("menuPatient_form"));
        biogearsQTClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(biogearsQTClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        biogearsQTClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(biogearsQTClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        biogearsQTClass->setStatusBar(statusBar);

        menuBar->addAction(menuPatient_form->menuAction());

        retranslateUi(biogearsQTClass);

        QMetaObject::connectSlotsByName(biogearsQTClass);
    } // setupUi

    void retranslateUi(QMainWindow *biogearsQTClass)
    {
        biogearsQTClass->setWindowTitle(QApplication::translate("biogearsQTClass", "biogearsQT", Q_NULLPTR));
        pushButton->setText(QApplication::translate("biogearsQTClass", "Load", Q_NULLPTR));
        label->setText(QApplication::translate("biogearsQTClass", "Name", Q_NULLPTR));
        label_2->setText(QApplication::translate("biogearsQTClass", "Age", Q_NULLPTR));
        menuPatient_form->setTitle(QApplication::translate("biogearsQTClass", "Patient form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class biogearsQTClass: public Ui_biogearsQTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIOGEARSQT_H
