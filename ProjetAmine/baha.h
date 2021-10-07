#ifndef BAHA_H
#define BAHA_H

#include <adherent.h>
#include <groupe.h>
#include <QMainWindow>
#include <QMediaPlayer>
#include "excel.h"
#include <QSystemTrayIcon>

namespace Ui {
class baha;
}

class baha : public QMainWindow
{
    Q_OBJECT
private slots:


    void on_on_pb_ajouter_clicked();




    void on_pushButtonsupp_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_supgroupe_clicked();

    void on_pushButton_modifiergroupe_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_tableView_activated2(const QModelIndex &index);


    void on_pushButton_17_clicked();


public:
    explicit baha(QWidget *parent = nullptr);
    ~baha();

private:
    Ui::baha *ui;
    adherent A;
    groupe g;
    QMediaPlayer *click;
    QSystemTrayIcon *mysystem;


};

#endif // BAHA_H
