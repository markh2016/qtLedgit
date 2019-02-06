#include "dialog.h"
#include "ui_dialog.h"

#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    arduino_is_available = false;
    setFixedSize(this->width(),this->height());
    // all sliders are enabled when application  starts
    isRedSlider =true ;
    isBlueSlider= true ;
    isGreenSlider =true ;
    arduino_port_name = "";
    arduino = new QSerialPort;


    qDebug() << "Number of available ports: " << QSerialPortInfo::availablePorts().length();
    foreach(const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()){
        qDebug() << "Has vendor ID: " << serialPortInfo.hasVendorIdentifier();
        if(serialPortInfo.hasVendorIdentifier()){
            qDebug() << "Vendor ID: " << serialPortInfo.vendorIdentifier();
        }
        qDebug() << "Has Product ID: " << serialPortInfo.hasProductIdentifier();
        if(serialPortInfo.hasProductIdentifier()){
            qDebug() << "Product ID: " << serialPortInfo.productIdentifier();
        }
    }


    foreach(const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()){
        if(serialPortInfo.hasVendorIdentifier() && serialPortInfo.hasProductIdentifier()){
            if(serialPortInfo.vendorIdentifier() == arduino_uno_vendor_id){
                if(serialPortInfo.productIdentifier() == arduino_uno_product_id){
                    arduino_port_name = serialPortInfo.portName();
                    arduino_is_available = true;
                }
            }
        }
    }

    if(arduino_is_available){
        // open and configure the serialport
        arduino->setPortName(arduino_port_name);
        arduino->open(QSerialPort::WriteOnly);
        arduino->setBaudRate(QSerialPort::Baud9600);
        arduino->setDataBits(QSerialPort::Data8);
        arduino->setParity(QSerialPort::NoParity);
        arduino->setStopBits(QSerialPort::OneStop);
        arduino->setFlowControl(QSerialPort::NoFlowControl);
    }else{
        // give error message if not available
        QMessageBox::warning(this, "Port error", "Couldn't find the Arduino!");
    }
}

Dialog::~Dialog()
{

    if(arduino->isOpen()){
        arduino->close();
    }
    delete ui;

}

void Dialog::on_sliderRed_valueChanged(int value)
{
 ui->lcdRed->display(QString("%1").arg(value));
 Dialog::updateRGB(QString("r%1").arg(value));
 qDebug() << "Red  output = " << value;
}

void Dialog::on_sliderBlue_valueChanged(int value)
{
     ui->lcdBlue->display(QString("%1").arg(value));
     Dialog::updateRGB(QString("b%1").arg(value));
     qDebug() << "Blue output = " << value;

}

void Dialog::on_sliderGreen_valueChanged(int value)
{
    ui->lcdGreen->display(QString("%1").arg(value));
    Dialog::updateRGB(QString("g%1").arg(value));
    qDebug() << "Green output = " << value;
}


void Dialog::updateRGB(QString command)
{
    if(arduino->isWritable()){
        arduino->write(command.toStdString().c_str());
    }else{
        qDebug() << "Couldn't write to serial!";
    }
}

void Dialog::on_redButton_clicked()
{

   if(isRedSlider==true)
   {    QPixmap mypix (":/Statusoff.png");
        ui->sliderRed->setValue(0);
        ui->sliderRed->setEnabled(false);
        ui->RledLabel->setPixmap(mypix);
        isRedSlider =false ;

   }
   else {
       ui->sliderRed->setEnabled(true);
       QPixmap mypix (":/Statuson.png");
       ui->RledLabel->setPixmap(mypix);
       ui->sliderRed->setValue(120);
       isRedSlider =true ;
   }

}

void Dialog::on_greenButton_clicked()
{
    if(isGreenSlider==true)
    {    QPixmap mypix (":/Statusoff.png");
         ui->sliderGreen->setValue(0);
         ui->sliderGreen->setEnabled(false);
         ui->GledLabel->setPixmap(mypix);
         isGreenSlider =false ;

    }
    else {
        QPixmap mypix (":/Statuson.png");
        ui->sliderGreen->setEnabled(true);

        ui->GledLabel->setPixmap(mypix);
        ui->sliderGreen->setValue(120);
        isGreenSlider =true ;
    }
}

void Dialog::on_blueButton_clicked()
{
    if(isBlueSlider==true)
    {    QPixmap mypix (":/Statusoff.png");
         ui->sliderBlue->setValue(0);
         ui->sliderBlue->setEnabled(false);
         ui->BledLabel->setPixmap(mypix);
         isBlueSlider =false ;

    }
    else {
        QPixmap mypix (":/Statuson.png");
        ui->sliderBlue->setEnabled(true);


        ui->sliderBlue->setValue(120);
        ui->BledLabel->setPixmap(mypix);
        isBlueSlider =true ;
    }

}
