#ifndef ADMINISTRATEURS_H
#define ADMINISTRATEURS_H
#include <QString>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QtGui>
#include <QtSql>
#include <QtCore>


class administrateurs
{
public:
    administrateurs();
    administrateurs(int,QString,QString,QString);
    administrateurs(QString,QString,QString);

    bool ajouter();
    bool supprimer(int);

    QSqlQueryModel * afficherecherche(QString);
    QSqlQueryModel * triafficher(QString);
    QSqlQueryModel * afficher();
    QSqlQueryModel * remplircomboadmin();
    QSqlQuery request(QString);
    bool modifier(QString,QString,QString,QString);

    QSqlQuery login(QString,QString);

private:
    int id;
    QString nomutil;
    QString mdp;
    QString role;
};

#endif // ADMINISTRATEURS_H
