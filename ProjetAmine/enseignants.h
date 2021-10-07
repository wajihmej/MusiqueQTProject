#ifndef ENSEIGNANTS_H
#define ENSEIGNANTS_H

#include <QString>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QtGui>
#include <QtSql>
#include <QtCore>

class enseignants
{
public:
    enseignants();
    enseignants(int,QString,QString,int,QString,float);
    enseignants(QString,QString,int,QString,float);

    bool ajouter();
    bool supprimer(int);

    QSqlQueryModel * afficher();
    QSqlQueryModel * remplircomboens();
    QSqlQuery request(QString);
    bool modifier(QString,QString,QString,QString,QString,QString);

private:
    int id;
    QString nom;
    QString prenom;
    int tel;
    QString email;
    float salaire;
};

#endif // ENSEIGNANTS_H
