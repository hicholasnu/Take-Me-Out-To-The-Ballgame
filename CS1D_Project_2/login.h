#ifndef LOGIN_H
#define LOGIN_H

#include <QObject>
#include <QString>
#include <QCryptographicHash>

class Login : public QObject
{
    Q_OBJECT

public:
    explicit Login(QObject *parent = nullptr);

    QString getUsername() const;

    void setUsername(const QString & username);

    QString getPassword() const;

    void setPassword(const QString &password);

signals:
    void usernameChanged();
    void passwordChanged();

private:
    QString username;
    QString password;
};

#endif // LOGIN_H
