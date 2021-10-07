#ifndef SESSIONINTER_H
#define SESSIONINTER_H

#include <QDialog>
#include "session.h"
namespace Ui {
class sessioninter;
}

class sessioninter : public QDialog
{
    Q_OBJECT

public:
    explicit sessioninter(QWidget *parent = nullptr);
    ~sessioninter();

private slots:
    void on_AjouterBouton_clicked();

    void on_comboBox_modif_currentIndexChanged(const QString &arg1);

    void on_ModifierBouton_clicked();

    void on_SupprimerBouton_clicked();

    void on_recherche_cursorPositionChanged(int arg1, int arg2);

    void on_comboBox_Tri_currentIndexChanged(const QString &arg1);

    void refresh();
    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_PDF_clicked();

private:
    session tmpsession;

    Ui::sessioninter *ui;
};

#endif // SESSIONINTER_H
