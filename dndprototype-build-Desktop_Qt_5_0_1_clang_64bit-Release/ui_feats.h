/********************************************************************************
** Form generated from reading UI file 'feats.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEATS_H
#define UI_FEATS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Feats
{
public:
    QPushButton *btnAboutClasses;
    QTabWidget *tabWidget;
    QWidget *tabStr;
    QSpinBox *spinStr;
    QLabel *lblStrLevel;
    QTextBrowser *textStr;
    QLabel *lblStrAbout;
    QWidget *tabDexerity;
    QLabel *lblDexAbout;
    QTextBrowser *textDex;
    QLabel *lblDexLevel;
    QSpinBox *spinDex;
    QWidget *tabConstruction;
    QSpinBox *spinCon;
    QLabel *lblConLevel;
    QTextBrowser *textCon;
    QLabel *lblConAbout;
    QWidget *tabIntelligence;
    QSpinBox *spinInt;
    QLabel *lblIntLevel;
    QTextBrowser *textInt;
    QLabel *lblIntAbout;
    QWidget *tabWizdom;
    QSpinBox *spinWiz;
    QLabel *lblWizLevel;
    QTextBrowser *textWiz;
    QLabel *lblWizAbout;
    QWidget *tabCharism;
    QSpinBox *spinCha;
    QLabel *lblChaLevel;
    QTextBrowser *textCha;
    QLabel *lblChaAbout;
    QPushButton *btnBack;
    QLabel *lblTitle;
    QPushButton *btnNext;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Feats)
    {
        if (Feats->objectName().isEmpty())
            Feats->setObjectName(QStringLiteral("Feats"));
        Feats->resize(616, 513);
        btnAboutClasses = new QPushButton(Feats);
        btnAboutClasses->setObjectName(QStringLiteral("btnAboutClasses"));
        btnAboutClasses->setGeometry(QRect(483, 10, 121, 32));
        tabWidget = new QTabWidget(Feats);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 120, 581, 301));
        tabStr = new QWidget();
        tabStr->setObjectName(QStringLiteral("tabStr"));
        spinStr = new QSpinBox(tabStr);
        spinStr->setObjectName(QStringLiteral("spinStr"));
        spinStr->setGeometry(QRect(150, 10, 57, 24));
        lblStrLevel = new QLabel(tabStr);
        lblStrLevel->setObjectName(QStringLiteral("lblStrLevel"));
        lblStrLevel->setGeometry(QRect(30, 10, 121, 21));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(16);
        lblStrLevel->setFont(font);
        textStr = new QTextBrowser(tabStr);
        textStr->setObjectName(QStringLiteral("textStr"));
        textStr->setGeometry(QRect(30, 70, 531, 191));
        lblStrAbout = new QLabel(tabStr);
        lblStrAbout->setObjectName(QStringLiteral("lblStrAbout"));
        lblStrAbout->setGeometry(QRect(30, 50, 171, 16));
        tabWidget->addTab(tabStr, QString());
        tabDexerity = new QWidget();
        tabDexerity->setObjectName(QStringLiteral("tabDexerity"));
        lblDexAbout = new QLabel(tabDexerity);
        lblDexAbout->setObjectName(QStringLiteral("lblDexAbout"));
        lblDexAbout->setGeometry(QRect(30, 50, 171, 16));
        textDex = new QTextBrowser(tabDexerity);
        textDex->setObjectName(QStringLiteral("textDex"));
        textDex->setGeometry(QRect(30, 70, 531, 191));
        lblDexLevel = new QLabel(tabDexerity);
        lblDexLevel->setObjectName(QStringLiteral("lblDexLevel"));
        lblDexLevel->setGeometry(QRect(30, 10, 121, 21));
        lblDexLevel->setFont(font);
        spinDex = new QSpinBox(tabDexerity);
        spinDex->setObjectName(QStringLiteral("spinDex"));
        spinDex->setGeometry(QRect(150, 10, 57, 24));
        tabWidget->addTab(tabDexerity, QString());
        tabConstruction = new QWidget();
        tabConstruction->setObjectName(QStringLiteral("tabConstruction"));
        spinCon = new QSpinBox(tabConstruction);
        spinCon->setObjectName(QStringLiteral("spinCon"));
        spinCon->setGeometry(QRect(170, 10, 57, 24));
        lblConLevel = new QLabel(tabConstruction);
        lblConLevel->setObjectName(QStringLiteral("lblConLevel"));
        lblConLevel->setGeometry(QRect(30, 10, 141, 21));
        lblConLevel->setFont(font);
        textCon = new QTextBrowser(tabConstruction);
        textCon->setObjectName(QStringLiteral("textCon"));
        textCon->setGeometry(QRect(30, 70, 531, 191));
        lblConAbout = new QLabel(tabConstruction);
        lblConAbout->setObjectName(QStringLiteral("lblConAbout"));
        lblConAbout->setGeometry(QRect(30, 50, 171, 16));
        tabWidget->addTab(tabConstruction, QString());
        tabIntelligence = new QWidget();
        tabIntelligence->setObjectName(QStringLiteral("tabIntelligence"));
        spinInt = new QSpinBox(tabIntelligence);
        spinInt->setObjectName(QStringLiteral("spinInt"));
        spinInt->setGeometry(QRect(170, 10, 57, 24));
        lblIntLevel = new QLabel(tabIntelligence);
        lblIntLevel->setObjectName(QStringLiteral("lblIntLevel"));
        lblIntLevel->setGeometry(QRect(30, 10, 141, 21));
        lblIntLevel->setFont(font);
        textInt = new QTextBrowser(tabIntelligence);
        textInt->setObjectName(QStringLiteral("textInt"));
        textInt->setGeometry(QRect(30, 70, 531, 191));
        lblIntAbout = new QLabel(tabIntelligence);
        lblIntAbout->setObjectName(QStringLiteral("lblIntAbout"));
        lblIntAbout->setGeometry(QRect(30, 50, 171, 16));
        tabWidget->addTab(tabIntelligence, QString());
        tabWizdom = new QWidget();
        tabWizdom->setObjectName(QStringLiteral("tabWizdom"));
        spinWiz = new QSpinBox(tabWizdom);
        spinWiz->setObjectName(QStringLiteral("spinWiz"));
        spinWiz->setGeometry(QRect(150, 10, 57, 24));
        lblWizLevel = new QLabel(tabWizdom);
        lblWizLevel->setObjectName(QStringLiteral("lblWizLevel"));
        lblWizLevel->setGeometry(QRect(30, 10, 121, 21));
        lblWizLevel->setFont(font);
        textWiz = new QTextBrowser(tabWizdom);
        textWiz->setObjectName(QStringLiteral("textWiz"));
        textWiz->setGeometry(QRect(30, 70, 531, 191));
        lblWizAbout = new QLabel(tabWizdom);
        lblWizAbout->setObjectName(QStringLiteral("lblWizAbout"));
        lblWizAbout->setGeometry(QRect(30, 50, 171, 16));
        tabWidget->addTab(tabWizdom, QString());
        tabCharism = new QWidget();
        tabCharism->setObjectName(QStringLiteral("tabCharism"));
        spinCha = new QSpinBox(tabCharism);
        spinCha->setObjectName(QStringLiteral("spinCha"));
        spinCha->setGeometry(QRect(150, 10, 57, 24));
        lblChaLevel = new QLabel(tabCharism);
        lblChaLevel->setObjectName(QStringLiteral("lblChaLevel"));
        lblChaLevel->setGeometry(QRect(30, 10, 121, 21));
        lblChaLevel->setFont(font);
        textCha = new QTextBrowser(tabCharism);
        textCha->setObjectName(QStringLiteral("textCha"));
        textCha->setGeometry(QRect(30, 70, 531, 191));
        lblChaAbout = new QLabel(tabCharism);
        lblChaAbout->setObjectName(QStringLiteral("lblChaAbout"));
        lblChaAbout->setGeometry(QRect(30, 50, 171, 16));
        tabWidget->addTab(tabCharism, QString());
        btnBack = new QPushButton(Feats);
        btnBack->setObjectName(QStringLiteral("btnBack"));
        btnBack->setGeometry(QRect(360, 470, 114, 32));
        lblTitle = new QLabel(Feats);
        lblTitle->setObjectName(QStringLiteral("lblTitle"));
        lblTitle->setGeometry(QRect(20, 10, 201, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(34);
        lblTitle->setFont(font1);
        btnNext = new QPushButton(Feats);
        btnNext->setObjectName(QStringLiteral("btnNext"));
        btnNext->setGeometry(QRect(490, 470, 114, 32));
        label = new QLabel(Feats);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 75, 181, 21));
        label->setFont(font);
        label_2 = new QLabel(Feats);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(210, 76, 62, 20));
        label_2->setFont(font);

        retranslateUi(Feats);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Feats);
    } // setupUi

    void retranslateUi(QWidget *Feats)
    {
        Feats->setWindowTitle(QApplication::translate("Feats", "Form", 0));
        btnAboutClasses->setText(QApplication::translate("Feats", "About Feats", 0));
        lblStrLevel->setText(QApplication::translate("Feats", "Agile Level:", 0));
        textStr->setHtml(QApplication::translate("Feats", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        lblStrAbout->setText(QApplication::translate("Feats", "About Agile Feat", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabStr), QApplication::translate("Feats", "Agile", 0));
        lblDexAbout->setText(QApplication::translate("Feats", "About Alertness Feat", 0));
        textDex->setHtml(QApplication::translate("Feats", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        lblDexLevel->setText(QApplication::translate("Feats", "Alertness Level:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabDexerity), QApplication::translate("Feats", "Alertness", 0));
        lblConLevel->setText(QApplication::translate("Feats", "Athletic Level:", 0));
        textCon->setHtml(QApplication::translate("Feats", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        lblConAbout->setText(QApplication::translate("Feats", "About Athletic Feat", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabConstruction), QApplication::translate("Feats", "Athletic", 0));
        lblIntLevel->setText(QApplication::translate("Feats", "Cleave Level:", 0));
        textInt->setHtml(QApplication::translate("Feats", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        lblIntAbout->setText(QApplication::translate("Feats", "About Cleave Feat", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabIntelligence), QApplication::translate("Feats", "Cleave", 0));
        lblWizLevel->setText(QApplication::translate("Feats", "Diehard Level:", 0));
        textWiz->setHtml(QApplication::translate("Feats", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        lblWizAbout->setText(QApplication::translate("Feats", "About Diehard Feat", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabWizdom), QApplication::translate("Feats", "Diehard", 0));
        lblChaLevel->setText(QApplication::translate("Feats", "Dodge Level:", 0));
        textCha->setHtml(QApplication::translate("Feats", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        lblChaAbout->setText(QApplication::translate("Feats", "About Dodge Feat", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabCharism), QApplication::translate("Feats", "Dodge", 0));
        btnBack->setText(QApplication::translate("Feats", "Back", 0));
        lblTitle->setText(QApplication::translate("Feats", "Feats", 0));
        btnNext->setText(QApplication::translate("Feats", "Next", 0));
        label->setText(QApplication::translate("Feats", "Feats Points Remaining:", 0));
        label_2->setText(QApplication::translate("Feats", "0000", 0));
    } // retranslateUi

};

namespace Ui {
    class Feats: public Ui_Feats {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEATS_H
