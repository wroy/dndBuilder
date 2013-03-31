/********************************************************************************
** Form generated from reading UI file 'classselect.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSSELECT_H
#define UI_CLASSSELECT_H

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

class Ui_ClassSelect
{
public:
    QLabel *lblTitle;
    QTabWidget *tabWidget;
    QWidget *tabBarbarian;
    QSpinBox *spinBar;
    QLabel *lblBarLevel;
    QTextBrowser *textBarbarian;
    QLabel *lblBarAbout;
    QWidget *tabPaladin;
    QSpinBox *spinPal;
    QLabel *lblPalLevel;
    QTextBrowser *textPaladin;
    QLabel *lblPalAbout;
    QWidget *tabWizard;
    QSpinBox *spinWiz;
    QLabel *lblWizLevel;
    QTextBrowser *textWizard;
    QLabel *lblWizAbout;
    QPushButton *btnBack;
    QPushButton *btnNext;
    QPushButton *btnAboutClasses;

    void setupUi(QWidget *ClassSelect)
    {
        if (ClassSelect->objectName().isEmpty())
            ClassSelect->setObjectName(QStringLiteral("ClassSelect"));
        ClassSelect->resize(616, 513);
        lblTitle = new QLabel(ClassSelect);
        lblTitle->setObjectName(QStringLiteral("lblTitle"));
        lblTitle->setGeometry(QRect(20, 10, 201, 41));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(34);
        lblTitle->setFont(font);
        tabWidget = new QTabWidget(ClassSelect);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 80, 581, 381));
        tabBarbarian = new QWidget();
        tabBarbarian->setObjectName(QStringLiteral("tabBarbarian"));
        spinBar = new QSpinBox(tabBarbarian);
        spinBar->setObjectName(QStringLiteral("spinBar"));
        spinBar->setGeometry(QRect(130, 10, 57, 24));
        lblBarLevel = new QLabel(tabBarbarian);
        lblBarLevel->setObjectName(QStringLiteral("lblBarLevel"));
        lblBarLevel->setGeometry(QRect(30, 10, 101, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(16);
        lblBarLevel->setFont(font1);
        textBarbarian = new QTextBrowser(tabBarbarian);
        textBarbarian->setObjectName(QStringLiteral("textBarbarian"));
        textBarbarian->setGeometry(QRect(30, 70, 531, 271));
        lblBarAbout = new QLabel(tabBarbarian);
        lblBarAbout->setObjectName(QStringLiteral("lblBarAbout"));
        lblBarAbout->setGeometry(QRect(30, 50, 171, 16));
        tabWidget->addTab(tabBarbarian, QString());
        tabPaladin = new QWidget();
        tabPaladin->setObjectName(QStringLiteral("tabPaladin"));
        spinPal = new QSpinBox(tabPaladin);
        spinPal->setObjectName(QStringLiteral("spinPal"));
        spinPal->setGeometry(QRect(130, 10, 57, 24));
        lblPalLevel = new QLabel(tabPaladin);
        lblPalLevel->setObjectName(QStringLiteral("lblPalLevel"));
        lblPalLevel->setGeometry(QRect(30, 10, 101, 21));
        lblPalLevel->setFont(font1);
        textPaladin = new QTextBrowser(tabPaladin);
        textPaladin->setObjectName(QStringLiteral("textPaladin"));
        textPaladin->setGeometry(QRect(30, 70, 531, 271));
        lblPalAbout = new QLabel(tabPaladin);
        lblPalAbout->setObjectName(QStringLiteral("lblPalAbout"));
        lblPalAbout->setGeometry(QRect(30, 50, 161, 16));
        tabWidget->addTab(tabPaladin, QString());
        tabWizard = new QWidget();
        tabWizard->setObjectName(QStringLiteral("tabWizard"));
        spinWiz = new QSpinBox(tabWizard);
        spinWiz->setObjectName(QStringLiteral("spinWiz"));
        spinWiz->setGeometry(QRect(130, 10, 57, 24));
        lblWizLevel = new QLabel(tabWizard);
        lblWizLevel->setObjectName(QStringLiteral("lblWizLevel"));
        lblWizLevel->setGeometry(QRect(30, 10, 101, 21));
        lblWizLevel->setFont(font1);
        textWizard = new QTextBrowser(tabWizard);
        textWizard->setObjectName(QStringLiteral("textWizard"));
        textWizard->setGeometry(QRect(30, 70, 531, 271));
        lblWizAbout = new QLabel(tabWizard);
        lblWizAbout->setObjectName(QStringLiteral("lblWizAbout"));
        lblWizAbout->setGeometry(QRect(30, 50, 161, 16));
        tabWidget->addTab(tabWizard, QString());
        btnBack = new QPushButton(ClassSelect);
        btnBack->setObjectName(QStringLiteral("btnBack"));
        btnBack->setGeometry(QRect(360, 470, 114, 32));
        btnNext = new QPushButton(ClassSelect);
        btnNext->setObjectName(QStringLiteral("btnNext"));
        btnNext->setGeometry(QRect(490, 470, 114, 32));
        btnAboutClasses = new QPushButton(ClassSelect);
        btnAboutClasses->setObjectName(QStringLiteral("btnAboutClasses"));
        btnAboutClasses->setGeometry(QRect(483, 10, 121, 32));

        retranslateUi(ClassSelect);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ClassSelect);
    } // setupUi

    void retranslateUi(QWidget *ClassSelect)
    {
        ClassSelect->setWindowTitle(QApplication::translate("ClassSelect", "Form", 0));
        lblTitle->setText(QApplication::translate("ClassSelect", "Class Select", 0));
        lblBarLevel->setText(QApplication::translate("ClassSelect", "Class Level:", 0));
        textBarbarian->setHtml(QApplication::translate("ClassSelect", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Type: Melee </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Specialization: Melee fighters that are very effective at dealing and receiving physical damage.\302\240 They are also capable of using ranged weapons such as pistols and crossbows. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Notable Features: </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-rig"
                        "ht:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Illiterate: </span>Barbarians are the only characters who do not automatically know how to read or write.\302\240 It must be learned by spending skill points! </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Rage: </span>A Barbarian can fly into a rage a certain number of times a day.\302\240 In it, they gain +4 Strength and constitution, +2 to will saves, but -2 to AC.\302\240 They gain +2 hp per level, but they disappear at the end of the rage.\302\240 Rage lasts for 3+ (new constitution modifier) turns, and can be activated once per day at level 1. Can only use Strength based skills, but any feat except magic feats.\302\240 Barbarians who are of a lawful alignment cannot use Rage. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Al"
                        "ignments: It is recommended that Barbarians be a non-lawful alignment.\302\240 Lawful alignments restrict a Barbarians Rage ability. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br />Suggested Feats for beginners: </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Melee: Weapon Specialization, Weapon Focus, Two Weapon Fighting, Greater Cleave, Endurance, Toughness. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Ranged: Weapon Specialization, Point-blank-shot, Quick Draw, rapid reload, Endurance, Toughness. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Armour Type: Best suited to light and medium armour.\302\240 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-l"
                        "eft:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Class Skills: Climb (strength), Handle Animal (Charisma), Intimidate (Charisma), Jump (Strength), Listen (Wisdom), Ride (Dexterity), Survival (Wisdom), Swim (str) </p></body></html>", 0));
        lblBarAbout->setText(QApplication::translate("ClassSelect", "About The Barbarian Class", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabBarbarian), QApplication::translate("ClassSelect", "Barbarin", 0));
        lblPalLevel->setText(QApplication::translate("ClassSelect", "Class Level:", 0));
        textPaladin->setHtml(QApplication::translate("ClassSelect", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Specialization: Paladins are demonstrations of good and leadership.\302\240 Paladins inspire and heal their party members, but are not suited to front-of-the-line combat themselves. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Notable Features: </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Smite Evil: </span>\302\240Once per day, the Paladin can smite "
                        "evil with a normal melee attack, which deals additional damage to evil targets. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Divine Health: </span>At 3<span style=\" vertical-align:super;\">rd</span> level, the Paladin can no longer be inflicted with any sort of disease, natural or otherwise. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Special Mount </span>At level 6, the Paladin gains an unusually intelligent, strong and loyal steed. It will help you in your quest for justice.\302\240 This mount should be suited to your race and environment. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Alignments</span>: Paladins must be lawful good. A Paladin who wilf"
                        "ully commits an evil act must atone for their actions lest they lose their Paladin abilities. \302\240 </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Suggested Feats for Beginners: </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Iron Will, Leadership, Endurance, Negotiator, Toughness, Leadership </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Armour Types: Can wear light, medium, or heavy armour.\302\240 Can use shields, but must specialize for Tower Shields. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Class Skills: Concentration (Constitution), Craft (Intelligence), Diplomacy (Charisma), Handle Animal (Wisdom), Heal (Wisdom), Knowledge (nobility and royalty) (intelligence), "
                        "Knowledge (religion) (intelligence), Profession (Wisdom), Ride (Dexterity), Sense Motive (Wisdom) </p></body></html>", 0));
        lblPalAbout->setText(QApplication::translate("ClassSelect", "About The Paladin Class", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabPaladin), QApplication::translate("ClassSelect", "Paladin", 0));
        lblWizLevel->setText(QApplication::translate("ClassSelect", "Class Level:", 0));
        textWizard->setHtml(QApplication::translate("ClassSelect", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Specialization: Wielding spells that display a proficiency in the arcane, Wizards are powerful casters that can wreak havoc from a distance. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Notable Features: </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Familiar: </span>Wizards can take on a familiar that grants the different bonuses based on the type of f"
                        "amiliar taken.\302\240 The Wizard can take a bat, cat, hawk, lizard, owl, rat, raven, snake, toad, or weasel. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Specialization: </span>A school is a grouping of 8 spells that are combined based on a common theme.\302\240 A Wizard may specialize in one school of magic which allows them to prepare an additional spell per day and gain +2 spellcraft on those spells.\302\240 However, a wizard cannot learn spells from other schools if they choose to specialize. Specialization cannot change once taken.\302\240 These include: Abjuration, Conjuration, Divination, Enchantment, Evocation, Illusion, Necromancy, Transmutation.\302\240 A spell that does not fall into any of these schools is considered universal. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-w"
                        "eight:600;\">Spellbook: </span>A wizard must prepare spells each day by reading their spellbook.\302\240 The spellbook contains information on all the spells that are currently available to the wizard. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Alignments: A wizard can fall into any area on the alignment spectrum. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Suggested Feats for Beginners: Alertness, Combat Casting, Endurance, Extend Spell, Persuasive, Spell Penetration </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Armour types: Wizards do not specialize in any armour type.\302\240 Wearing armour hinders the Wizard\342\200\231s movement, causing his or her spells to be less effective. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:"
                        "0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Class Skills: Concentration (Constitution), Craft (Intellgience), Knowledge (all skills) (Intelligence), Profession (Wisdom), Spellcraft (Intelligence) </p></body></html>", 0));
        lblWizAbout->setText(QApplication::translate("ClassSelect", "About The Wizard Class", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabWizard), QApplication::translate("ClassSelect", "Wizard", 0));
        btnBack->setText(QApplication::translate("ClassSelect", "Back", 0));
        btnNext->setText(QApplication::translate("ClassSelect", "Next", 0));
        btnAboutClasses->setText(QApplication::translate("ClassSelect", "About Classes", 0));
    } // retranslateUi

};

namespace Ui {
    class ClassSelect: public Ui_ClassSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSSELECT_H
