#ifndef EVENEMENT_H
#define EVENEMENT_H
#include <QString>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QtGui>
#include <QtSql>
#include <QtCore>

class Evenement
{
public:
    Evenement();
    Evenement(QString,QString,QString,QDate);
    Evenement(int,QString,QString,QString,QDate);
    int get_Id();
    QString get_Nom();
    QString get_Description();
    QString get_Emplacement();
    QDate get_Dateevent();

    bool ajouter();
    bool supprimer(int);

    QSqlQueryModel * afficherecherche(QString);
    QSqlQueryModel * afficherecherche_desc(QString);
    QSqlQueryModel * afficherecherche_emp(QString);
    QSqlQueryModel * triafficher(QString);
    QSqlQueryModel * afficher();
    QSqlQueryModel * remplircomboevent();
    QSqlQuery request(QString);
    bool modifier(QString,QString,QDate,QString,QString);


private:
int id;
QString nom;
QString description;
QString emplacement;
QDate dateevent;

};

#endif // EVENEMENT_H
