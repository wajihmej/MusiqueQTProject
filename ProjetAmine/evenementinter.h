#ifndef EVENEMENTINTER_H
#define EVENEMENTINTER_H
#include "evenement.h"
#include "smtp.h"

#include <QDialog>

namespace Ui {
class EvenementInter;
}

class EvenementInter : public QDialog
{
    Q_OBJECT

public:
    explicit EvenementInter(QWidget *parent = nullptr);
    ~EvenementInter();

private slots:
    void on_AjouterBouton_clicked();

    void on_SupprimerBouton_clicked();

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_ModifierBouton_clicked();

    void on_comboBox_modif_currentIndexChanged(const QString &arg1);

    void refresh();

    void on_comboBox_Tri_currentIndexChanged(const QString &arg1);

    void on_recherche_cursorPositionChanged(int arg1, int arg2);

    void sendMail();
    void mailSent(QString);

    void on_recherche_desc_cursorPositionChanged(int arg1, int arg2);

    void on_recherche_emp_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::EvenementInter *ui;
    Evenement tmpevent;

    QSqlTableModel * model;

};

#endif // EVENEMENTINTER_H
