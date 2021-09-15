/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include <keyboardwidget.h>
#include <screenwidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Load_a_snapshot;
    QAction *actionE_xit;
    QAction *action_Reset;
    QAction *action_NMI;
    QAction *action_About;
    QAction *action_Save_a_snapshot;
    QAction *actionSpectrum_48k;
    QAction *actionSpectrum_128k;
    QAction *actionMake_a_scrennshot;
    QAction *actionLoad_a_screenshot;
    QAction *actionLoad_a_snapshot_z80;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QComboBox *cbJoystick;
    QCheckBox *cbShowControls;
    ScreenWidget *screen;
    QCheckBox *cbKeyboardCapture;
    QToolButton *btnReset;
    QTabWidget *controlsTab;
    QWidget *keyboard;
    QGridLayout *gridLayout_3;
    KeyboardWidget *keyboardwd;
    QWidget *joystick;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pbRight;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbDown;
    QPushButton *pbFire;
    QPushButton *pbLeft;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pbUp;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuMachine;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(982, 1130);
        action_Load_a_snapshot = new QAction(MainWindow);
        action_Load_a_snapshot->setObjectName(QString::fromUtf8("action_Load_a_snapshot"));
        actionE_xit = new QAction(MainWindow);
        actionE_xit->setObjectName(QString::fromUtf8("actionE_xit"));
        action_Reset = new QAction(MainWindow);
        action_Reset->setObjectName(QString::fromUtf8("action_Reset"));
        action_NMI = new QAction(MainWindow);
        action_NMI->setObjectName(QString::fromUtf8("action_NMI"));
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QString::fromUtf8("action_About"));
        action_Save_a_snapshot = new QAction(MainWindow);
        action_Save_a_snapshot->setObjectName(QString::fromUtf8("action_Save_a_snapshot"));
        actionSpectrum_48k = new QAction(MainWindow);
        actionSpectrum_48k->setObjectName(QString::fromUtf8("actionSpectrum_48k"));
        actionSpectrum_48k->setCheckable(true);
        actionSpectrum_48k->setChecked(false);
        actionSpectrum_128k = new QAction(MainWindow);
        actionSpectrum_128k->setObjectName(QString::fromUtf8("actionSpectrum_128k"));
        actionSpectrum_128k->setCheckable(true);
        actionSpectrum_128k->setChecked(true);
        actionMake_a_scrennshot = new QAction(MainWindow);
        actionMake_a_scrennshot->setObjectName(QString::fromUtf8("actionMake_a_scrennshot"));
        actionLoad_a_screenshot = new QAction(MainWindow);
        actionLoad_a_screenshot->setObjectName(QString::fromUtf8("actionLoad_a_screenshot"));
        actionLoad_a_snapshot_z80 = new QAction(MainWindow);
        actionLoad_a_snapshot_z80->setObjectName(QString::fromUtf8("actionLoad_a_snapshot_z80"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cbJoystick = new QComboBox(centralwidget);
        cbJoystick->addItem(QString());
        cbJoystick->addItem(QString());
        cbJoystick->addItem(QString());
        cbJoystick->addItem(QString());
        cbJoystick->setObjectName(QString::fromUtf8("cbJoystick"));

        gridLayout->addWidget(cbJoystick, 1, 2, 1, 1);

        cbShowControls = new QCheckBox(centralwidget);
        cbShowControls->setObjectName(QString::fromUtf8("cbShowControls"));
        cbShowControls->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(cbShowControls, 1, 0, 1, 1);

        screen = new ScreenWidget(centralwidget);
        screen->setObjectName(QString::fromUtf8("screen"));
        screen->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(screen->sizePolicy().hasHeightForWidth());
        screen->setSizePolicy(sizePolicy);

        gridLayout->addWidget(screen, 0, 0, 1, 4);

        cbKeyboardCapture = new QCheckBox(centralwidget);
        cbKeyboardCapture->setObjectName(QString::fromUtf8("cbKeyboardCapture"));

        gridLayout->addWidget(cbKeyboardCapture, 1, 1, 1, 1);

        btnReset = new QToolButton(centralwidget);
        btnReset->setObjectName(QString::fromUtf8("btnReset"));
        btnReset->setFocusPolicy(Qt::TabFocus);

        gridLayout->addWidget(btnReset, 1, 3, 1, 1);

        controlsTab = new QTabWidget(centralwidget);
        controlsTab->setObjectName(QString::fromUtf8("controlsTab"));
        controlsTab->setTabPosition(QTabWidget::North);
        controlsTab->setTabShape(QTabWidget::Rounded);
        controlsTab->setElideMode(Qt::ElideMiddle);
        controlsTab->setDocumentMode(false);
        controlsTab->setMovable(false);
        controlsTab->setTabBarAutoHide(true);
        keyboard = new QWidget();
        keyboard->setObjectName(QString::fromUtf8("keyboard"));
        gridLayout_3 = new QGridLayout(keyboard);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        keyboardwd = new KeyboardWidget(keyboard);
        keyboardwd->setObjectName(QString::fromUtf8("keyboardwd"));

        gridLayout_3->addWidget(keyboardwd, 0, 0, 1, 1);

        controlsTab->addTab(keyboard, QString());
        joystick = new QWidget();
        joystick->setObjectName(QString::fromUtf8("joystick"));
        gridLayout_2 = new QGridLayout(joystick);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 1);

        pbRight = new QPushButton(joystick);
        pbRight->setObjectName(QString::fromUtf8("pbRight"));
        QFont font;
        font.setPointSize(50);
        font.setBold(false);
        font.setWeight(50);
        pbRight->setFont(font);

        gridLayout_2->addWidget(pbRight, 2, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 2, 6, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 4, 1, 1);

        pbDown = new QPushButton(joystick);
        pbDown->setObjectName(QString::fromUtf8("pbDown"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(50);
        font1.setBold(false);
        font1.setWeight(50);
        pbDown->setFont(font1);

        gridLayout_2->addWidget(pbDown, 3, 1, 1, 1);

        pbFire = new QPushButton(joystick);
        pbFire->setObjectName(QString::fromUtf8("pbFire"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pbFire->sizePolicy().hasHeightForWidth());
        pbFire->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(70);
        font2.setBold(false);
        font2.setWeight(50);
        pbFire->setFont(font2);
        pbFire->setIconSize(QSize(10, 10));

        gridLayout_2->addWidget(pbFire, 2, 5, 1, 1);

        pbLeft = new QPushButton(joystick);
        pbLeft->setObjectName(QString::fromUtf8("pbLeft"));
        pbLeft->setFont(font1);

        gridLayout_2->addWidget(pbLeft, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 4, 1, 1, 1);

        pbUp = new QPushButton(joystick);
        pbUp->setObjectName(QString::fromUtf8("pbUp"));
        pbUp->setFont(font1);

        gridLayout_2->addWidget(pbUp, 1, 1, 1, 1);

        controlsTab->addTab(joystick, QString());

        gridLayout->addWidget(controlsTab, 2, 0, 1, 4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 982, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuMachine = new QMenu(menubar);
        menuMachine->setObjectName(QString::fromUtf8("menuMachine"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuMachine->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(action_Load_a_snapshot);
        menuFile->addAction(actionLoad_a_snapshot_z80);
        menuFile->addAction(action_Save_a_snapshot);
        menuFile->addSeparator();
        menuFile->addAction(actionLoad_a_screenshot);
        menuFile->addAction(actionMake_a_scrennshot);
        menuFile->addSeparator();
        menuFile->addAction(actionE_xit);
        menuMachine->addAction(action_Reset);
        menuMachine->addAction(action_NMI);
        menuMachine->addSeparator();
        menuMachine->addAction(actionSpectrum_48k);
        menuMachine->addAction(actionSpectrum_128k);
        menuHelp->addAction(action_About);

        retranslateUi(MainWindow);

        controlsTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_Load_a_snapshot->setText(QCoreApplication::translate("MainWindow", "&Load a snapshot (.sna)...", nullptr));
#if QT_CONFIG(tooltip)
        action_Load_a_snapshot->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Load a snapshot</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        actionE_xit->setText(QCoreApplication::translate("MainWindow", "E&xit", nullptr));
        action_Reset->setText(QCoreApplication::translate("MainWindow", "&Reset", nullptr));
        action_NMI->setText(QCoreApplication::translate("MainWindow", "&NMI", nullptr));
        action_About->setText(QCoreApplication::translate("MainWindow", "&About", nullptr));
        action_Save_a_snapshot->setText(QCoreApplication::translate("MainWindow", "&Save a snapshot (.z80)", nullptr));
        actionSpectrum_48k->setText(QCoreApplication::translate("MainWindow", "Spectrum 48k", nullptr));
        actionSpectrum_128k->setText(QCoreApplication::translate("MainWindow", "Spectrum 128k", nullptr));
        actionMake_a_scrennshot->setText(QCoreApplication::translate("MainWindow", "Save a screenshot", nullptr));
        actionLoad_a_screenshot->setText(QCoreApplication::translate("MainWindow", "Load a screenshot...", nullptr));
        actionLoad_a_snapshot_z80->setText(QCoreApplication::translate("MainWindow", "Load a snapshot (.z80)...", nullptr));
        cbJoystick->setItemText(0, QCoreApplication::translate("MainWindow", "Cursor Interface", nullptr));
        cbJoystick->setItemText(1, QCoreApplication::translate("MainWindow", "Kempston Interface", nullptr));
        cbJoystick->setItemText(2, QCoreApplication::translate("MainWindow", "Sinclair Interface 2 - port 1", nullptr));
        cbJoystick->setItemText(3, QCoreApplication::translate("MainWindow", "Sinclair Interface 2 - port 2", nullptr));

        cbShowControls->setText(QCoreApplication::translate("MainWindow", "Show controls", nullptr));
        cbKeyboardCapture->setText(QCoreApplication::translate("MainWindow", "Capture Keyboard", nullptr));
        btnReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        controlsTab->setTabText(controlsTab->indexOf(keyboard), QCoreApplication::translate("MainWindow", "Keyboard", nullptr));
        pbRight->setText(QCoreApplication::translate("MainWindow", "\342\206\222", nullptr));
        pbDown->setText(QCoreApplication::translate("MainWindow", "\342\206\223", nullptr));
        pbFire->setText(QCoreApplication::translate("MainWindow", "\342\234\270", nullptr));
        pbLeft->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
        pbUp->setText(QCoreApplication::translate("MainWindow", "\342\206\221", nullptr));
        controlsTab->setTabText(controlsTab->indexOf(joystick), QCoreApplication::translate("MainWindow", "Joystick", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuMachine->setTitle(QCoreApplication::translate("MainWindow", "&Machine", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
