/********************************************************************************
** Form generated from reading UI file 'languagehelpdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANGUAGEHELPDIALOG_H
#define UI_LANGUAGEHELPDIALOG_H

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

class Ui_LanguageHelpDialog
{
public:
    QTextBrowser *textInfo;
    QLabel *lblTitle;
    QPushButton *btnOk;

    void setupUi(QDialog *LanguageHelpDialog)
    {
        if (LanguageHelpDialog->objectName().isEmpty())
            LanguageHelpDialog->setObjectName(QStringLiteral("LanguageHelpDialog"));
        LanguageHelpDialog->resize(373, 313);
        textInfo = new QTextBrowser(LanguageHelpDialog);
        textInfo->setObjectName(QStringLiteral("textInfo"));
        textInfo->setGeometry(QRect(20, 70, 331, 192));
        lblTitle = new QLabel(LanguageHelpDialog);
        lblTitle->setObjectName(QStringLiteral("lblTitle"));
        lblTitle->setGeometry(QRect(20, 10, 261, 41));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(34);
        lblTitle->setFont(font);
        btnOk = new QPushButton(LanguageHelpDialog);
        btnOk->setObjectName(QStringLiteral("btnOk"));
        btnOk->setGeometry(QRect(240, 280, 114, 32));

        retranslateUi(LanguageHelpDialog);

        QMetaObject::connectSlotsByName(LanguageHelpDialog);
    } // setupUi

    void retranslateUi(QDialog *LanguageHelpDialog)
    {
        LanguageHelpDialog->setWindowTitle(QApplication::translate("LanguageHelpDialog", "Dialog", 0));
        textInfo->setHtml(QApplication::translate("LanguageHelpDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        lblTitle->setText(QApplication::translate("LanguageHelpDialog", "About Language", 0));
        btnOk->setText(QApplication::translate("LanguageHelpDialog", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class LanguageHelpDialog: public Ui_LanguageHelpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANGUAGEHELPDIALOG_H
