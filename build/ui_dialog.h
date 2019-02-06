/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QFrame *mainFrame;
    QFrame *frameLcd;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *lcdRed;
    QLCDNumber *lcdGreen;
    QLCDNumber *lcdBlue;
    QFrame *frameSlider;
    QHBoxLayout *horizontalLayout_2;
    QSlider *sliderRed;
    QSlider *sliderGreen;
    QSlider *sliderBlue;
    QFrame *frameButtons;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *redButton;
    QPushButton *greenButton;
    QPushButton *blueButton;
    QLabel *redLabel;
    QLabel *greenLabel;
    QLabel *blueLabel;
    QLabel *RledLabel;
    QLabel *GledLabel;
    QLabel *BledLabel;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->setWindowModality(Qt::ApplicationModal);
        Dialog->resize(383, 608);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dialog->sizePolicy().hasHeightForWidth());
        Dialog->setSizePolicy(sizePolicy);
        Dialog->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);"));
        Dialog->setModal(false);
        mainFrame = new QFrame(Dialog);
        mainFrame->setObjectName(QString::fromUtf8("mainFrame"));
        mainFrame->setGeometry(QRect(10, 20, 361, 571));
        mainFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"border-radius:20"));
        mainFrame->setFrameShape(QFrame::WinPanel);
        mainFrame->setFrameShadow(QFrame::Sunken);
        frameLcd = new QFrame(mainFrame);
        frameLcd->setObjectName(QString::fromUtf8("frameLcd"));
        frameLcd->setGeometry(QRect(10, 130, 341, 71));
        frameLcd->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border-radius:20"));
        frameLcd->setFrameShape(QFrame::WinPanel);
        frameLcd->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frameLcd);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lcdRed = new QLCDNumber(frameLcd);
        lcdRed->setObjectName(QString::fromUtf8("lcdRed"));
        lcdRed->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.129353 rgba(238, 238, 236, 255), stop:0.99005 rgba(0, 0, 0, 255));\n"
"font: 14pt \"Ubuntu\";\n"
"color: rgb(255, 0, 0);\n"
"border-radius:4"));
        lcdRed->setDigitCount(3);

        horizontalLayout->addWidget(lcdRed);

        lcdGreen = new QLCDNumber(frameLcd);
        lcdGreen->setObjectName(QString::fromUtf8("lcdGreen"));
        lcdGreen->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.129353 rgba(238, 238, 236, 255), stop:0.99005 rgba(0, 0, 0, 255));\n"
"font: 14pt \"Ubuntu\";\n"
"color: rgb(0, 255, 0);\n"
"border-radius:4"));
        lcdGreen->setDigitCount(3);

        horizontalLayout->addWidget(lcdGreen);

        lcdBlue = new QLCDNumber(frameLcd);
        lcdBlue->setObjectName(QString::fromUtf8("lcdBlue"));
        lcdBlue->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.129353 rgba(238, 238, 236, 255), stop:0.99005 rgba(0, 0, 0, 255));\n"
"font: 14pt \"Ubuntu\";\n"
"color: rgb(3, 26, 252);\n"
"border-radius:4"));
        lcdBlue->setDigitCount(3);

        horizontalLayout->addWidget(lcdBlue);

        frameSlider = new QFrame(mainFrame);
        frameSlider->setObjectName(QString::fromUtf8("frameSlider"));
        frameSlider->setGeometry(QRect(10, 220, 341, 261));
        frameSlider->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border-radius:20"));
        frameSlider->setFrameShape(QFrame::WinPanel);
        frameSlider->setFrameShadow(QFrame::Sunken);
        horizontalLayout_2 = new QHBoxLayout(frameSlider);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        sliderRed = new QSlider(frameSlider);
        sliderRed->setObjectName(QString::fromUtf8("sliderRed"));
        sliderRed->setStyleSheet(QString::fromUtf8("background-color:qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(35, 40, 3, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.225 rgba(166, 140, 41, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.345 rgba(235, 219, 102, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.635 rgba(168, 142, 42, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:1 rgba(35, 40, 3, 255))"));
        sliderRed->setMaximum(255);
        sliderRed->setOrientation(Qt::Vertical);
        sliderRed->setTickPosition(QSlider::TicksBothSides);
        sliderRed->setTickInterval(20);

        horizontalLayout_2->addWidget(sliderRed);

        sliderGreen = new QSlider(frameSlider);
        sliderGreen->setObjectName(QString::fromUtf8("sliderGreen"));
        sliderGreen->setStyleSheet(QString::fromUtf8("background-color:qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(35, 40, 3, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.225 rgba(166, 140, 41, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.345 rgba(235, 219, 102, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.635 rgba(168, 142, 42, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:1 rgba(35, 40, 3, 255))"));
        sliderGreen->setMaximum(255);
        sliderGreen->setOrientation(Qt::Vertical);
        sliderGreen->setTickPosition(QSlider::TicksBothSides);
        sliderGreen->setTickInterval(20);

        horizontalLayout_2->addWidget(sliderGreen);

        sliderBlue = new QSlider(frameSlider);
        sliderBlue->setObjectName(QString::fromUtf8("sliderBlue"));
        sliderBlue->setStyleSheet(QString::fromUtf8("background-color:qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(35, 40, 3, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.225 rgba(166, 140, 41, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.345 rgba(235, 219, 102, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.635 rgba(168, 142, 42, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:1 rgba(35, 40, 3, 255))"));
        sliderBlue->setMaximum(255);
        sliderBlue->setOrientation(Qt::Vertical);
        sliderBlue->setTickPosition(QSlider::TicksBothSides);
        sliderBlue->setTickInterval(20);

        horizontalLayout_2->addWidget(sliderBlue);

        frameButtons = new QFrame(mainFrame);
        frameButtons->setObjectName(QString::fromUtf8("frameButtons"));
        frameButtons->setGeometry(QRect(10, 490, 341, 61));
        frameButtons->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border-radius:20"));
        frameButtons->setFrameShape(QFrame::StyledPanel);
        frameButtons->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frameButtons);
        horizontalLayout_3->setSpacing(8);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(8, 8, 8, 8);
        redButton = new QPushButton(frameButtons);
        redButton->setObjectName(QString::fromUtf8("redButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(redButton->sizePolicy().hasHeightForWidth());
        redButton->setSizePolicy(sizePolicy1);
        redButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(204, 0, 0);\n"
"font: 57 14pt \"Ubuntu\";\n"
"border-radius:20"));

        horizontalLayout_3->addWidget(redButton);

        greenButton = new QPushButton(frameButtons);
        greenButton->setObjectName(QString::fromUtf8("greenButton"));
        sizePolicy1.setHeightForWidth(greenButton->sizePolicy().hasHeightForWidth());
        greenButton->setSizePolicy(sizePolicy1);
        greenButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(8, 120, 4);\n"
"font: 57 14pt \"Ubuntu\";\n"
"border-radius:20"));

        horizontalLayout_3->addWidget(greenButton);

        blueButton = new QPushButton(frameButtons);
        blueButton->setObjectName(QString::fromUtf8("blueButton"));
        sizePolicy1.setHeightForWidth(blueButton->sizePolicy().hasHeightForWidth());
        blueButton->setSizePolicy(sizePolicy1);
        blueButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(3, 26, 252);\n"
"font: 57 14pt \"Ubuntu\";\n"
"border-radius:20"));

        horizontalLayout_3->addWidget(blueButton);

        redLabel = new QLabel(mainFrame);
        redLabel->setObjectName(QString::fromUtf8("redLabel"));
        redLabel->setGeometry(QRect(20, 10, 101, 21));
        greenLabel = new QLabel(mainFrame);
        greenLabel->setObjectName(QString::fromUtf8("greenLabel"));
        greenLabel->setGeometry(QRect(130, 10, 101, 21));
        blueLabel = new QLabel(mainFrame);
        blueLabel->setObjectName(QString::fromUtf8("blueLabel"));
        blueLabel->setGeometry(QRect(250, 10, 91, 21));
        RledLabel = new QLabel(mainFrame);
        RledLabel->setObjectName(QString::fromUtf8("RledLabel"));
        RledLabel->setGeometry(QRect(20, 40, 81, 81));
        RledLabel->setPixmap(QPixmap(QString::fromUtf8(":/Statuson.png")));
        RledLabel->setScaledContents(true);
        GledLabel = new QLabel(mainFrame);
        GledLabel->setObjectName(QString::fromUtf8("GledLabel"));
        GledLabel->setGeometry(QRect(130, 40, 81, 81));
        GledLabel->setPixmap(QPixmap(QString::fromUtf8(":/Statuson.png")));
        GledLabel->setScaledContents(true);
        BledLabel = new QLabel(mainFrame);
        BledLabel->setObjectName(QString::fromUtf8("BledLabel"));
        BledLabel->setGeometry(QRect(250, 40, 81, 81));
        BledLabel->setPixmap(QPixmap(QString::fromUtf8(":/Statuson.png")));
        BledLabel->setScaledContents(true);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Arduino Led Control MD Harrington", nullptr));
        redButton->setText(QApplication::translate("Dialog", "Red ", nullptr));
        greenButton->setText(QApplication::translate("Dialog", "Green", nullptr));
        blueButton->setText(QApplication::translate("Dialog", "Blue", nullptr));
        redLabel->setText(QApplication::translate("Dialog", "Red Status", nullptr));
        greenLabel->setText(QApplication::translate("Dialog", "Green Status", nullptr));
        blueLabel->setText(QApplication::translate("Dialog", "Blue Status", nullptr));
        RledLabel->setText(QString());
        GledLabel->setText(QString());
        BledLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
