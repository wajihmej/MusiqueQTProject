#ifndef GROUPE_H
#define GROUPE_H
#include <QString>
#include <QWidget>
#include <QSqlQuery>
#include <QSqlQueryModel>

class groupe
{
public:
    groupe();
   groupe(int,QString,int);
    bool ajouter_groupe();
    QSqlQueryModel * afficher_groupe();
    bool supprimer_groupe(int);
    bool modifier_groupe(int);
    QSqlQueryModel* recherche(QString);
    QSqlQueryModel * triercroi();
    QSqlQueryModel * trierdec();

    void CREATION_PDF();

    int getid();
    QString getgroupe();
    int gettype();
    void setid(int);
    void setniveau(QString);
    void settype(int);
    ;
    private:
        int id,type;
        QString niveau;
};

#endif // GROUPE_H
