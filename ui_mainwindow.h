/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri 14. Jun 17:30:04 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *lineEdit_m;
    QLabel *label_3;
    QLineEdit *lineEdit_p;
    QLineEdit *lineEdit_g;
    QLabel *label_4;
    QLineEdit *lineEdit_k;
    QLabel *label_5;
    QLineEdit *lineEdit_x;
    QPushButton *pushButton_Subscribe;
    QPushButton *pushButton_m;
    QLineEdit *lineEdit_M;
    QLabel *label_9;
    QLabel *label;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_2;
    QLabel *label_13;
    QLineEdit *lineEdit_r;
    QLabel *label_6;
    QLineEdit *lineEdit_s;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_y;
    QPushButton *pushButton_Verify;
    QLineEdit *lineEdit;
    QLabel *label_10;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(648, 374);
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 13, 341, 561));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 17, 2, 1, 1);

        lineEdit_m = new QLineEdit(gridLayoutWidget);
        lineEdit_m->setObjectName(QString::fromUtf8("lineEdit_m"));
        lineEdit_m->setEnabled(false);

        gridLayout->addWidget(lineEdit_m, 8, 2, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 9, 2, 1, 1);

        lineEdit_p = new QLineEdit(gridLayoutWidget);
        lineEdit_p->setObjectName(QString::fromUtf8("lineEdit_p"));

        gridLayout->addWidget(lineEdit_p, 10, 2, 1, 1);

        lineEdit_g = new QLineEdit(gridLayoutWidget);
        lineEdit_g->setObjectName(QString::fromUtf8("lineEdit_g"));

        gridLayout->addWidget(lineEdit_g, 11, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 12, 2, 1, 1);

        lineEdit_k = new QLineEdit(gridLayoutWidget);
        lineEdit_k->setObjectName(QString::fromUtf8("lineEdit_k"));

        gridLayout->addWidget(lineEdit_k, 13, 2, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 14, 2, 1, 1);

        lineEdit_x = new QLineEdit(gridLayoutWidget);
        lineEdit_x->setObjectName(QString::fromUtf8("lineEdit_x"));

        gridLayout->addWidget(lineEdit_x, 15, 2, 1, 1);

        pushButton_Subscribe = new QPushButton(gridLayoutWidget);
        pushButton_Subscribe->setObjectName(QString::fromUtf8("pushButton_Subscribe"));

        gridLayout->addWidget(pushButton_Subscribe, 16, 2, 1, 1);

        pushButton_m = new QPushButton(gridLayoutWidget);
        pushButton_m->setObjectName(QString::fromUtf8("pushButton_m"));

        gridLayout->addWidget(pushButton_m, 8, 1, 1, 1);

        lineEdit_M = new QLineEdit(gridLayoutWidget);
        lineEdit_M->setObjectName(QString::fromUtf8("lineEdit_M"));

        gridLayout->addWidget(lineEdit_M, 4, 2, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 1, 2, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 7, 2, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 10, 1, 1, 1);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 11, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 13, 1, 1, 1);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 15, 1, 1, 1);

        lineEdit_r = new QLineEdit(centralWidget);
        lineEdit_r->setObjectName(QString::fromUtf8("lineEdit_r"));
        lineEdit_r->setEnabled(false);
        lineEdit_r->setGeometry(QRect(380, 40, 101, 21));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(370, 20, 121, 16));
        lineEdit_s = new QLineEdit(centralWidget);
        lineEdit_s->setObjectName(QString::fromUtf8("lineEdit_s"));
        lineEdit_s->setEnabled(false);
        lineEdit_s->setGeometry(QRect(540, 40, 101, 21));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(530, 20, 131, 16));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(450, 90, 131, 16));
        lineEdit_y = new QLineEdit(centralWidget);
        lineEdit_y->setObjectName(QString::fromUtf8("lineEdit_y"));
        lineEdit_y->setGeometry(QRect(450, 110, 111, 21));
        pushButton_Verify = new QPushButton(centralWidget);
        pushButton_Verify->setObjectName(QString::fromUtf8("pushButton_Verify"));
        pushButton_Verify->setGeometry(QRect(390, 280, 248, 23));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(390, 230, 248, 31));
        QFont font1;
        font1.setPointSize(16);
        lineEdit->setFont(font1);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(470, 200, 91, 21));
        QFont font2;
        font2.setPointSize(14);
        label_10->setFont(font2);
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(360, 40, 16, 16));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(520, 40, 21, 16));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(420, 110, 21, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 648, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\274\320\276\320\264\321\203\320\273\320\270 (P>G):", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\320\265\321\201\321\201\320\270\320\276\320\275\321\213\320\271 \320\272\320\273\321\216\321\207 (0<K<P-1):", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\320\265\320\272\321\200\320\265\321\202\320\275\321\213\320\271 \320\272\320\273\321\216\321\207(X<P):", 0, QApplication::UnicodeUTF8));
        pushButton_Subscribe->setText(QApplication::translate("MainWindow", "\320\241\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\255\320\246\320\237", 0, QApplication::UnicodeUTF8));
        pushButton_m->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\265:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", " \320\224\320\260\320\271\320\264\320\266\320\265\321\201\321\202 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "                     P:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "                    G:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "                    K:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "                     X:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "\320\233\320\265\320\262\320\260\321\217 \321\207\320\260\321\201\321\202\321\214 \320\255\320\246\320\237", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\260\321\217 \321\207\320\260\321\201\321\202\321\214 \320\255\320\246\320\237", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\213\320\271 \320\272\320\273\321\216\321\207:", 0, QApplication::UnicodeUTF8));
        pushButton_Verify->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214 \320\255\320\246\320\237", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "R:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "S:", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "Y:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
