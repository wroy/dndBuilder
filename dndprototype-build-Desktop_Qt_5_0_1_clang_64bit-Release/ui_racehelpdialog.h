/********************************************************************************
** Form generated from reading UI file 'racehelpdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RACEHELPDIALOG_H
#define UI_RACEHELPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_RaceHelpDialog
{
public:
    QPushButton *btnOk;
    QLabel *lblTitle;
    QTextBrowser *textInfo;

    void setupUi(QDialog *RaceHelpDialog)
    {
        if (RaceHelpDialog->objectName().isEmpty())
            RaceHelpDialog->setObjectName(QStringLiteral("RaceHelpDialog"));
        RaceHelpDialog->resize(373, 333);
        btnOk = new QPushButton(RaceHelpDialog);
        btnOk->setObjectName(QStringLiteral("btnOk"));
        btnOk->setGeometry(QRect(240, 280, 114, 32));
        lblTitle = new QLabel(RaceHelpDialog);
        lblTitle->setObjectName(QStringLiteral("lblTitle"));
        lblTitle->setGeometry(QRect(20, 10, 191, 41));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(34);
        lblTitle->setFont(font);
        textInfo = new QTextBrowser(RaceHelpDialog);
        textInfo->setObjectName(QStringLiteral("textInfo"));
        textInfo->setGeometry(QRect(20, 70, 331, 192));

        retranslateUi(RaceHelpDialog);

        QMetaObject::connectSlotsByName(RaceHelpDialog);
    } // setupUi

    void retranslateUi(QDialog *RaceHelpDialog)
    {
        RaceHelpDialog->setWindowTitle(QApplication::translate("RaceHelpDialog", "Dialog", 0));
        btnOk->setText(QApplication::translate("RaceHelpDialog", "OK", 0));
        lblTitle->setText(QApplication::translate("RaceHelpDialog", "About Race", 0));
        textInfo->setHtml(QApplication::translate("RaceHelpDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">There are different species of intelligent beings roaming the lands.\302\240 There are many, many subtypes of each race that a player can take on, but we will only be considering the general race type and the benefits that they have.\302\240 Race should primarily be taken for roleplay purposes, with bonuses considered after. </p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class RaceHelpDialog: public Ui_RaceHelpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RACEHELPDIALOG_H
