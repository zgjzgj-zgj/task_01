#ifndef QWIDGETSERIALTX_H
#define QWIDGETSERIALTX_H



#include <QtSerialPort/QSerialPort>
#include <QWidget>
#include <QTimer>

class QWidgetSerialTx : public QWidget
{
    Q_OBJECT
public:
    int index1 = -1;
    int index2 = -1;
    int index3 = -1;
    QSerialPort *com;
    QTimer *timer;
    explicit QWidgetSerialTx(QWidget *parent = nullptr);

    int serialInit(void);
    void serialTx();
    unsigned int getEcg2Data(void);
    unsigned int getSpo2Data(void);
    unsigned int getIbp2Data(void);

signals:

};

#endif // QWIDGETSERIALTX_H
