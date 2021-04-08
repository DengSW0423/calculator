#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QString>

class Calculator : public QWidget
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private:
    void layout();
    void connectAllButtons();

private:
    QLineEdit *lineEdit;
    QPushButton *pushButtons[18];
    QString text = "";

private slots:
    void btnZeroClicked();
    void btnOneClicked();
    void btnTwoClicked();
    void btnThreeClicked();
    void btnFourClicked();
    void btnFiveClicked();
    void btnSixClicked();
    void btnSevenClicked();
    void btnEightClicked();
    void btnNineClicked();
    void btnAddClicked();
    void btnMinusClicked();
    void btnMultiplyClicked();
    void btnDivideClicked();
    void btnPointClicked();
    void btnEqualClicked();
    void btnClearClicked();
    void btnBackspaceClicked();


};
#endif // CALCULATOR_H
