#ifndef ADMININTERFACE_H
#define ADMININTERFACE_H

#include <QDialog>
#include "enseignants.h"
#include "administrateurs.h"
#include "smtp.h"

namespace Ui {
class admininterface;
}

class admininterface : public QDialog
{
    Q_OBJECT

public:
    explicit admininterface(QWidget *parent = nullptr);
    ~admininterface();

private slots:
    void on_btn_ajouter_admin_clicked();

    void refreshAdmin();

    void refreshEns();

    void on_modifier_admin_clicked();

    void on_suprimer_admin_clicked();

    void on_recherche_cursorPositionChanged(int arg1, int arg2);

    void on_comboBox_admin_modif_currentIndexChanged(const QString &arg1);

    void on_comboBox_admin_supp_currentIndexChanged(const QString &arg1);

    void sendMail();
    void mailSent(QString);

    void on_comboBox_admin_tri_currentIndexChanged(const QString &arg1);

    void on_btn_ajouter_ens_clicked();

    void on_comboBox_ens_modif_currentIndexChanged(const QString &arg1);

    void on_comboBox_ens_supp_currentIndexChanged(const QString &arg1);

    void on_modifer_ens_btn_clicked();

    void on_supprime_ens_btn_clicked();

private:
    administrateurs tmpadmin;
    enseignants tmpens;
    Ui::admininterface *ui;
};

#endif // ADMININTERFACE_H
