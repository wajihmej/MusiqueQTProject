#ifndef COURS_H
#define COURS_H
#include <QString>
#include <QSqlQueryModel>
class Cours
{
public:
    Cours();
   Cours(int,QString,QString);
    int getid();
    QString getnom();
    QString getprenom();
    void setid(int);
    void setnom(QString);
    void setprenom(QString);
    bool ajouter();
    QSqlQueryModel * afficher();
    QSqlQueryModel * afficherID() ;
    QSqlQueryModel *  trierr(const QString &critere, const QString &mode );
    bool  supprimer(int);
    bool modifier(int);
private:
 int id;
 QString nom,prenom;
};

#endif // COURS_H
