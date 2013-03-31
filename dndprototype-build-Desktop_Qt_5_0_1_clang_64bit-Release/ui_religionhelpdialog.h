/********************************************************************************
** Form generated from reading UI file 'religionhelpdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELIGIONHELPDIALOG_H
#define UI_RELIGIONHELPDIALOG_H

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

class Ui_ReligionHelpDialog
{
public:
    QTextBrowser *textInfo;
    QLabel *lblTitle;
    QPushButton *btnOk;

    void setupUi(QDialog *ReligionHelpDialog)
    {
        if (ReligionHelpDialog->objectName().isEmpty())
            ReligionHelpDialog->setObjectName(QStringLiteral("ReligionHelpDialog"));
        ReligionHelpDialog->resize(373, 333);
        textInfo = new QTextBrowser(ReligionHelpDialog);
        textInfo->setObjectName(QStringLiteral("textInfo"));
        textInfo->setGeometry(QRect(20, 80, 331, 192));
        lblTitle = new QLabel(ReligionHelpDialog);
        lblTitle->setObjectName(QStringLiteral("lblTitle"));
        lblTitle->setGeometry(QRect(20, 20, 231, 41));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(34);
        lblTitle->setFont(font);
        btnOk = new QPushButton(ReligionHelpDialog);
        btnOk->setObjectName(QStringLiteral("btnOk"));
        btnOk->setGeometry(QRect(240, 290, 114, 32));

        retranslateUi(ReligionHelpDialog);

        QMetaObject::connectSlotsByName(ReligionHelpDialog);
    } // setupUi

    void retranslateUi(QDialog *ReligionHelpDialog)
    {
        ReligionHelpDialog->setWindowTitle(QApplication::translate("ReligionHelpDialog", "Dialog", 0));
        textInfo->setHtml(QApplication::translate("ReligionHelpDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Calibri'; font-size:14pt;\">A religion is represented by a single God, who personifies the alignment of the person worshipping them.\302\240 There are also Gods that are directly relevant to races.\302\240 </span></p></body></html>", 0));
        lblTitle->setText(QApplication::translate("ReligionHelpDialog", "About Religion", 0));
        btnOk->setText(QApplication::translate("ReligionHelpDialog", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class ReligionHelpDialog: public Ui_ReligionHelpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELIGIONHELPDIALOG_H
