#include "stadiumtovisit.h"

StadiumToVisit::StadiumToVisit()
{

}

QString StadiumToVisit::getOriginatedStadium() {

    return originatedStadium;
}

QString StadiumToVisit::getDestinationStadium() {

    return destinationStadium;
}

int StadiumToVisit::getDistance() {

    return distance;
}

void StadiumToVisit::setOriginatedStadium(QString originatedStadium) {

    this->originatedStadium = originatedStadium;
}

void StadiumToVisit::setDestinationStadium(QString destinationStadium) {

    this->destinationStadium = destinationStadium;
}

void StadiumToVisit::setDistance(int distance) {

    this->distance = distance;
}
