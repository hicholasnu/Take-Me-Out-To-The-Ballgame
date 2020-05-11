#ifndef STADIUMTOVISIT_H
#define STADIUMTOVISIT_H

#include <QObject>
#include <QString>

class StadiumToVisit : public QObject
{
public:
    StadiumToVisit();
    QString getOriginatedStadium();
    QString getDestinationStadium();
    int getDistance();
    void setOriginatedStadium(QString originatedStadium);
    void setDestinationStadium(QString destinationStadium);
    void setDistance(int distance);

private:
    QString originatedStadium;
    QString destinationStadium;
    int distance;
};

#endif // STADIUMTOVISIT_H
