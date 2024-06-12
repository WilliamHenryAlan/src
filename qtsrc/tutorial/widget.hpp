#ifndef WIDGET_HPP
#define WIDGET_HPP

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {  //前置声明Ui::Widget
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT    //signal and slot机制必须加入的macro

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;//指向可视化界面的指针 访问界面上的组件就用ui pointer
};
#endif // WIDGET_HPP
