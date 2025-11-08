#pragma once

#include <QWidget>
#include <QTimer>

class GameWidget : public QWidget {
    Q_OBJECT

public:
    explicit GameWidget(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;

private slots:
    void gameLoop();

private:
    int playerX;
    int playerY;
    int dx;
};