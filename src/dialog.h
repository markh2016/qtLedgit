#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtSerialPort>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_sliderRed_valueChanged(int value);
    void on_sliderBlue_valueChanged(int value);
    void on_sliderGreen_valueChanged(int value);
    void  updateRGB(QString command) ;
    void on_redButton_clicked();

    void on_greenButton_clicked();

    void on_blueButton_clicked();

private:
    Ui::Dialog *ui;
    QSerialPort *arduino;
    static const quint16 arduino_uno_vendor_id =  6790 ; //9025;
    static const quint16 arduino_uno_product_id = 29987 ; //1;
    QString arduino_port_name;
    bool arduino_is_available;
    bool isRedSlider ;
    bool isGreenSlider ;
    bool isBlueSlider ;
};

#endif // DIALOG_H
