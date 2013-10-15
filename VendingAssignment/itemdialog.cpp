#include "itemdialog.h"
#include "vendingmachine.h"
#include "ui_itemdialog.h"
#include <QList>
#include <QTableView>
#include <QStandardItemModel>
#include <QMessageBox>

/**
 * @brief
 *
 * @param parent
 */
ItemDialog::ItemDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ItemDialog)
{
    ui->setupUi(this);

    refreshItemTable();
}

/**
 * @brief
 *
 */
ItemDialog::~ItemDialog()
{
    delete ui;
}

/**
 * @brief
 *
 * @return ItemLoader
 */
ItemLoader ItemDialog::getItemList()
{
    return items;
}

/**
 * @brief
 *
 */
void ItemDialog::refreshItemTable()
{
    QList<Item> itemList = items.getItemsAsList();

    QStandardItemModel *model = new QStandardItemModel( itemList.length(), 3,this);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Item")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("Price")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Code to Enter")));

    for(int i = 0; i < itemList.length(); i++)
    {
       model->setItem(i, 0, new QStandardItem(itemList[i].itemName));
       model->setItem(i, 1, new QStandardItem(QString::number(itemList[i].itemPrice)));
       model->setItem(i, 2, new QStandardItem(itemList[i].itemCode));
    }

    ui->tblItems->setModel(model);
}

/**
 * @brief
 *
 */
void ItemDialog::on_btnClearFields_clicked()
{
    ui->lstAlpha->clearSelection();
    ui->lstNumber->clearSelection();
    ui->txtItemName->setText("");
    ui->txtItemPrice->setText("");
}

/**
 * @brief
 *
 */
void ItemDialog::on_btnClose_clicked()
{
    this->close();
    //VendingMachine m = items.getVendingMachine();
    //m.setupTableData();
}

/**
 * @brief
 *
 */
void ItemDialog::on_btnDeleteItem_clicked()
{
    QModelIndex selected = ui->tblItems->currentIndex();
    QString selItemCode = ui->tblItems->model()->data(ui->tblItems->model()->index(selected.row(),2)).toString();
    ui->tblItems->model()->removeRow(selected.row());
    items.deleteItemByItemCode(selItemCode);
}

/**
 * @brief
 *
 */
void ItemDialog::on_btnAddItem_clicked()
{
    QMessageBox msg;
    if(ui->txtItemName->text() != "" && ui->txtItemPrice->text() != "")
    {
        if(ui->lstAlpha->currentItem() != NULL && ui->lstNumber->currentItem() != NULL)
        {
            QString itemCode = ui->lstAlpha->currentItem()->text() + ui->lstNumber->currentItem()->text();
            QList<Item> itemList = items.getItemsAsList();
            bool found = false;
            for(int i = 0; i < itemList.length(); i++)
            {
                if(itemList[i].itemCode == itemCode)
                {
                    found = true;
                }
            }
            if(!found)
            {
                items.addItem(ui->txtItemName->text(), itemCode , ui->txtItemPrice->text().toDouble());
                refreshItemTable();
            } else {
                msg.setText("Sorry, item code " + itemCode + " has already been allocated to a product!");
                msg.exec();
            }
        } else {
            msg.setText("Item code hasn't been selected!");
            msg.exec();
        }
    } else {
        msg.setText("Not all fields have been filled out!");
        msg.exec();
    }
}
