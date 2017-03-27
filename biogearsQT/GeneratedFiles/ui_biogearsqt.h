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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_biogearsQTClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *biogearsQTClass)
    {
        if (biogearsQTClass->objectName().isEmpty())
            biogearsQTClass->setObjectName(QStringLiteral("biogearsQTClass"));
        biogearsQTClass->resize(600, 400);
        menuBar = new QMenuBar(biogearsQTClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        biogearsQTClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(biogearsQTClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        biogearsQTClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(biogearsQTClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        biogearsQTClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(biogearsQTClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        biogearsQTClass->setStatusBar(statusBar);

        retranslateUi(biogearsQTClass);

        QMetaObject::connectSlotsByName(biogearsQTClass);
    } // setupUi

    void retranslateUi(QMainWindow *biogearsQTClass)
    {
        biogearsQTClass->setWindowTitle(QApplication::translate("biogearsQTClass", "biogearsQT", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class biogearsQTClass: public Ui_biogearsQTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIOGEARSQT_H
