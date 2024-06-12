#include "widget.hpp"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //set window info
    this->setWindowTitle ("Calculator");
    this->setMinimumSize (650,550);
    //set font
    QFont font("微软雅黑",30);
    ui->display->setFont (font);

    //set icon
    QIcon imag("/Users/willian/Desktop/src/qtproject/calculator/image/rollback.png");
    ui->rollback->setIcon (imag);

    //set button color
    ui->equal->setStyleSheet ("background:red");


    //手动用connect函数连接signal and slot
    connect(ui->display,SIGNAL(returnPressed()),this,SLOT(on_pushButton_clicked()));
    connect(ui->cancelPushButton,&QPushButton::clicked,this,&Widget::handleCancelButtonClicked);
    connect(ui->plus,&QPushButton::clicked, this,&Widget::handlePlusClicked);
    connect(ui->minus,&QPushButton::clicked, this,&Widget::handleMinusClicked);
    connect(ui->multiply,&QPushButton::clicked, this,&Widget::handlemultiplyClicked);
    connect(ui->divide,&QPushButton::clicked, this,&Widget::handleDevideClicked);
}

Widget::~Widget()
{
    delete ui;
}

/*
 * button click显示实现
 */
void Widget::on_pushButton_clicked()
{
    QString cmdStr = ui->display->text();
    QProcess* ptr = new QProcess(this);
    ptr->start(cmdStr);
}

void Widget::handleCancelButtonClicked() {
    this->close();
}


void Widget::on_one_clicked()
{
    expression += "1";
    ui->display->setText(expression);
}


void Widget::on_two_clicked()
{
    expression += "2";
    ui->display->setText(expression);
}

void Widget::on_three_clicked()
{
    expression += "3";
    ui->display->setText(expression);
}


void Widget::on_four_clicked()
{
    expression += "4";
    ui->display->setText(expression);
}

void Widget::on_five_clicked()
{
    expression += "5";
    ui->display->setText(expression);
}


void Widget::on_six_clicked()
{
    expression += "6";
    ui->display->setText(expression);
}

void Widget::on_seven_clicked()
{
    expression += "7";
    ui->display->setText(expression);
}


void Widget::on_eight_clicked()
{
    expression += "8";
    ui->display->setText(expression);
}

void Widget::on_nine_clicked()
{
    expression += "9";
    ui->display->setText(expression);
}


void Widget::on_zero_clicked()
{
    expression += "0";
    ui->display->setText(expression);
}


void Widget::on_leftBracket_clicked()
{
    expression += "(";
    ui->display->setText (expression);
}


void Widget::on_rightBracket_clicked()
{
    expression += ")";
    ui->display->setText (expression);
}

void Widget::handlePlusClicked() {
    expression += "+";
    ui->display->setText (expression);
}
void Widget::handlemultiplyClicked() {
    expression += "*";
    ui->display->setText (expression);
}
void Widget::handleMinusClicked() {
    expression += "-";
    ui->display->setText (expression);
}
void Widget::handleDevideClicked() {
    expression += "/";
    ui->display->setText (expression);
}

void Widget::on_clear_clicked()
{
    expression = "";
    expression.clear();
    ui->display->clear ();
}


void Widget::on_dot_clicked()
{
    expression += ".";
    ui->display->setText (expression);
}


void Widget::on_rollback_clicked()
{
    expression.chop (1);
    ui->display->setText (expression);
}


void Widget::on_equal_clicked()
{
    //待实现
    QStack<int> nums,ops;
}

