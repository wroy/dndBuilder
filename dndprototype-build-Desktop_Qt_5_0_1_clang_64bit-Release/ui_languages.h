/********************************************************************************
** Form generated from reading UI file 'languages.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANGUAGES_H
#define UI_LANGUAGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Languages
{
public:
    QPushButton *btnBack;
    QPushButton *btnNext;
    QLabel *lblTitle;
    QPushButton *btnAboutClasses;
    QTableWidget *tableWidget_5;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *Languages)
    {
        if (Languages->objectName().isEmpty())
            Languages->setObjectName(QStringLiteral("Languages"));
        Languages->resize(616, 513);
        btnBack = new QPushButton(Languages);
        btnBack->setObjectName(QStringLiteral("btnBack"));
        btnBack->setGeometry(QRect(360, 470, 114, 32));
        btnNext = new QPushButton(Languages);
        btnNext->setObjectName(QStringLiteral("btnNext"));
        btnNext->setGeometry(QRect(490, 470, 114, 32));
        lblTitle = new QLabel(Languages);
        lblTitle->setObjectName(QStringLiteral("lblTitle"));
        lblTitle->setGeometry(QRect(20, 10, 201, 41));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(34);
        lblTitle->setFont(font);
        btnAboutClasses = new QPushButton(Languages);
        btnAboutClasses->setObjectName(QStringLiteral("btnAboutClasses"));
        btnAboutClasses->setGeometry(QRect(453, 10, 151, 32));
        tableWidget_5 = new QTableWidget(Languages);
        if (tableWidget_5->columnCount() < 2)
            tableWidget_5->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget_5->rowCount() < 4)
            tableWidget_5->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_5->setItem(0, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setCheckState(Qt::Unchecked);
        tableWidget_5->setItem(0, 1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_5->setItem(1, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setCheckState(Qt::Checked);
        tableWidget_5->setItem(1, 1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_5->setItem(2, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setCheckState(Qt::Unchecked);
        tableWidget_5->setItem(2, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_5->setItem(3, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setCheckState(Qt::Unchecked);
        tableWidget_5->setItem(3, 1, __qtablewidgetitem13);
        tableWidget_5->setObjectName(QStringLiteral("tableWidget_5"));
        tableWidget_5->setGeometry(QRect(20, 110, 211, 351));
        label_3 = new QLabel(Languages);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(250, 110, 171, 16));
        textBrowser = new QTextBrowser(Languages);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(250, 130, 351, 331));
        label_4 = new QLabel(Languages);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 70, 211, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(16);
        label_4->setFont(font1);
        label_5 = new QLabel(Languages);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(240, 70, 51, 21));
        label_5->setFont(font1);

        retranslateUi(Languages);

        QMetaObject::connectSlotsByName(Languages);
    } // setupUi

    void retranslateUi(QWidget *Languages)
    {
        Languages->setWindowTitle(QApplication::translate("Languages", "Form", 0));
        btnBack->setText(QApplication::translate("Languages", "Back", 0));
        btnNext->setText(QApplication::translate("Languages", "Next", 0));
        lblTitle->setText(QApplication::translate("Languages", "Languages", 0));
        btnAboutClasses->setText(QApplication::translate("Languages", "About Lanaguage", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_5->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Languages", "Language", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_5->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Languages", "Learned", 0));

        const bool __sortingEnabled = tableWidget_5->isSortingEnabled();
        tableWidget_5->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_5->item(0, 0);
        ___qtablewidgetitem2->setText(QApplication::translate("Languages", "Abyssal", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_5->item(1, 0);
        ___qtablewidgetitem3->setText(QApplication::translate("Languages", "Common", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_5->item(2, 0);
        ___qtablewidgetitem4->setText(QApplication::translate("Languages", "Giant", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_5->item(3, 0);
        ___qtablewidgetitem5->setText(QApplication::translate("Languages", "Orc", 0));
        tableWidget_5->setSortingEnabled(__sortingEnabled);

        label_3->setText(QApplication::translate("Languages", "About Selected Language", 0));
        label_4->setText(QApplication::translate("Languages", "Language Points Remaining:", 0));
        label_5->setText(QApplication::translate("Languages", "0000", 0));
    } // retranslateUi

};

namespace Ui {
    class Languages: public Ui_Languages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANGUAGES_H
