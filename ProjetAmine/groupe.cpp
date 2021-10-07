#include "groupe.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
#include <QPrinter>
#include <QFileDialog>
#include <QTextDocument>


groupe::groupe()
{
    id=0;
    niveau="";
    type=0;


}
groupe::groupe(int i,QString n,int p)
{
    id=i;
    niveau=n;
    type=p;


}
bool groupe::ajouter_groupe()
{
    QSqlQuery query;
    QString id_string=QString::number(id);
    QString type_string=QString::number(type);
    query.prepare("INSERT INTO GROUPE (ID, NIVEAU, TYPE)"
                  "VALUES(:id, :niveau, :type)");

    query.bindValue(":id",id_string);
    query.bindValue(":niveau",niveau);
    query.bindValue(":type",type_string);


    return query.exec();
}

QSqlQueryModel * groupe::afficher_groupe()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from GROUPE");
    model->setHeaderData(0,Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal, QObject::tr("NIVEAU"));
    model->setHeaderData(2,Qt::Horizontal, QObject::tr("TYPE"));


    return model;
}


bool groupe::supprimer_groupe(int id)
{
    QSqlQuery query;
    QString rest=QString::number(id);
    query.prepare("delete from GROUPE where id= :id");
    query.bindValue(":id",rest);
    return query.exec();

}

bool groupe::modifier_groupe(int id)
{
    QSqlQuery query;
    QString res=QString::number(id);
    query.prepare("Update GROUPE set id= :id ,NIVEAU = :niveau ,TYPE= :type where id= :id ");
    query.bindValue(":id", res);
    query.bindValue(":niveau",niveau);
    query.bindValue(":type",type);

    return query.exec();

}
QSqlQueryModel *groupe::triercroi() //ml A-Z NOM
{
    QSqlQuery * q = new  QSqlQuery ();
           QSqlQueryModel * model = new  QSqlQueryModel ();
           q->prepare("SELECT * FROM GROUPE order by NIVEAU ASC");
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
QSqlQueryModel *groupe::trierdec() //ml Z-A NOM
{
    QSqlQuery * q = new  QSqlQuery ();
           QSqlQueryModel * model = new  QSqlQueryModel ();
           q->prepare("SELECT * FROM GROUPE order by NIVEAU DESC");
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
QSqlQueryModel *groupe::recherche(QString id)
  {
      QSqlQueryModel * model= new QSqlQueryModel();
      model->setQuery("select * from GROUPE where id LIKE '"+id+"%' or NIVEAU LIKE '"+id+"%' or TYPE LIKE '"+id+"%'");


      model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("NIVEAU"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("TYPE"));

  return model;
      }

