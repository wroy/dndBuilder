/********************************************************************************
** Form generated from reading UI file 'equipment.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUIPMENT_H
#define UI_EQUIPMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Equipment
{
public:
    QPushButton *btnAboutClasses;
    QTabWidget *tabWidget;
    QWidget *tabStr;
    QTableWidget *tableWidget;
    QWidget *tabDexerity;
    QTableWidget *tableWidget_2;
    QWidget *tabConstruction;
    QTableWidget *tableWidget_3;
    QWidget *tabIntelligence;
    QTableWidget *tableWidget_4;
    QWidget *tabWizdom;
    QTableWidget *tableWidget_5;
    QPushButton *btnBack;
    QLabel *lblTitle;
    QPushButton *btnNext;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Equipment)
    {
        if (Equipment->objectName().isEmpty())
            Equipment->setObjectName(QStringLiteral("Equipment"));
        Equipment->resize(616, 513);
        btnAboutClasses = new QPushButton(Equipment);
        btnAboutClasses->setObjectName(QStringLiteral("btnAboutClasses"));
        btnAboutClasses->setGeometry(QRect(453, 10, 151, 32));
        tabWidget = new QTabWidget(Equipment);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 120, 581, 331));
        tabStr = new QWidget();
        tabStr->setObjectName(QStringLiteral("tabStr"));
        tableWidget = new QTableWidget(tabStr);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 10, 531, 271));
        tabWidget->addTab(tabStr, QString());
        tabDexerity = new QWidget();
        tabDexerity->setObjectName(QStringLiteral("tabDexerity"));
        tableWidget_2 = new QTableWidget(tabDexerity);
        if (tableWidget_2->columnCount() < 4)
            tableWidget_2->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(20, 10, 531, 271));
        tabWidget->addTab(tabDexerity, QString());
        tabConstruction = new QWidget();
        tabConstruction->setObjectName(QStringLiteral("tabConstruction"));
        tableWidget_3 = new QTableWidget(tabConstruction);
        if (tableWidget_3->columnCount() < 4)
            tableWidget_3->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(20, 10, 531, 271));
        tabWidget->addTab(tabConstruction, QString());
        tabIntelligence = new QWidget();
        tabIntelligence->setObjectName(QStringLiteral("tabIntelligence"));
        tableWidget_4 = new QTableWidget(tabIntelligence);
        if (tableWidget_4->columnCount() < 4)
            tableWidget_4->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(3, __qtablewidgetitem15);
        tableWidget_4->setObjectName(QStringLiteral("tableWidget_4"));
        tableWidget_4->setGeometry(QRect(20, 10, 531, 271));
        tabWidget->addTab(tabIntelligence, QString());
        tabWizdom = new QWidget();
        tabWizdom->setObjectName(QStringLiteral("tabWizdom"));
        tableWidget_5 = new QTableWidget(tabWizdom);
        if (tableWidget_5->columnCount() < 4)
            tableWidget_5->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(3, __qtablewidgetitem19);
        tableWidget_5->setObjectName(QStringLiteral("tableWidget_5"));
        tableWidget_5->setGeometry(QRect(20, 10, 531, 271));
        tabWidget->addTab(tabWizdom, QString());
        btnBack = new QPushButton(Equipment);
        btnBack->setObjectName(QStringLiteral("btnBack"));
        btnBack->setGeometry(QRect(360, 470, 114, 32));
        lblTitle = new QLabel(Equipment);
        lblTitle->setObjectName(QStringLiteral("lblTitle"));
        lblTitle->setGeometry(QRect(20, 10, 201, 41));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(34);
        lblTitle->setFont(font);
        btnNext = new QPushButton(Equipment);
        btnNext->setObjectName(QStringLiteral("btnNext"));
        btnNext->setGeometry(QRect(490, 470, 114, 32));
        label = new QLabel(Equipment);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 75, 181, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(16);
        label->setFont(font1);
        label_2 = new QLabel(Equipment);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 70, 62, 31));
        label_2->setFont(font1);

        retranslateUi(Equipment);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(Equipment);
    } // setupUi

    void retranslateUi(QWidget *Equipment)
    {
        Equipment->setWindowTitle(QApplication::translate("Equipment", "Form", 0));
        btnAboutClasses->setText(QApplication::translate("Equipment", "About Equipment", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Equipment", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Equipment", "Cost", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Equipment", "Attribute", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Equipment", "Quantity", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabStr), QApplication::translate("Equipment", "Weapons", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("Equipment", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("Equipment", "Cost", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("Equipment", "Attribute", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("Equipment", "Quantity", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabDexerity), QApplication::translate("Equipment", "Armour", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("Equipment", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("Equipment", "Cost", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("Equipment", "Attribute", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("Equipment", "Quantity", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabConstruction), QApplication::translate("Equipment", "Gear/Tools", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_4->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("Equipment", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_4->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("Equipment", "Cost", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_4->horizontalHeaderItem(2);
        ___qtablewidgetitem14->setText(QApplication::translate("Equipment", "Attribute", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_4->horizontalHeaderItem(3);
        ___qtablewidgetitem15->setText(QApplication::translate("Equipment", "Quantity", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabIntelligence), QApplication::translate("Equipment", "Cloths", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_5->horizontalHeaderItem(0);
        ___qtablewidgetitem16->setText(QApplication::translate("Equipment", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_5->horizontalHeaderItem(1);
        ___qtablewidgetitem17->setText(QApplication::translate("Equipment", "Cost", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_5->horizontalHeaderItem(2);
        ___qtablewidgetitem18->setText(QApplication::translate("Equipment", "Attribute", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_5->horizontalHeaderItem(3);
        ___qtablewidgetitem19->setText(QApplication::translate("Equipment", "Quantity", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabWizdom), QApplication::translate("Equipment", "Mounts/Travel", 0));
        btnBack->setText(QApplication::translate("Equipment", "Back", 0));
        lblTitle->setText(QApplication::translate("Equipment", "Equipment", 0));
        btnNext->setText(QApplication::translate("Equipment", "Next", 0));
        label->setText(QApplication::translate("Equipment", "Money Remaining:", 0));
        label_2->setText(QApplication::translate("Equipment", "0000", 0));
    } // retranslateUi

};

namespace Ui {
    class Equipment: public Ui_Equipment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUIPMENT_H
