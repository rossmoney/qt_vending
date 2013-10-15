/********************************************************************************
** Form generated from reading UI file 'vendingmachine.ui'
**
** Created: Thu 20. Dec 16:45:20 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENDINGMACHINE_H
#define UI_VENDINGMACHINE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VendingMachine
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *lblPrice_2;
    QGridLayout *itemButtons;
    QPushButton *btnA;
    QPushButton *btnB;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btnC;
    QPushButton *btn3;
    QPushButton *btnD;
    QPushButton *btnE;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btnF;
    QPushButton *btnG;
    QPushButton *btn7;
    QPushButton *btnH;
    QPushButton *btn8;
    QLabel *lblInsertCoins;
    QListWidget *lstCoins;
    QPushButton *btnAddCoin;
    QPushButton *btnCancel;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout;
    QPushButton *btnEditItems;
    QPushButton *btnExitApp;
    QLabel *lblItem;
    QLabel *lblPrice;
    QTableView *tblItems;

    void setupUi(QWidget *VendingMachine)
    {
        if (VendingMachine->objectName().isEmpty())
            VendingMachine->setObjectName(QString::fromUtf8("VendingMachine"));
        VendingMachine->setEnabled(true);
        VendingMachine->resize(580, 430);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(VendingMachine->sizePolicy().hasHeightForWidth());
        VendingMachine->setSizePolicy(sizePolicy);
        VendingMachine->setMinimumSize(QSize(580, 430));
        VendingMachine->setMaximumSize(QSize(580, 430));
        verticalLayoutWidget = new QWidget(VendingMachine);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(410, 10, 160, 405));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lblPrice_2 = new QLabel(verticalLayoutWidget);
        lblPrice_2->setObjectName(QString::fromUtf8("lblPrice_2"));
        lblPrice_2->setWordWrap(true);

        verticalLayout->addWidget(lblPrice_2);

        itemButtons = new QGridLayout();
        itemButtons->setSpacing(6);
        itemButtons->setObjectName(QString::fromUtf8("itemButtons"));
        btnA = new QPushButton(verticalLayoutWidget);
        btnA->setObjectName(QString::fromUtf8("btnA"));
        btnA->setCheckable(false);

        itemButtons->addWidget(btnA, 0, 0, 1, 1);

        btnB = new QPushButton(verticalLayoutWidget);
        btnB->setObjectName(QString::fromUtf8("btnB"));

        itemButtons->addWidget(btnB, 1, 0, 1, 1);

        btn1 = new QPushButton(verticalLayoutWidget);
        btn1->setObjectName(QString::fromUtf8("btn1"));

        itemButtons->addWidget(btn1, 0, 1, 1, 1);

        btn2 = new QPushButton(verticalLayoutWidget);
        btn2->setObjectName(QString::fromUtf8("btn2"));

        itemButtons->addWidget(btn2, 1, 1, 1, 1);

        btnC = new QPushButton(verticalLayoutWidget);
        btnC->setObjectName(QString::fromUtf8("btnC"));

        itemButtons->addWidget(btnC, 2, 0, 1, 1);

        btn3 = new QPushButton(verticalLayoutWidget);
        btn3->setObjectName(QString::fromUtf8("btn3"));

        itemButtons->addWidget(btn3, 2, 1, 1, 1);

        btnD = new QPushButton(verticalLayoutWidget);
        btnD->setObjectName(QString::fromUtf8("btnD"));

        itemButtons->addWidget(btnD, 3, 0, 1, 1);

        btnE = new QPushButton(verticalLayoutWidget);
        btnE->setObjectName(QString::fromUtf8("btnE"));

        itemButtons->addWidget(btnE, 4, 0, 1, 1);

        btn4 = new QPushButton(verticalLayoutWidget);
        btn4->setObjectName(QString::fromUtf8("btn4"));

        itemButtons->addWidget(btn4, 3, 1, 1, 1);

        btn5 = new QPushButton(verticalLayoutWidget);
        btn5->setObjectName(QString::fromUtf8("btn5"));

        itemButtons->addWidget(btn5, 4, 1, 1, 1);

        btn6 = new QPushButton(verticalLayoutWidget);
        btn6->setObjectName(QString::fromUtf8("btn6"));

        itemButtons->addWidget(btn6, 5, 1, 1, 1);

        btnF = new QPushButton(verticalLayoutWidget);
        btnF->setObjectName(QString::fromUtf8("btnF"));

        itemButtons->addWidget(btnF, 5, 0, 1, 1);

        btnG = new QPushButton(verticalLayoutWidget);
        btnG->setObjectName(QString::fromUtf8("btnG"));

        itemButtons->addWidget(btnG, 6, 0, 1, 1);

        btn7 = new QPushButton(verticalLayoutWidget);
        btn7->setObjectName(QString::fromUtf8("btn7"));

        itemButtons->addWidget(btn7, 6, 1, 1, 1);

        btnH = new QPushButton(verticalLayoutWidget);
        btnH->setObjectName(QString::fromUtf8("btnH"));

        itemButtons->addWidget(btnH, 7, 0, 1, 1);

        btn8 = new QPushButton(verticalLayoutWidget);
        btn8->setObjectName(QString::fromUtf8("btn8"));

        itemButtons->addWidget(btn8, 7, 1, 1, 1);


        verticalLayout->addLayout(itemButtons);

        lblInsertCoins = new QLabel(verticalLayoutWidget);
        lblInsertCoins->setObjectName(QString::fromUtf8("lblInsertCoins"));

        verticalLayout->addWidget(lblInsertCoins);

        lstCoins = new QListWidget(verticalLayoutWidget);
        new QListWidgetItem(lstCoins);
        new QListWidgetItem(lstCoins);
        new QListWidgetItem(lstCoins);
        new QListWidgetItem(lstCoins);
        new QListWidgetItem(lstCoins);
        new QListWidgetItem(lstCoins);
        new QListWidgetItem(lstCoins);
        new QListWidgetItem(lstCoins);
        lstCoins->setObjectName(QString::fromUtf8("lstCoins"));
        lstCoins->setViewMode(QListView::IconMode);

        verticalLayout->addWidget(lstCoins);

        btnAddCoin = new QPushButton(verticalLayoutWidget);
        btnAddCoin->setObjectName(QString::fromUtf8("btnAddCoin"));

        verticalLayout->addWidget(btnAddCoin);

        btnCancel = new QPushButton(verticalLayoutWidget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        verticalLayout->addWidget(btnCancel);

        gridLayoutWidget_2 = new QWidget(VendingMachine);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 391, 401));
        gridLayout = new QGridLayout(gridLayoutWidget_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnEditItems = new QPushButton(gridLayoutWidget_2);
        btnEditItems->setObjectName(QString::fromUtf8("btnEditItems"));

        gridLayout->addWidget(btnEditItems, 1, 0, 1, 1);

        btnExitApp = new QPushButton(gridLayoutWidget_2);
        btnExitApp->setObjectName(QString::fromUtf8("btnExitApp"));

        gridLayout->addWidget(btnExitApp, 2, 0, 1, 1);

        lblItem = new QLabel(gridLayoutWidget_2);
        lblItem->setObjectName(QString::fromUtf8("lblItem"));
        lblItem->setWordWrap(true);

        gridLayout->addWidget(lblItem, 1, 1, 2, 1);

        lblPrice = new QLabel(gridLayoutWidget_2);
        lblPrice->setObjectName(QString::fromUtf8("lblPrice"));
        lblPrice->setWordWrap(true);

        gridLayout->addWidget(lblPrice, 1, 2, 2, 1);

        tblItems = new QTableView(gridLayoutWidget_2);
        tblItems->setObjectName(QString::fromUtf8("tblItems"));
        tblItems->setEnabled(true);
        tblItems->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tblItems->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tblItems, 0, 0, 1, 3);


        retranslateUi(VendingMachine);

        QMetaObject::connectSlotsByName(VendingMachine);
    } // setupUi

    void retranslateUi(QWidget *VendingMachine)
    {
        VendingMachine->setWindowTitle(QApplication::translate("VendingMachine", "Vending Machine Simulator", 0, QApplication::UnicodeUTF8));
        lblPrice_2->setText(QApplication::translate("VendingMachine", "Enter code to view price of item then insert coins:", 0, QApplication::UnicodeUTF8));
        btnA->setText(QApplication::translate("VendingMachine", "A", 0, QApplication::UnicodeUTF8));
        btnB->setText(QApplication::translate("VendingMachine", "B", 0, QApplication::UnicodeUTF8));
        btn1->setText(QApplication::translate("VendingMachine", "1", 0, QApplication::UnicodeUTF8));
        btn2->setText(QApplication::translate("VendingMachine", "2", 0, QApplication::UnicodeUTF8));
        btnC->setText(QApplication::translate("VendingMachine", "C", 0, QApplication::UnicodeUTF8));
        btn3->setText(QApplication::translate("VendingMachine", "3", 0, QApplication::UnicodeUTF8));
        btnD->setText(QApplication::translate("VendingMachine", "D", 0, QApplication::UnicodeUTF8));
        btnE->setText(QApplication::translate("VendingMachine", "E", 0, QApplication::UnicodeUTF8));
        btn4->setText(QApplication::translate("VendingMachine", "4", 0, QApplication::UnicodeUTF8));
        btn5->setText(QApplication::translate("VendingMachine", "5", 0, QApplication::UnicodeUTF8));
        btn6->setText(QApplication::translate("VendingMachine", "6", 0, QApplication::UnicodeUTF8));
        btnF->setText(QApplication::translate("VendingMachine", "F", 0, QApplication::UnicodeUTF8));
        btnG->setText(QApplication::translate("VendingMachine", "G", 0, QApplication::UnicodeUTF8));
        btn7->setText(QApplication::translate("VendingMachine", "7", 0, QApplication::UnicodeUTF8));
        btnH->setText(QApplication::translate("VendingMachine", "H", 0, QApplication::UnicodeUTF8));
        btn8->setText(QApplication::translate("VendingMachine", "8", 0, QApplication::UnicodeUTF8));
        lblInsertCoins->setText(QApplication::translate("VendingMachine", "Insert Coins:", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = lstCoins->isSortingEnabled();
        lstCoins->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = lstCoins->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("VendingMachine", "1p", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = lstCoins->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("VendingMachine", "2p", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = lstCoins->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("VendingMachine", "5p", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem3 = lstCoins->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("VendingMachine", "10p", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem4 = lstCoins->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("VendingMachine", "20p", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem5 = lstCoins->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("VendingMachine", "50p", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem6 = lstCoins->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("VendingMachine", "\302\2431", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem7 = lstCoins->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("VendingMachine", "\302\2432", 0, QApplication::UnicodeUTF8));
        lstCoins->setSortingEnabled(__sortingEnabled);

        btnAddCoin->setText(QApplication::translate("VendingMachine", "+ Coin", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("VendingMachine", "Cancel Sale", 0, QApplication::UnicodeUTF8));
        btnEditItems->setText(QApplication::translate("VendingMachine", "Edit Items", 0, QApplication::UnicodeUTF8));
        btnExitApp->setText(QApplication::translate("VendingMachine", "Exit", 0, QApplication::UnicodeUTF8));
        lblItem->setText(QString());
        lblPrice->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VendingMachine: public Ui_VendingMachine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENDINGMACHINE_H
