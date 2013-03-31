/********************************************************************************
** Form generated from reading UI file 'introscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTROSCREEN_H
#define UI_INTROSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IntroScreen
{
public:
    QLabel *lblDnd;
    QPushButton *btnNew;
    QPushButton *btnLoad;
    QLabel *lblCharacter;

    void setupUi(QWidget *IntroScreen)
    {
        if (IntroScreen->objectName().isEmpty())
            IntroScreen->setObjectName(QStringLiteral("IntroScreen"));
        IntroScreen->resize(610, 440);
        lblDnd = new QLabel(IntroScreen);
        lblDnd->setObjectName(QStringLiteral("lblDnd"));
        lblDnd->setGeometry(QRect(150, 40, 351, 71));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(34);
        lblDnd->setFont(font);
        btnNew = new QPushButton(IntroScreen);
        btnNew->setObjectName(QStringLiteral("btnNew"));
        btnNew->setGeometry(QRect(230, 180, 171, 61));
        btnLoad = new QPushButton(IntroScreen);
        btnLoad->setObjectName(QStringLiteral("btnLoad"));
        btnLoad->setGeometry(QRect(230, 250, 171, 61));
        lblCharacter = new QLabel(IntroScreen);
        lblCharacter->setObjectName(QStringLiteral("lblCharacter"));
        lblCharacter->setGeometry(QRect(180, 90, 271, 61));
        lblCharacter->setFont(font);

        retranslateUi(IntroScreen);

        QMetaObject::connectSlotsByName(IntroScreen);
    } // setupUi

    void retranslateUi(QWidget *IntroScreen)
    {
        IntroScreen->setWindowTitle(QApplication::translate("IntroScreen", "Form", 0));
        lblDnd->setText(QApplication::translate("IntroScreen", "Dungeon And Dragons", 0));
        btnNew->setText(QApplication::translate("IntroScreen", "New", 0));
        btnLoad->setText(QApplication::translate("IntroScreen", "Load", 0));
        lblCharacter->setText(QApplication::translate("IntroScreen", "Character Builder", 0));
    } // retranslateUi

};

namespace Ui {
    class IntroScreen: public Ui_IntroScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTROSCREEN_H
