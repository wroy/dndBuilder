/********************************************************************************
** Form generated from reading UI file 'charactersheet.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARACTERSHEET_H
#define UI_CHARACTERSHEET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CharacterSheet
{
public:
    QPushButton *btnBack;
    QLabel *lblTitle;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QWidget *CharacterSheet)
    {
        if (CharacterSheet->objectName().isEmpty())
            CharacterSheet->setObjectName(QStringLiteral("CharacterSheet"));
        CharacterSheet->resize(616, 513);
        btnBack = new QPushButton(CharacterSheet);
        btnBack->setObjectName(QStringLiteral("btnBack"));
        btnBack->setGeometry(QRect(370, 470, 114, 32));
        lblTitle = new QLabel(CharacterSheet);
        lblTitle->setObjectName(QStringLiteral("lblTitle"));
        lblTitle->setGeometry(QRect(30, 10, 261, 41));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(34);
        lblTitle->setFont(font);
        pushButton = new QPushButton(CharacterSheet);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 220, 114, 32));
        pushButton_2 = new QPushButton(CharacterSheet);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 220, 114, 32));
        pushButton_3 = new QPushButton(CharacterSheet);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(280, 300, 114, 32));
        pushButton_4 = new QPushButton(CharacterSheet);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(460, 310, 114, 32));
        pushButton_5 = new QPushButton(CharacterSheet);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(250, 370, 301, 32));

        retranslateUi(CharacterSheet);

        QMetaObject::connectSlotsByName(CharacterSheet);
    } // setupUi

    void retranslateUi(QWidget *CharacterSheet)
    {
        CharacterSheet->setWindowTitle(QApplication::translate("CharacterSheet", "Form", 0));
        btnBack->setText(QApplication::translate("CharacterSheet", "Back", 0));
        lblTitle->setText(QApplication::translate("CharacterSheet", "Character Sheet", 0));
        pushButton->setText(QApplication::translate("CharacterSheet", "Save", 0));
        pushButton_2->setText(QApplication::translate("CharacterSheet", "Done", 0));
        pushButton_3->setText(QApplication::translate("CharacterSheet", "Load", 0));
        pushButton_4->setText(QApplication::translate("CharacterSheet", "???", 0));
        pushButton_5->setText(QApplication::translate("CharacterSheet", "I don't know what to put here", 0));
    } // retranslateUi

};

namespace Ui {
    class CharacterSheet: public Ui_CharacterSheet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARACTERSHEET_H
