/********************************************************************************
** Form generated from reading UI file 'classhelpdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSHELPDIALOG_H
#define UI_CLASSHELPDIALOG_H

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

class Ui_ClassHelpDialog
{
public:
    QPushButton *btnOk;
    QLabel *lblTitle;
    QTextBrowser *textInfo;

    void setupUi(QDialog *ClassHelpDialog)
    {
        if (ClassHelpDialog->objectName().isEmpty())
            ClassHelpDialog->setObjectName(QStringLiteral("ClassHelpDialog"));
        ClassHelpDialog->resize(373, 333);
        btnOk = new QPushButton(ClassHelpDialog);
        btnOk->setObjectName(QStringLiteral("btnOk"));
        btnOk->setGeometry(QRect(240, 280, 114, 32));
        lblTitle = new QLabel(ClassHelpDialog);
        lblTitle->setObjectName(QStringLiteral("lblTitle"));
        lblTitle->setGeometry(QRect(20, 10, 191, 41));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(34);
        lblTitle->setFont(font);
        textInfo = new QTextBrowser(ClassHelpDialog);
        textInfo->setObjectName(QStringLiteral("textInfo"));
        textInfo->setGeometry(QRect(20, 70, 331, 192));

        retranslateUi(ClassHelpDialog);

        QMetaObject::connectSlotsByName(ClassHelpDialog);
    } // setupUi

    void retranslateUi(QDialog *ClassHelpDialog)
    {
        ClassHelpDialog->setWindowTitle(QApplication::translate("ClassHelpDialog", "Dialog", 0));
        btnOk->setText(QApplication::translate("ClassHelpDialog", "OK", 0));
        lblTitle->setText(QApplication::translate("ClassHelpDialog", "About Class", 0));
        textInfo->setHtml(QApplication::translate("ClassHelpDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">I NEED INFORMATION TO FILL THIS OUT</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class ClassHelpDialog: public Ui_ClassHelpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSHELPDIALOG_H
