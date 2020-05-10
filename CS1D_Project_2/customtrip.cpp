#include "customtrip.h"

customTrip::customTrip()
{

}
QVector<QString> customTrip::getPath()
{

}

void customTrip::setMatrix(int m[][30], QString cits[])
{
    d_dij.intialize(cits);
    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            mat[i][j] = m[i][j];
        }
    }
}
void customTrip::pathPlanner(QString str, int c)
{
    QStringList items;
    QString tt;
    QSqlQuery qry;
    Edge temp;
    start = str;
    int index = d_dij.getIndex(start);

    d_dij.dijkstra(mat,index);

    QVector<Edge> endPath = d_dij.getPath();

    if (customPath.size() == c)
    {
        return;
    }

    qry.exec("select * from Stadiums");
    while(qry.next())
    {
        tt = qry.value(0).toString();
        items << tt;
    }
    qry.finish();

    // reset Dodger DB
    qry.prepare("DELETE FROM Dodger");
    qry.exec();

    qry.prepare("INSERT INTO Dodger (Start, End, Distance) "
                 "VALUES (:Start, :End, :Distance)");

    // used to insert path into DB
    for (int i = 0; i < endPath.size(); i++)
    {
        qry.bindValue(":Start", endPath.at(i).str);
        qry.bindValue(":End", endPath.at(i).end);
        qry.bindValue(":Distance", endPath.at(i).weight);
        qry.exec();
    }
    qry.clear();

    qDebug() << "testing custom trip";
    for (int i = 0; i < endPath.size(); i++)
    qDebug() << endPath.at(i).str << " " << endPath.at(i).end << " " << endPath.at(i).weight;




}
