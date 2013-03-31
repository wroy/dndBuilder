/********************************************************************************
** Form generated from reading UI file 'skillhelpdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKILLHELPDIALOG_H
#define UI_SKILLHELPDIALOG_H

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

class Ui_SkillHelpDialog
{
public:
    QTextBrowser *textInfo;
    QLabel *lblTitle;
    QPushButton *btnOk;

    void setupUi(QDialog *SkillHelpDialog)
    {
        if (SkillHelpDialog->objectName().isEmpty())
            SkillHelpDialog->setObjectName(QStringLiteral("SkillHelpDialog"));
        SkillHelpDialog->resize(373, 333);
        textInfo = new QTextBrowser(SkillHelpDialog);
        textInfo->setObjectName(QStringLiteral("textInfo"));
        textInfo->setGeometry(QRect(20, 70, 331, 192));
        lblTitle = new QLabel(SkillHelpDialog);
        lblTitle->setObjectName(QStringLiteral("lblTitle"));
        lblTitle->setGeometry(QRect(20, 10, 261, 41));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(34);
        lblTitle->setFont(font);
        btnOk = new QPushButton(SkillHelpDialog);
        btnOk->setObjectName(QStringLiteral("btnOk"));
        btnOk->setGeometry(QRect(240, 280, 114, 32));

        retranslateUi(SkillHelpDialog);

        QMetaObject::connectSlotsByName(SkillHelpDialog);
    } // setupUi

    void retranslateUi(QDialog *SkillHelpDialog)
    {
        SkillHelpDialog->setWindowTitle(QApplication::translate("SkillHelpDialog", "Dialog", 0));
        textInfo->setHtml(QApplication::translate("SkillHelpDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        lblTitle->setText(QApplication::translate("SkillHelpDialog", "About Skills", 0));
        btnOk->setText(QApplication::translate("SkillHelpDialog", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class SkillHelpDialog: public Ui_SkillHelpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKILLHELPDIALOG_H
