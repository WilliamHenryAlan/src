#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QProcess>
#include <QString>
#include <string.h>
#include <QStack>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_clicked();

    void handleCancelButtonClicked();

    void on_one_clicked();

    void on_two_clicked();

    void on_three_clicked();

    void on_four_clicked();

    void on_five_clicked();

    void on_six_clicked();

    void on_seven_clicked();

    void on_eight_clicked();

    void on_nine_clicked();

    void on_zero_clicked();

    void on_leftBracket_clicked();

    void on_rightBracket_clicked();

    void handlemultiplyClicked();
    void handleMinusClicked();
    void handlePlusClicked();
    void handleDevideClicked();

    void on_clear_clicked();

    void on_dot_clicked();

    void on_rollback_clicked();

    void on_equal_clicked();

private:
    Ui::Widget *ui;
    QString expression;

};
#endif // WIDGET_H
