#ifndef CUSTOMTRIP_H
#define CUSTOMTRIP_H

#include <QVector>
#include <QString>
#include <QWidget>
#include <QMessageBox>
#include <QInputDialog>
#include "dijkstra.h"
#include "controller.h"

class customTrip
{
public:
    customTrip();
    void setMatrix(int m[][30], QString cits[]);
    QVector<QString> getPath();
    void pathPlanner(QString str, int c);

private:
    Controller *m_controller;
    Dijkstra d_dij;
    QString start;
    int mat[30][30];
    QVector<Edge> customPath;
};

#endif // CUSTOMTRIP_H
