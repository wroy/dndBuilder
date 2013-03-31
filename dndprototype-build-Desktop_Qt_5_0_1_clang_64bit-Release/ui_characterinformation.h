/********************************************************************************
** Form generated from reading UI file 'characterinformation.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARACTERINFORMATION_H
#define UI_CHARACTERINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CharacterInformation
{
public:
    QLabel *lblTitle;
    QLabel *lblName;
    QLabel *lblRace;
    QLineEdit *lineName;
    QComboBox *cmbRace;
    QTextBrowser *RaceInformation;
    QPushButton *btnNext;
    QPushButton *btnCompare;
    QLabel *lblExtraInfo;

    void setupUi(QWidget *CharacterInformation)
    {
        if (CharacterInformation->objectName().isEmpty())
            CharacterInformation->setObjectName(QStringLiteral("CharacterInformation"));
        CharacterInformation->resize(618, 523);
        lblTitle = new QLabel(CharacterInformation);
        lblTitle->setObjectName(QStringLiteral("lblTitle"));
        lblTitle->setGeometry(QRect(30, 20, 341, 41));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(34);
        lblTitle->setFont(font);
        lblName = new QLabel(CharacterInformation);
        lblName->setObjectName(QStringLiteral("lblName"));
        lblName->setGeometry(QRect(30, 80, 62, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(16);
        lblName->setFont(font1);
        lblRace = new QLabel(CharacterInformation);
        lblRace->setObjectName(QStringLiteral("lblRace"));
        lblRace->setGeometry(QRect(30, 105, 62, 31));
        lblRace->setFont(font1);
        lineName = new QLineEdit(CharacterInformation);
        lineName->setObjectName(QStringLiteral("lineName"));
        lineName->setGeometry(QRect(90, 80, 321, 21));
        cmbRace = new QComboBox(CharacterInformation);
        cmbRace->setObjectName(QStringLiteral("cmbRace"));
        cmbRace->setGeometry(QRect(90, 110, 321, 26));
        RaceInformation = new QTextBrowser(CharacterInformation);
        RaceInformation->setObjectName(QStringLiteral("RaceInformation"));
        RaceInformation->setGeometry(QRect(40, 180, 531, 281));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        RaceInformation->setFont(font2);
        btnNext = new QPushButton(CharacterInformation);
        btnNext->setObjectName(QStringLiteral("btnNext"));
        btnNext->setGeometry(QRect(490, 470, 114, 32));
        btnCompare = new QPushButton(CharacterInformation);
        btnCompare->setObjectName(QStringLiteral("btnCompare"));
        btnCompare->setGeometry(QRect(420, 110, 114, 32));
        lblExtraInfo = new QLabel(CharacterInformation);
        lblExtraInfo->setObjectName(QStringLiteral("lblExtraInfo"));
        lblExtraInfo->setGeometry(QRect(40, 160, 221, 16));
        lblExtraInfo->setFont(font2);

        retranslateUi(CharacterInformation);

        QMetaObject::connectSlotsByName(CharacterInformation);
    } // setupUi

    void retranslateUi(QWidget *CharacterInformation)
    {
        CharacterInformation->setWindowTitle(QApplication::translate("CharacterInformation", "Form", 0));
        lblTitle->setText(QApplication::translate("CharacterInformation", "Character Information", 0));
        lblName->setText(QApplication::translate("CharacterInformation", "Name: ", 0));
        lblRace->setText(QApplication::translate("CharacterInformation", "Race: ", 0));
        RaceInformation->setHtml(QApplication::translate("CharacterInformation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        btnNext->setText(QApplication::translate("CharacterInformation", "Next", 0));
        btnCompare->setText(QApplication::translate("CharacterInformation", "About Races", 0));
        lblExtraInfo->setText(QApplication::translate("CharacterInformation", "Information About Selected Race", 0));
    } // retranslateUi

};

namespace Ui {
    class CharacterInformation: public Ui_CharacterInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARACTERINFORMATION_H
