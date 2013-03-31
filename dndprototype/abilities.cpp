#include "abilities.h"
#include "ui_abilities.h"
#include "abilitieshelpdialog.h"
#include "alginmentreligion.h"
#include "skills.h"

Abilities::Abilities(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Abilities)
{
    ui->setupUi(this);
}

Abilities::~Abilities()
{
    delete ui;
}

//this is the roll button
void Abilities::on_pushButton_clicked()
{

}

void Abilities::on_btnAboutClasses_clicked()
{
    AbilitiesHelpDialog* help = new AbilitiesHelpDialog();
    help->show();
}

void Abilities::on_btnBack_clicked()
{
    AlginmentReligion* ar = new AlginmentReligion();
    _main->setCentralWidget(ar);
    ar->show();
    ar->setMainWindow(_main);
}

void Abilities::on_btnNext_clicked()
{
    Skills* s = new Skills();
    _main->setCentralWidget(s);
    s->show();
    s->setMainWindow(_main);
}

void Abilities::setMainWindow(MainWindow* window){
    _main = window;
}
