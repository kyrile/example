/* This file is part of the examples of the Qt Toolkit. */

#ifndef MOUSE_H
#define MOUSE_H

#include <QGraphicsItem>

class Mouse : public QGraphicsItem
{
public:
    Mouse();
    //返回包围一个老鼠图形的最小矩形
    QRectF boundingRect() const override;
    //返回老鼠的精确外形
    QPainterPath shape() const override;
    //当需要绘制某个图形元素，这个函数会被调用
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget) override;

protected:
    //更新老鼠的位置，眼睛的颜色
    void advance(int step) override;

private:
    qreal angle;
    qreal speed;
    qreal mouseEyeDirection;
    QColor color;
};

#endif
