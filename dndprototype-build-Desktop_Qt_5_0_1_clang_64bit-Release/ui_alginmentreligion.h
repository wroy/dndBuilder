/********************************************************************************
** Form generated from reading UI file 'alginmentreligion.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALGINMENTRELIGION_H
#define UI_ALGINMENTRELIGION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlginmentReligion
{
public:
    QLabel *lblTitle;
    QLabel *lblAlignment;
    QLabel *lblAboutReligion;
    QLabel *lblReligion;
    QLabel *lblAboutReligion_2;
    QComboBox *cboxAlignment;
    QComboBox *cboxReligion;
    QPushButton *btnAboutAlignment;
    QPushButton *btnAboutReligion;
    QTextBrowser *textAlignment;
    QTextBrowser *textReligion;
    QPushButton *btnNext;
    QPushButton *btnback;

    void setupUi(QWidget *AlginmentReligion)
    {
        if (AlginmentReligion->objectName().isEmpty())
            AlginmentReligion->setObjectName(QStringLiteral("AlginmentReligion"));
        AlginmentReligion->resize(616, 513);
        lblTitle = new QLabel(AlginmentReligion);
        lblTitle->setObjectName(QStringLiteral("lblTitle"));
        lblTitle->setGeometry(QRect(10, 10, 381, 41));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(34);
        lblTitle->setFont(font);
        lblAlignment = new QLabel(AlginmentReligion);
        lblAlignment->setObjectName(QStringLiteral("lblAlignment"));
        lblAlignment->setGeometry(QRect(10, 60, 71, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(16);
        lblAlignment->setFont(font1);
        lblAboutReligion = new QLabel(AlginmentReligion);
        lblAboutReligion->setObjectName(QStringLiteral("lblAboutReligion"));
        lblAboutReligion->setGeometry(QRect(10, 90, 171, 16));
        lblReligion = new QLabel(AlginmentReligion);
        lblReligion->setObjectName(QStringLiteral("lblReligion"));
        lblReligion->setGeometry(QRect(10, 270, 62, 31));
        lblReligion->setFont(font1);
        lblAboutReligion_2 = new QLabel(AlginmentReligion);
        lblAboutReligion_2->setObjectName(QStringLiteral("lblAboutReligion_2"));
        lblAboutReligion_2->setGeometry(QRect(10, 300, 161, 16));
        cboxAlignment = new QComboBox(AlginmentReligion);
        cboxAlignment->setObjectName(QStringLiteral("cboxAlignment"));
        cboxAlignment->setGeometry(QRect(80, 60, 231, 26));
        cboxReligion = new QComboBox(AlginmentReligion);
        cboxReligion->setObjectName(QStringLiteral("cboxReligion"));
        cboxReligion->setGeometry(QRect(80, 270, 201, 26));
        btnAboutAlignment = new QPushButton(AlginmentReligion);
        btnAboutAlignment->setObjectName(QStringLiteral("btnAboutAlignment"));
        btnAboutAlignment->setGeometry(QRect(320, 60, 141, 32));
        btnAboutReligion = new QPushButton(AlginmentReligion);
        btnAboutReligion->setObjectName(QStringLiteral("btnAboutReligion"));
        btnAboutReligion->setGeometry(QRect(290, 270, 141, 32));
        textAlignment = new QTextBrowser(AlginmentReligion);
        textAlignment->setObjectName(QStringLiteral("textAlignment"));
        textAlignment->setGeometry(QRect(10, 110, 591, 151));
        textReligion = new QTextBrowser(AlginmentReligion);
        textReligion->setObjectName(QStringLiteral("textReligion"));
        textReligion->setGeometry(QRect(10, 320, 591, 141));
        btnNext = new QPushButton(AlginmentReligion);
        btnNext->setObjectName(QStringLiteral("btnNext"));
        btnNext->setGeometry(QRect(490, 470, 114, 32));
        btnback = new QPushButton(AlginmentReligion);
        btnback->setObjectName(QStringLiteral("btnback"));
        btnback->setGeometry(QRect(360, 470, 114, 32));

        retranslateUi(AlginmentReligion);

        QMetaObject::connectSlotsByName(AlginmentReligion);
    } // setupUi

    void retranslateUi(QWidget *AlginmentReligion)
    {
        AlginmentReligion->setWindowTitle(QApplication::translate("AlginmentReligion", "Form", 0));
        lblTitle->setText(QApplication::translate("AlginmentReligion", "Alignment And Religion", 0));
        lblAlignment->setText(QApplication::translate("AlginmentReligion", "Aligment:", 0));
        lblAboutReligion->setText(QApplication::translate("AlginmentReligion", "About Selected Alignment", 0));
        lblReligion->setText(QApplication::translate("AlginmentReligion", "Religion:", 0));
        lblAboutReligion_2->setText(QApplication::translate("AlginmentReligion", "About Selected Religion", 0));
        btnAboutAlignment->setText(QApplication::translate("AlginmentReligion", "About Alignment", 0));
        btnAboutReligion->setText(QApplication::translate("AlginmentReligion", "About Religion", 0));
        btnNext->setText(QApplication::translate("AlginmentReligion", "Next", 0));
        btnback->setText(QApplication::translate("AlginmentReligion", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class AlginmentReligion: public Ui_AlginmentReligion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALGINMENTRELIGION_H
