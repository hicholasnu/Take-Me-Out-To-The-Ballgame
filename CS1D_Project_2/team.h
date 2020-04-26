#ifndef TEAM_H
#define TEAM_H

#include<QObject>
#include<QString>

class Team : public QObject
{
    Q_OBJECT
public:
    explicit Team(QObject *parent = nullptr);

    QString getStartTeam() const;

    void setStartTeam(const QString& name);

    QString getEndTeam() const;

    void setEndTeam(const QString& name);

    QString getDistance() const;

    void setDistance(QString distance);

private:
    QString startTeam;
    QString endTeam;
    QString distance;
};

#endif // TEAM_H
