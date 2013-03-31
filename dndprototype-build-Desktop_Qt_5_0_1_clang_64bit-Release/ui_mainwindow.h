/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionNew;
    QAction *actionPrint;
    QAction *actionCharacter_Information;
    QAction *actionClass_Select;
    QAction *actionAlignment_Religion;
    QAction *actionAbilities;
    QAction *actionSkills;
    QAction *actionFeats;
    QAction *actionEquipment;
    QAction *actionLanguage;
    QAction *actionSpells;
    QAction *actionCharacter_Sheet;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuPage_Select;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(632, 535);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        actionCharacter_Information = new QAction(MainWindow);
        actionCharacter_Information->setObjectName(QStringLiteral("actionCharacter_Information"));
        actionClass_Select = new QAction(MainWindow);
        actionClass_Select->setObjectName(QStringLiteral("actionClass_Select"));
        actionAlignment_Religion = new QAction(MainWindow);
        actionAlignment_Religion->setObjectName(QStringLiteral("actionAlignment_Religion"));
        actionAbilities = new QAction(MainWindow);
        actionAbilities->setObjectName(QStringLiteral("actionAbilities"));
        actionSkills = new QAction(MainWindow);
        actionSkills->setObjectName(QStringLiteral("actionSkills"));
        actionFeats = new QAction(MainWindow);
        actionFeats->setObjectName(QStringLiteral("actionFeats"));
        actionEquipment = new QAction(MainWindow);
        actionEquipment->setObjectName(QStringLiteral("actionEquipment"));
        actionLanguage = new QAction(MainWindow);
        actionLanguage->setObjectName(QStringLiteral("actionLanguage"));
        actionSpells = new QAction(MainWindow);
        actionSpells->setObjectName(QStringLiteral("actionSpells"));
        actionCharacter_Sheet = new QAction(MainWindow);
        actionCharacter_Sheet->setObjectName(QStringLiteral("actionCharacter_Sheet"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 632, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuPage_Select = new QMenu(menuBar);
        menuPage_Select->setObjectName(QStringLiteral("menuPage_Select"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuPage_Select->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addSeparator();
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionPrint);
        menuPage_Select->addAction(actionCharacter_Information);
        menuPage_Select->addAction(actionClass_Select);
        menuPage_Select->addAction(actionAlignment_Religion);
        menuPage_Select->addAction(actionAbilities);
        menuPage_Select->addAction(actionSkills);
        menuPage_Select->addAction(actionFeats);
        menuPage_Select->addAction(actionEquipment);
        menuPage_Select->addAction(actionLanguage);
        menuPage_Select->addAction(actionSpells);
        menuPage_Select->addAction(actionCharacter_Sheet);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As...", 0));
        actionNew->setText(QApplication::translate("MainWindow", "New", 0));
        actionPrint->setText(QApplication::translate("MainWindow", "Print", 0));
        actionCharacter_Information->setText(QApplication::translate("MainWindow", "Character Information", 0));
        actionClass_Select->setText(QApplication::translate("MainWindow", "Class Select", 0));
        actionAlignment_Religion->setText(QApplication::translate("MainWindow", "Alignment/Religion", 0));
        actionAbilities->setText(QApplication::translate("MainWindow", "Abilities", 0));
        actionSkills->setText(QApplication::translate("MainWindow", "Skills", 0));
        actionFeats->setText(QApplication::translate("MainWindow", "Feats", 0));
        actionEquipment->setText(QApplication::translate("MainWindow", "Equipment", 0));
        actionLanguage->setText(QApplication::translate("MainWindow", "Language", 0));
        actionSpells->setText(QApplication::translate("MainWindow", "Spells", 0));
        actionCharacter_Sheet->setText(QApplication::translate("MainWindow", "Character Sheet", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuPage_Select->setTitle(QApplication::translate("MainWindow", "Page Select", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
