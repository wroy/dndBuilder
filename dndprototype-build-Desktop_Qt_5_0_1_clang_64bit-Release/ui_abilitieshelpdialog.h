/********************************************************************************
** Form generated from reading UI file 'abilitieshelpdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABILITIESHELPDIALOG_H
#define UI_ABILITIESHELPDIALOG_H

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

class Ui_AbilitiesHelpDialog
{
public:
    QTextBrowser *textInfo;
    QPushButton *btnOk;
    QLabel *lblTitle;

    void setupUi(QDialog *AbilitiesHelpDialog)
    {
        if (AbilitiesHelpDialog->objectName().isEmpty())
            AbilitiesHelpDialog->setObjectName(QStringLiteral("AbilitiesHelpDialog"));
        AbilitiesHelpDialog->resize(373, 333);
        textInfo = new QTextBrowser(AbilitiesHelpDialog);
        textInfo->setObjectName(QStringLiteral("textInfo"));
        textInfo->setGeometry(QRect(20, 80, 331, 192));
        btnOk = new QPushButton(AbilitiesHelpDialog);
        btnOk->setObjectName(QStringLiteral("btnOk"));
        btnOk->setGeometry(QRect(240, 290, 114, 32));
        lblTitle = new QLabel(AbilitiesHelpDialog);
        lblTitle->setObjectName(QStringLiteral("lblTitle"));
        lblTitle->setGeometry(QRect(20, 20, 261, 41));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(34);
        lblTitle->setFont(font);

        retranslateUi(AbilitiesHelpDialog);

        QMetaObject::connectSlotsByName(AbilitiesHelpDialog);
    } // setupUi

    void retranslateUi(QDialog *AbilitiesHelpDialog)
    {
        AbilitiesHelpDialog->setWindowTitle(QApplication::translate("AbilitiesHelpDialog", "Dialog", 0));
        textInfo->setHtml(QApplication::translate("AbilitiesHelpDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        btnOk->setText(QApplication::translate("AbilitiesHelpDialog", "OK", 0));
        lblTitle->setText(QApplication::translate("AbilitiesHelpDialog", "About Abilities", 0));
    } // retranslateUi

};

namespace Ui {
    class AbilitiesHelpDialog: public Ui_AbilitiesHelpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABILITIESHELPDIALOG_H
