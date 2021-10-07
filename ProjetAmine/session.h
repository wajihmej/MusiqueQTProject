#ifndef SESSION_H
#define SESSION_H
#include <QString>
#include <QDateTime>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QtGui>
#include <QtSql>
#include <QtCore>


class session
{
public:
    session();
    session(int,QString,QString,QString,QDateTime,QDateTime);
    session(QString,QString,QString,QDateTime,QDateTime);

    bool ajouter();
    bool supprimer(int);
    bool modifier(QString,QString,QString,QDateTime,QDateTime,QString);

    QSqlQuery request(QString);

    QSqlQueryModel * afficherecherche(QString);
    QSqlQueryModel * triafficher(QString);
    QSqlQueryModel * afficher();
    QSqlQueryModel * remplircombosession();

private:
    int id;
    QString nom;
    QString prenom;
    QString type;
    QDateTime debut;
    QDateTime fin;
};

#endif // SESSION_H
