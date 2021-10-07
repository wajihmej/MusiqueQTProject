#ifndef PERMISCONSTR_H
#define PERMISCONSTR_H
#include <QString>
#include <QWidget>
#include <QSqlQuery>
#include <QSqlQueryModel>


class adherent
{
public:
    adherent();
    adherent(int,QString,QString,QString,QString);
    bool ajouter_adherent();
    QSqlQueryModel * afficher_adherent();
    bool supprimer_adherent(int);
    bool modifier_adherent(int);
    QSqlQueryModel* recherche(QString);
    QSqlQueryModel * triercroi();
    QSqlQueryModel * trierdec();

    void CREATION_PDF();

    int getid();
    QString getnom();
    QString getprenom();
    QString gettel();
    QString getemail();
    void setid(int);
    void setnom(QString);
    void setprenom(QString);
    void settel(QString);
    void setemail(QString);
    private:
        int id;
        QString nom,prenom,tel,email;
};


#endif // ADHERENT_H
