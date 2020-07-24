#ifndef LOGIN_H
#define LOGIN_H

#include<QDialog>
#include<QLabel>
#include<QLineEdit>
#include<QPushButton>
#include <QTimer>
#include <QTcpSocket>


class login : public QDialog
{
    Q_OBJECT
public:
   explicit login(QDialog *parent = 0);

signals:
public slots:
    void login1();
    void tcpreadyread();
    void reconnect();

private:
    QLabel *username;
    QLabel *password;
    QLineEdit *usernameed;
    QLineEdit *passworded;
    QPushButton *loginbtn;
    QTimer *mTimer;
//    QTimer *mTimer1;
    QTcpSocket *mSocket;
//    int count;

};

#endif // LOGIN_H
