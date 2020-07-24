#ifndef QWIDGETSERIALRX_H
#define QWIDGETSERIALRX_H

#include <QtSerialPort/QSerialPort>
#include <QWidget>

class QWidgetSerialRx: public QWidget
{
    Q_OBJECT
public:
    QSerialPort *com;
    char status = 0;
    char pkgDataCnt;
    char pkgDataHead;
    unsigned char pkgData[7];
    unsigned char pkgData1[2];
    unsigned char pkgData2[2];
    char pkgDataCrc;
    int ecg1,ecg2,ecg3,spo2,ibp2;
    int ecgData[3];

    QWidgetSerialRx(QWidget *parent = nullptr);
    int serialInit(void);
    void serialRx(void);
    void rxDataHandle(unsigned char data);


signals:
    void rxDataSignal(int data);
    void rxDataSignal1(int data);
    void rxDataSignal2(int data);

};

#endif // QWIDGETSERIALRX_H
