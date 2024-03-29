#include "screenwidget.h"
#include <QPainter>
#include <algorithm>
#include <iostream>

//цветовая модель GRB
static const QColor s_palette[16] {
    QColor(  0,   0,   0),
    QColor(  0,   0, 192),
    QColor(192,   0,   0),
    QColor(192,   0, 192),
    QColor(  0, 192,   0),
    QColor(  0, 192, 192),
    QColor(192, 192,   0),
    QColor(192, 192, 192),

    QColor(  0,   0,   0),
    QColor( 96,  96, 255),
    QColor(255,  96,  96),
    QColor(255,  96, 255),
    QColor( 96, 255,  96),
    QColor( 96, 255, 255),
    QColor(255, 255,  96),
    QColor(255, 255, 255)
};


ScreenWidget::ScreenWidget(QWidget *parent) : QWidget(parent)
{

}



void ScreenWidget::setBusInterface(const BusInterface *bi)
{
    _bi = bi;
}

int i=0;
int stageNum=-1;


void ScreenWidget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QPainter p(this);

    /*
    std::cout << _bi->border() << std::endl;
    if(_bi->border()==2 || _bi->border()==5) {
        const int linesCount = 32;
        const int lineHeight=height()/linesCount;
        const int animationSpeed=10; // more - smoother
        if(++i==animationSpeed) i=0;
            p.fillRect(rect(),s_palette[5]);

        for(int j=-1;j<(linesCount/2);j++){
            p.fillRect(0,lineHeight*2*(i+animationSpeed*j)/animationSpeed,width(),lineHeight,s_palette[2]);
        }

    }else if(_bi->border()==1 || _bi->border()==6){
        const int linesCount = 128;
        const int lineHeight=height()/linesCount;
        const int animationSpeed=5; // more - smoother
        if(++i==animationSpeed) i=0;
        p.fillRect(rect(),s_palette[1]);

        for(int j=-1;j<(linesCount/2);j++){
            p.fillRect(0,lineHeight*2*(i+animationSpeed*j)/animationSpeed,width(),lineHeight,s_palette[6]);
        }

    }else{
        i=0;
    }
    */

    //p.fillRect(rect(),s_palette[_bi->border()]);

    //int amount

    //p.fillRect(rect(), s_palette[_bi->border()]);

    //int nw, nh, n; //n - сторона изображаемого пикселя

    //nw = (width() - 2 * BORDER_MIN_WIDTH) / SCREEN_WIDTH;
    //nh = (height()) / (SCREEN_HEIGHT+SCREEN_HEIGHT_BOTTOM+SCREEN_HEIGHT_TOP);

    int n = (height()) / (SCREEN_VERTICAL_LINES);
    if (n < 1) n = 1;

    // Каждую линию рисуем собственным цветом, который был считан в mainwindow.cpp раз в 224 тактов (448, как было предложено, не работает)
    for(int i=0;i<ScreenWidget::SCREEN_VERTICAL_LINES;i++) {
        p.fillRect(
                    0,
                    (i-1)*n,
                    width(),
                    n,s_palette[borderArray[i]]);
    }

    int ox, oy;
    ox = (width() - SCREEN_WIDTH * n) / 2;
    oy = SCREEN_HEIGHT_TOP * n;

    auto fb = _bi->frameBuffer();
    const uint8_t * pixel_data = &fb[0];
    const uint8_t * attr_data = &fb[SCREEN_WIDTH *
                                    SCREEN_HEIGHT / 8];

    int x, y, ax, ay;
    for (y = 0; y < SCREEN_HEIGHT; y++) {
        for (ax = 0; ax < SCREEN_WIDTH/8; ++ax) {
            ay = y / 8;

            //  FL BR PG PR PB PG IG IR IB
            uint8_t attr = attr_data[ay * SCREEN_WIDTH/8 + ax];
            uint8_t ink  = attr &  0b00000111;
            uint8_t paper = (attr &  0b00111000) >> 3;
            uint8_t bright = (attr &  0b01000000) >> 6;
            uint8_t flash =(attr &  0b10000000) >> 7;

            //Временно
            Q_UNUSED(flash);

            int block_addr = y * SCREEN_WIDTH/8 + ax;
            int a4a0   =  block_addr & 0b0000000000011111;
            int a10a8  = (block_addr & 0b0000011100000000) >> 8;
            int a7a5   = (block_addr & 0b0000000011100000) >> 5;
            int a12a11 = (block_addr & 0b0001100000000000) >> 11;

            int video_addr =
                    a4a0 + (a10a8 << 5) +
                    (a7a5 << 8) + (a12a11 << 11);
            uint8_t data = pixel_data[video_addr];
            for (int px = 0; px < 8;  ++px) {
                x = ax * 8 + px;

                QRect pr(  ox + x * n,
                           oy + y * n,
                           n, n);
                if (data & (0b10000000 >> px)) { //ink
                    p.fillRect(pr, s_palette[ink + 8 * bright]);
                } else { //paper
                    p.fillRect(pr, s_palette[paper]);
                }
            }

/*
            QRect r1(   ox + ax * 8 * n,
                        oy + ay * 8 * n,
                        8 * n,
                        8 * n);
            QRect r2(   ox + ax * 8 * n + 2 * n,
                        oy + ay * 8 * n + 2 * n,
                        4 * n,
                        4 * n);

            p.fillRect(r1, s_palette[paper]);
            p.fillRect(r2, s_palette[ink + 8 * bright]);
            */
        }
    }

    /*
    QRect r(    ox,
                oy,
                SCREEN_WIDTH * n,
                SCREEN_HEIGHT * n);
    p.fillRect(r, Qt::gray);
    */
}
