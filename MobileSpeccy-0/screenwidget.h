

#ifndef SCREENWIDGET_H
#define SCREENWIDGET_H

#include <QWidget>
#include "businterface.h"

class MainWindow;

class ScreenWidget : public QWidget
{
    Q_OBJECT
public:
    static constexpr int SCREEN_WIDTH = 256;
    static constexpr int SCREEN_HEIGHT = 192;
    static constexpr int SCREEN_ATTR_WIDTH = 32;
    static constexpr int SCREEN_ATTR_HEIGHT = 24;
    //static constexpr int BORDER_MIN_WIDTH = 32;
    static constexpr int SCREEN_HEIGHT_TOP = 48;
    static constexpr int SCREEN_HEIGHT_BOTTOM = 56;
    static constexpr int SCREEN_VERTICAL_LINES = SCREEN_HEIGHT+SCREEN_HEIGHT_TOP+SCREEN_HEIGHT_BOTTOM;


    explicit ScreenWidget(QWidget *parent = nullptr);

    void setBusInterface(const BusInterface *bi);
public slots:
    void toggleFlash() { flash_state = !flash_state; }

signals:

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    const BusInterface * _bi { nullptr };
    bool flash_state { false };

    int borderArray[SCREEN_VERTICAL_LINES]={0};

    friend MainWindow;
};

#endif // SCREENWIDGET_H
