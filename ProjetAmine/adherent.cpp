#include "adherent.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
#include <QPrinter>
#include <QFileDialog>
#include <QTextDocument>


adherent::adherent()
{
    id=0;
    nom="";
    prenom="";
    tel="";
    email="";


}
adherent::adherent(int i,QString n,QString p,QString t,QString e)
{
    id=i;
    nom=n;
    prenom=p;
    tel=t;
    email=e;

}
bool adherent::ajouter_adherent()
{
    QSqlQuery query;
    QString id_string=QString::number(id);
    query.prepare("INSERT INTO adherent (ID, NOM, PRENOM,TEL,EMAIL)"
                  "VALUES(:id, :nom, :prenom, :tel, :email)");

    query.bindValue(":id",id_string);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":tel",tel);
    query.bindValue(":email",email);

    return query.exec();
}
QSqlQueryModel * adherent::afficher_adherent()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from Adherent");
    model->setHeaderData(0,Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2,Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(2,Qt::Horizontal, QObject::tr("TEL"));
    model->setHeaderData(2,Qt::Horizontal, QObject::tr("EMAIL"));

    return model;
}


bool adherent::supprimer_adherent(int id)
{
    QSqlQuery query;
    QString rest=QString::number(id);
    query.prepare("delete from ADHERENT where id= :id");
    query.bindValue(":id",rest);
    return query.exec();

}

bool adherent::modifier_adherent(int id)
{
    QSqlQuery query;
    QString res=QString::number(id);
    query.prepare("Update ADHERENT set id= :id , NOM = :nom , PRENOM = :prenom , TEL=:tel ,EMAIL=:email where id= :id ");
    query.bindValue(":id", res);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":tel",tel);
    query.bindValue(":email",email);
    return query.exec();

}
QSqlQueryModel *adherent::recherche(QString id)
  {
      QSqlQueryModel * model= new QSqlQueryModel();
      model->setQuery("select * from ADHERENT where id LIKE '"+id+"%' or nom LIKE '"+id+"%' or prenom LIKE '"+id+"%'");


      model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));

  return model;
      }
QSqlQueryModel *adherent::triercroi() //ml A-Z NOM
{
    QSqlQuery * q = new  QSqlQuery ();
           QSqlQueryModel * model = new  QSqlQueryModel ();
           q->prepare("SELECT * FROM adherent order by NOM ASC");
           q->exec();
           model->setQuery(*q);
           return model;
     //ml kbir l sghir
       /*    QSqlQuery * q = new  QSqlQuery ();
                  QSqlQueryModel * model = new  QSqlQueryModel ();
                  q->prepare("SELECT * FROM certifdeces order by codepostale DESC");
                  q->exec();
                  model->setQuery(*q);
                  return model;*/
}
QSqlQueryModel *adherent::trierdec() //ml Z-A NOM
{
    QSqlQuery * q = new  QSqlQuery ();
           QSqlQueryModel * model = new  QSqlQueryModel ();
           q->prepare("SELECT * FROM adherent order by NOM DESC");
           q->exec();
           model->setQuery(*q);
           return model;
     //ml kbir l sghir
       /*    QSqlQuery * q = new  QSqlQuery ();
                  QSqlQueryModel * model = new  QSqlQueryModel ();
                  q->prepare("SELECT * FROM certifdeces order by codepostale DESC");
                  q->exec();
                  model->setQuery(*q);
                  return model;*/
}


