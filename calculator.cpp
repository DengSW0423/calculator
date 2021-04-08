#include "calculator.h"

#include <QGridLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QSizePolicy>
#include <QDebug>

Calculator::Calculator(QWidget *parent)
    : QWidget(parent)
{
    layout();
    connectAllButtons();

}

void Calculator::layout(){

    this->setFixedSize(600, 400);

    QString s = "789+456-123*.0=/";
    QSizePolicy sizePolicy = QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    QVBoxLayout *vbox = new QVBoxLayout(this);
    QGridLayout *grid = new QGridLayout;
    QHBoxLayout *hbox = new QHBoxLayout;

    lineEdit = new QLineEdit;
    pushButtons[16] = new QPushButton("Backspace");
    pushButtons[17] = new QPushButton("Clear");
    pushButtons[16]->setFixedHeight(50);
    pushButtons[17]->setFixedHeight(50);

    hbox->addWidget(lineEdit);
    hbox->addWidget(pushButtons[16]);
    hbox->addWidget(pushButtons[17]);
    vbox->addLayout(hbox);

    for (int i = 0; i < 16; ++i) {
        pushButtons[i] = new QPushButton;
        pushButtons[i]->setText(s.at(i));
    }

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            grid->addWidget(pushButtons[i * 4 + j], i, j, 1, 1);
            pushButtons[i * 4 + j]->setText(s.at(i * 4 + j));
            pushButtons[i * 4 + j]->setSizePolicy(sizePolicy);
        }
    }

    vbox->addLayout(grid);
    this->setLayout(vbox);
}

void Calculator::connectAllButtons(){
    connect(pushButtons[0], &QPushButton::clicked, this, &Calculator::btnSevenClicked);
    connect(pushButtons[1], &QPushButton::clicked, this, &Calculator::btnEightClicked);
    connect(pushButtons[2], &QPushButton::clicked, this, &Calculator::btnNineClicked);
    connect(pushButtons[3], &QPushButton::clicked, this, &Calculator::btnAddClicked);
    connect(pushButtons[4], &QPushButton::clicked, this, &Calculator::btnFourClicked);
    connect(pushButtons[5], &QPushButton::clicked, this, &Calculator::btnFiveClicked);
    connect(pushButtons[6], &QPushButton::clicked, this, &Calculator::btnSixClicked);
    connect(pushButtons[7], &QPushButton::clicked, this, &Calculator::btnMinusClicked);
    connect(pushButtons[8], &QPushButton::clicked, this, &Calculator::btnOneClicked);
    connect(pushButtons[9], &QPushButton::clicked, this, &Calculator::btnTwoClicked);
    connect(pushButtons[10], &QPushButton::clicked, this, &Calculator::btnThreeClicked);
    connect(pushButtons[11], &QPushButton::clicked, this, &Calculator::btnMultiplyClicked);
    connect(pushButtons[12], &QPushButton::clicked, this, &Calculator::btnPointClicked);
    connect(pushButtons[13], &QPushButton::clicked, this, &Calculator::btnZeroClicked);
    connect(pushButtons[14], &QPushButton::clicked, this, &Calculator::btnEqualClicked);
    connect(pushButtons[15], &QPushButton::clicked, this, &Calculator::btnDivideClicked);
    connect(pushButtons[16], &QPushButton::clicked, this, &Calculator::btnBackspaceClicked);
    connect(pushButtons[17], &QPushButton::clicked, this, &Calculator::btnClearClicked);
}

void Calculator::btnZeroClicked()
{
    text += "0";
    lineEdit->setText(text);

}

void Calculator::btnOneClicked()
{
    text += "1";
    lineEdit->setText(text);
}

void Calculator::btnTwoClicked()
{
    text += "2";
    lineEdit->setText(text);
}

void Calculator::btnThreeClicked()
{
    text += "3";
    lineEdit->setText(text);
}

void Calculator::btnFourClicked()
{
    text += "4";
    lineEdit->setText(text);
}

void Calculator::btnFiveClicked()
{
    text += "5";
    lineEdit->setText(text);
}

void Calculator::btnSixClicked()
{
   text += "6";
   lineEdit->setText(text);
}

void Calculator::btnSevenClicked()
{
    text += "7";
    lineEdit->setText(text);
}

void Calculator::btnEightClicked()
{
    text += "8";
    lineEdit->setText(text);
}

void Calculator::btnNineClicked()
{
    text += "9";
    lineEdit->setText(text);
}

void Calculator::btnPointClicked()
{
    text += ".";
    lineEdit->setText(text);
}

void Calculator::btnEqualClicked()
{
    text += "=";
    lineEdit->setText(text);
}

void Calculator::btnClearClicked()
{
    text = "";
    lineEdit->setText(text);
}

void Calculator::btnBackspaceClicked()
{
    text.chop(1);
    lineEdit->setText(text);
}

void Calculator::btnAddClicked()
{
    text += "+";
    lineEdit->setText(text);
}

void Calculator::btnMinusClicked()
{
    text += "-";
    lineEdit->setText(text);
}

void Calculator::btnMultiplyClicked()
{
    text += "*";
    lineEdit->setText(text);
}

void Calculator::btnDivideClicked()
{
    text += "/";
    lineEdit->setText(text);
}

Calculator::~Calculator()
{
}

