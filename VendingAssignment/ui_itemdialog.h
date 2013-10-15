/********************************************************************************
** Form generated from reading UI file 'itemdialog.ui'
**
** Created: Thu 20. Dec 16:45:20 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMDIALOG_H
#define UI_ITEMDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemDialog
{
public:
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txtItemName;
    QLabel *label_4;
    QLineEdit *txtItemPrice;
    QGridLayout *gridLayout_2;
    QPushButton *btnAddItem;
    QPushButton *btnClearFields;
    QLabel *label_3;
    QGridLayout *gridLayout;
    QListWidget *lstAlpha;
    QListWidget *lstNumber;
    QWidget *widget1;
    QGridLayout *gridLayout_3;
    QTableView *tblItems;
    QPushButton *btnDeleteItem;
    QPushButton *btnClose;

    void setupUi(QDialog *ItemDialog)
    {
        if (ItemDialog->objectName().isEmpty())
            ItemDialog->setObjectName(QString::fromUtf8("ItemDialog"));
        ItemDialog->resize(655, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ItemDialog->sizePolicy().hasHeightForWidth());
        ItemDialog->setSizePolicy(sizePolicy);
        ItemDialog->setMinimumSize(QSize(655, 300));
        ItemDialog->setMaximumSize(QSize(655, 300));
        ItemDialog->setModal(true);
        widget = new QWidget(ItemDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(420, 0, 227, 291));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setUnderline(true);
        label->setFont(font);
        label->setFrameShape(QFrame::NoFrame);

        formLayout->setWidget(0, QFormLayout::SpanningRole, label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtItemName = new QLineEdit(widget);
        txtItemName->setObjectName(QString::fromUtf8("txtItemName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, txtItemName);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        txtItemPrice = new QLineEdit(widget);
        txtItemPrice->setObjectName(QString::fromUtf8("txtItemPrice"));

        formLayout->setWidget(4, QFormLayout::FieldRole, txtItemPrice);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        btnAddItem = new QPushButton(widget);
        btnAddItem->setObjectName(QString::fromUtf8("btnAddItem"));

        gridLayout_2->addWidget(btnAddItem, 0, 0, 1, 1);

        btnClearFields = new QPushButton(widget);
        btnClearFields->setObjectName(QString::fromUtf8("btnClearFields"));

        gridLayout_2->addWidget(btnClearFields, 0, 1, 1, 1);


        formLayout->setLayout(8, QFormLayout::FieldRole, gridLayout_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lstAlpha = new QListWidget(widget);
        new QListWidgetItem(lstAlpha);
        new QListWidgetItem(lstAlpha);
        new QListWidgetItem(lstAlpha);
        new QListWidgetItem(lstAlpha);
        new QListWidgetItem(lstAlpha);
        new QListWidgetItem(lstAlpha);
        new QListWidgetItem(lstAlpha);
        new QListWidgetItem(lstAlpha);
        lstAlpha->setObjectName(QString::fromUtf8("lstAlpha"));
        lstAlpha->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(lstAlpha, 0, 0, 1, 1);

        lstNumber = new QListWidget(widget);
        new QListWidgetItem(lstNumber);
        new QListWidgetItem(lstNumber);
        new QListWidgetItem(lstNumber);
        new QListWidgetItem(lstNumber);
        new QListWidgetItem(lstNumber);
        new QListWidgetItem(lstNumber);
        new QListWidgetItem(lstNumber);
        new QListWidgetItem(lstNumber);
        lstNumber->setObjectName(QString::fromUtf8("lstNumber"));
        lstNumber->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(lstNumber, 0, 1, 1, 1);


        formLayout->setLayout(5, QFormLayout::FieldRole, gridLayout);

        widget1 = new QWidget(ItemDialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(0, 0, 411, 291));
        gridLayout_3 = new QGridLayout(widget1);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        tblItems = new QTableView(widget1);
        tblItems->setObjectName(QString::fromUtf8("tblItems"));
        tblItems->setEnabled(true);
        tblItems->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout_3->addWidget(tblItems, 0, 0, 1, 2);

        btnDeleteItem = new QPushButton(widget1);
        btnDeleteItem->setObjectName(QString::fromUtf8("btnDeleteItem"));

        gridLayout_3->addWidget(btnDeleteItem, 1, 0, 1, 1);

        btnClose = new QPushButton(widget1);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        gridLayout_3->addWidget(btnClose, 1, 1, 1, 1);


        retranslateUi(ItemDialog);

        QMetaObject::connectSlotsByName(ItemDialog);
    } // setupUi

    void retranslateUi(QDialog *ItemDialog)
    {
        ItemDialog->setWindowTitle(QApplication::translate("ItemDialog", "Edit Items", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ItemDialog", "Add New Item", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ItemDialog", "Item Name:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ItemDialog", "Item Price: \302\243", 0, QApplication::UnicodeUTF8));
        btnAddItem->setText(QApplication::translate("ItemDialog", "Add Item", 0, QApplication::UnicodeUTF8));
        btnClearFields->setText(QApplication::translate("ItemDialog", "Clear Fields", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ItemDialog", "Item Code:", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = lstAlpha->isSortingEnabled();
        lstAlpha->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = lstAlpha->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("ItemDialog", "A", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = lstAlpha->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("ItemDialog", "B", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = lstAlpha->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("ItemDialog", "C", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem3 = lstAlpha->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("ItemDialog", "D", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem4 = lstAlpha->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("ItemDialog", "E", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem5 = lstAlpha->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("ItemDialog", "F", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem6 = lstAlpha->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("ItemDialog", "G", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem7 = lstAlpha->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("ItemDialog", "H", 0, QApplication::UnicodeUTF8));
        lstAlpha->setSortingEnabled(__sortingEnabled);


        const bool __sortingEnabled1 = lstNumber->isSortingEnabled();
        lstNumber->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem8 = lstNumber->item(0);
        ___qlistwidgetitem8->setText(QApplication::translate("ItemDialog", "1", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem9 = lstNumber->item(1);
        ___qlistwidgetitem9->setText(QApplication::translate("ItemDialog", "2", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem10 = lstNumber->item(2);
        ___qlistwidgetitem10->setText(QApplication::translate("ItemDialog", "3", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem11 = lstNumber->item(3);
        ___qlistwidgetitem11->setText(QApplication::translate("ItemDialog", "4", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem12 = lstNumber->item(4);
        ___qlistwidgetitem12->setText(QApplication::translate("ItemDialog", "5", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem13 = lstNumber->item(5);
        ___qlistwidgetitem13->setText(QApplication::translate("ItemDialog", "6", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem14 = lstNumber->item(6);
        ___qlistwidgetitem14->setText(QApplication::translate("ItemDialog", "7", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem15 = lstNumber->item(7);
        ___qlistwidgetitem15->setText(QApplication::translate("ItemDialog", "8", 0, QApplication::UnicodeUTF8));
        lstNumber->setSortingEnabled(__sortingEnabled1);

        btnDeleteItem->setText(QApplication::translate("ItemDialog", "Delete Selected Item", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("ItemDialog", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ItemDialog: public Ui_ItemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMDIALOG_H
