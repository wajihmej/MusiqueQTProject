#ifndef RAMZI_H
#define RAMZI_H

#include <QMainWindow>
#include "cours.h"
#include "scean.h"
#include "arduino.h"

namespace Ui {
class Ramzi;
}

class Ramzi : public QMainWindow
{
    Q_OBJECT

public:
    explicit Ramzi(QWidget *parent = nullptr);
    ~Ramzi();
    void refresh();
private slots:
    void update_label();
    void on_ajouterSC_clicked();

    void on_SupprimerSc_clicked();

    void on_ModifieSC_clicked();

    void on_AjouterC_clicked();

    void on_supprimerC_2_clicked();

    void on_ModifierC_clicked();

    void on_pushButton_2_clicked();
    void sendMail();
    void mailSent(QString) ;

    void on_pushButton_clicked();

    void on_lineEdit_4_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_3_clicked();

    void on_comboBox_8_currentIndexChanged(int index);

private:
    Arduino A;
    QByteArray data ;
    Cours tmpcours;
    scean tmpscean ;

    Ui::Ramzi *ui;
};

#endif // RAMZI_H
