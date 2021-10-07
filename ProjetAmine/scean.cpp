#include "scean.h"

#include <QSqlQuery>
#include <QtDebug>
#include <QString>
#include <QObject>

scean::scean()
{
ids=0;
date="";
duree="";

}

QSqlQueryModel * scean::afficherIDS(){
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select ids from sceance");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    return model;
}




scean::scean(int ids,QString date,QString duree)
{this->ids=ids; this->date=date;this->duree=duree;}
int scean::getids(){return ids;}
QString scean::getdate(){return date;}
QString  scean::getduree(){return duree;}
void scean::setids(int ids){this->ids=ids;}
void scean::setdate(QString date) {this->date=date;}
void scean::setduree(QString duree){this->duree=duree;}




bool scean:: ajouter_sceance()
{
    QString id_string= QString::number(ids);


QSqlQuery query;
query.prepare("INSERT INTO sceance (ids, datee, duree) "
              "VALUES (:id, :forename, :surname)");
// bindvalue vafaire le correspondence entre le nom de la variable et la zone saisie par l'utillisateur
query.bindValue(0,id_string);
query.bindValue(1, date);
query.bindValue(2, duree);
 return query.exec();


}
bool scean::supprimer_seance(int ids){
    QSqlQuery query;
    query.prepare(" delete from sceance where ids=:ids");
    // bindvalue vafaire le correspondence entre le nom de la variable et la zone saisie par l'utillisateur
    query.bindValue(0,ids);


     return query.exec();



}
bool scean::modifier_sceance(int ids){
    QSqlQuery query;
    QString id_string= QString::number(ids);

    query.prepare("Update sceance set ids=:ids,datee=:datee,duree=:duree where ids=:ids");

    query.bindValue(":ids",id_string);
      query.bindValue(":datee",date);
      query.bindValue(":duree",duree);
      return query.exec();

}





QSqlQueryModel * scean::affichersceance()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM sceance");
    model->setHeaderData(0, Qt::Horizontal,QObject:: tr("ids"));
    model->setHeaderData(1, Qt::Horizontal,QObject:: tr("datee"));
    model->setHeaderData(2, Qt::Horizontal,QObject:: tr("duree"));
    return model;
}

QSqlQueryModel* scean::rechercherdynamique(QString input,QString filter)
{
    QSqlQueryModel * model= new QSqlQueryModel ();
       QSqlQuery query;
       query.prepare("SELECT *FROM sceance WHERE "+filter+" LIKE '%' || :inputValue || '%' ");
       query.bindValue(":inputValue",input);
       query.exec();
       model->setQuery(query);
       return model;
}
QSqlQueryModel * scean::affichersceancetrie(QString x)
{
    QSqlQueryModel* model=new QSqlQueryModel();

       if(x=="id")
       {
       model->setQuery("SELECT * FROM sceance order by ids ");
       model->setHeaderData(0, Qt::Horizontal,QObject:: tr("ids"));
       model->setHeaderData(1, Qt::Horizontal,QObject:: tr("datee"));
       model->setHeaderData(2, Qt::Horizontal,QObject:: tr("duree"));
       }else if(x=="id decroissant")
       {
           model->setQuery("SELECT * FROM sceance order by ids desc ");
           model->setHeaderData(0, Qt::Horizontal,QObject:: tr("ids"));
           model->setHeaderData(1, Qt::Horizontal,QObject:: tr("datee"));
           model->setHeaderData(2, Qt::Horizontal,QObject:: tr("duree"));
       }else if (x=="duree")
       {
           model->setQuery("SELECT * FROM sceance order by duree  ");
           model->setHeaderData(0, Qt::Horizontal,QObject:: tr("ids"));
           model->setHeaderData(1, Qt::Horizontal,QObject:: tr("datee"));
           model->setHeaderData(2, Qt::Horizontal,QObject:: tr("duree"));
       }else if(x=="duree dec")
       {
           model->setQuery("SELECT * FROM sceance order by duree desc ");
           model->setHeaderData(0, Qt::Horizontal,QObject:: tr("ids"));
           model->setHeaderData(1, Qt::Horizontal,QObject:: tr("datee"));
           model->setHeaderData(2, Qt::Horizontal,QObject:: tr("duree"));
       }
       return  model;
}



/*QChartView * client::stat()
{
        QPieSeries *series = new QPieSeries();

        QSqlQuery query,query2;
        query.prepare("select nationalite from client");
        query.exec();
        int i;
        int nb=0;
        int nbt=0;
        QVector <QString> nationalite;
        QVector <QPieSlice *> slicee ;
        qDebug()<<nationalite.length();
        int c=0;
        int verif=1;
         while(query.next())
              {
                for(i=0;i<nationalite.length();i++){
                        if(nationalite.at(i)==query.value(0).toString()){
                                verif=0;
                }
                }
                if(i>=nationalite.length()){
                        if (verif==1)
                    nationalite.push_back(query.value(0).toString());
                  }
                verif=1;
                c++;
               }
                for(int k=0;k<nationalite.length();k++){
                     query2.prepare("select nationalite from client where nationalite like :val");
                     query2.bindValue(":val",nationalite.at(k));
                    query2.exec();
                    while(query2.next()){
                        nb++;
                 }
                series->append(nationalite.at(k),nb);
                nb=0;
                query2.clear();
                    slicee.push_back(series->slices().at(k));
                    slicee.at(k)->setLabelVisible();
                }
        // Add label to 1st slice
        // Create the chart widget
        QChart *chart = new QChart();

        // Add data to chart with title and hide legend
        chart->addSeries(series);
        chart->setTitle("Nationalite");
        chart->legend()->hide();

        // Used to display the chart
        QChartView *chartView = new QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing);

     return chartView;
}*/

QChartView * scean::stat()
{


        // Assign names to the set of bars used
        QBarSet *set0 = new QBarSet("duree");

        QVector <QString> duree;

        // Assign values for each bar

        QSqlQuery query,query2;
        query.prepare("select * from sceance");
        query.exec();
        QStringList categories;
        while(query.next())
          {

            categories <<query.value(0).toString();
             *set0 << query.value(2).toInt();
          }

       // *set0 << 283 << 341 << 313 << 338 << 346 << 335;




        // Add all sets of data to the chart as a whole
        // 1. Bar Chart
        QBarSeries *series = new QBarSeries();

        // 2. Stacked bar chart
        // QHorizontalStackedBarSeries *series = new QHorizontalStackedBarSeries();
        series->append(set0);


        // Used to define the bar chart to display, title
        // legend,
        QChart *chart = new QChart();

        // Add the chart
        chart->addSeries(series);

        // Set title
        chart->setTitle("Seance avg by duree");

        // Define starting animation
        // NoAnimation, GridAxisAnimations, SeriesAnimations
        chart->setAnimationOptions(QChart::AllAnimations);

        // Holds the category titles


        // Adds categories to the axes
        QBarCategoryAxis *axis = new QBarCategoryAxis();
        axis->append(categories);
        chart->createDefaultAxes();

        // 1. Bar chart
        chart->setAxisX(axis, series);

        // 2. Stacked Bar chart
        // chart->setAxisY(axis, series);

        // Define where the legend is displayed
        chart->legend()->setVisible(true);
        chart->legend()->setAlignment(Qt::AlignBottom);

        // Used to display the chart
        QChartView *chartView = new QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing);




        chartView->setRenderHint(QPainter::Antialiasing);


       return chartView;


}
