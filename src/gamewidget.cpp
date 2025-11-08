#include "gamewidget.h"
#include <QPainter>
#include <QKeyEvent>

GameWidget::GameWidget(QWidget *parent)
    : QWidget(parent), playerX(0), playerY(100), dx(5)
{
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &GameWidget::gameLoop);
    timer->start(16);
}

void GameWidget::paintEvent(QPaintEvent *) { 
    QPainter painter(this);
    painter.setBrush(Qt::blue);
    painter.drawRect(playerX, playerY, 50, 50);
}

void GameWidget::gameLoop() {
    playerX += dx;
    if (playerX > width() - 50 || playerX < 0) dx = -dx;

    update();
}