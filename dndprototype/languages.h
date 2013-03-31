#ifndef LANGUAGES_H
#define LANGUAGES_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class Languages;
}

class Languages : public QWidget
{
    Q_OBJECT
    
public:
    explicit Languages(QWidget *parent = 0);
    ~Languages();

    void setMainWindow(MainWindow* window);
    
private slots:
    void on_tableWidget_5_clicked(const QModelIndex &index);

    void on_btnBack_clicked();

    void on_btnNext_clicked();

    void on_btnAboutClasses_clicked();

private:
    Ui::Languages *ui;
    MainWindow* _main;
};

#endif // LANGUAGES_H
