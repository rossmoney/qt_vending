#include "vendingmachine.h"
#include "itemdialog.h"
#include "ui_vendingmachine.h"
#include <QList>
#include <QTableView>
#include <QStandardItemModel>
#include <QMessageBox>

VendingMachine::VendingMachine(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VendingMachine)
{
    ui->setupUi(this);

    //items.setVendingMachine(this);
    setupTableData();

    m_numberPressed = 0;
    m_letterPressed = "-";

    selectedButton.setBold(true);
    selectedButton.setPointSize(12);
    resetButton.setBold(false);
    resetButton.setPointSize(8);
}

VendingMachine::~VendingMachine()
{
    delete ui;
    //delete items;
}

void VendingMachine::setupTableData()
{
    QList<Item> itemList = items.getItemsAsList();

    QStandardItemModel *model = new QStandardItemModel( itemList.length(), 2,this);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Item")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("Code to Enter")));

    for(int i = 0; i < itemList.length(); i++)
    {
       model->setItem(i, 0, new QStandardItem(itemList[i].itemName));
       model->setItem(i, 1, new QStandardItem(itemList[i].itemCode));
    }

    ui->tblItems->setModel(model);
}

void VendingMachine::processItemCode(QString letterPressed, int numberPressed)
{
    QList<Item> itemList = items.getItemsAsList();
    m_letterPressed = letterPressed;
    m_numberPressed = numberPressed;
    totalToPay = 0;
    Item i, selectedItem;
    bool found = false;
    itemNotFound = false;
    QString enteredCode = QString(letterPressed + "%1").arg(numberPressed);
    foreach( i, itemList )
    {
        if(i.itemCode == enteredCode)
        {
           selectedItem = i;
           found = true;
        }
    }
    if(found)
    {
        ui->lblItem->setText("You have selected " + selectedItem.itemName + ".");
        ui->lblPrice->setText(QString("Insert £%L1").arg(selectedItem.itemPrice,0,'d',2));
        itemSelected = selectedItem.itemName;
        totalToPay = selectedItem.itemPrice;
    } else {
        ui->lblItem->setText("You have entered code: " + enteredCode);
        ui->lblPrice->setText("Item does not exist.");
        itemNotFound = true;
    }
}

void VendingMachine::on_btnA_clicked()
{
    processItemCode("A", m_numberPressed);
    resetLetterButtons();
    ui->btnA->setFont(selectedButton);
}

void VendingMachine::on_btnB_clicked()
{
    processItemCode("B", m_numberPressed);
    resetLetterButtons();
    ui->btnB->setFont(selectedButton);
}

void VendingMachine::on_btnC_clicked()
{
    processItemCode("C", m_numberPressed);
    resetLetterButtons();
    ui->btnC->setFont(selectedButton);
}

void VendingMachine::on_btnD_clicked()
{
    processItemCode("D", m_numberPressed);
    resetLetterButtons();
    ui->btnD->setFont(selectedButton);
}

void VendingMachine::on_btnE_clicked()
{
    processItemCode("E", m_numberPressed);
    resetLetterButtons();
    ui->btnE->setFont(selectedButton);
}

void VendingMachine::on_btnF_clicked()
{
    processItemCode("F", m_numberPressed);
    resetLetterButtons();
    ui->btnF->setFont(selectedButton);
}

void VendingMachine::on_btnG_clicked()
{
    processItemCode("G", m_numberPressed);
    resetLetterButtons();
    ui->btnG->setFont(selectedButton);
}

void VendingMachine::on_btnH_clicked()
{
    processItemCode("H", m_numberPressed);
    resetLetterButtons();
    ui->btnH->setFont(selectedButton);
}

void VendingMachine::on_btn1_clicked()
{
    processItemCode(m_letterPressed, 1);
    resetNumberButtons();
    ui->btn1->setFont(selectedButton);
}

void VendingMachine::on_btn2_clicked()
{
    processItemCode(m_letterPressed, 2);
    resetNumberButtons();
    ui->btn2->setFont(selectedButton);
}

void VendingMachine::on_btn3_clicked()
{
    processItemCode(m_letterPressed, 3);
    resetNumberButtons();
    ui->btn3->setFont(selectedButton);
}

void VendingMachine::on_btn4_clicked()
{
    processItemCode(m_letterPressed, 4);
    resetNumberButtons();
    ui->btn4->setFont(selectedButton);
}

void VendingMachine::on_btn5_clicked()
{
    processItemCode(m_letterPressed, 5);
    resetNumberButtons();
    ui->btn5->setFont(selectedButton);
}

void VendingMachine::on_btn6_clicked()
{
    processItemCode(m_letterPressed, 6);
    resetNumberButtons();
    ui->btn6->setFont(selectedButton);
}

void VendingMachine::on_btn7_clicked()
{
    processItemCode(m_letterPressed, 7);
    resetNumberButtons();
    ui->btn7->setFont(selectedButton);
}

void VendingMachine::on_btn8_clicked()
{
    processItemCode(m_letterPressed, 8);
    resetNumberButtons();
    ui->btn8->setFont(selectedButton);
}

void VendingMachine::on_btnEditItems_clicked()
{
    ItemDialog *d = new ItemDialog();
    d->exec();
    items = d->getItemList();
    setupTableData();

    m_numberPressed = 0;
    m_letterPressed = "-";
    resetLetterButtons();
    resetNumberButtons();
}

void VendingMachine::resetLetterButtons()
{
    ui->btnA->setFont(resetButton);
    ui->btnB->setFont(resetButton);
    ui->btnC->setFont(resetButton);
    ui->btnD->setFont(resetButton);
    ui->btnE->setFont(resetButton);
    ui->btnF->setFont(resetButton);
    ui->btnG->setFont(resetButton);
    ui->btnH->setFont(resetButton);
}

void VendingMachine::resetNumberButtons()
{
    ui->btn1->setFont(resetButton);
    ui->btn2->setFont(resetButton);
    ui->btn3->setFont(resetButton);
    ui->btn4->setFont(resetButton);
    ui->btn5->setFont(resetButton);
    ui->btn6->setFont(resetButton);
    ui->btn7->setFont(resetButton);
    ui->btn8->setFont(resetButton);
}

void VendingMachine::on_btnCancel_clicked()
{
    m_letterPressed = "-";
    m_numberPressed = 0;
    totalToPay = 0;
    itemNotFound = true;
    ui->lblItem->setText("Sale has been cancelled!");
    ui->lblPrice->setText("");
    resetNumberButtons();
    resetLetterButtons();
}

void VendingMachine::on_btnAddCoin_clicked()
{
    if(m_letterPressed != "-" && m_numberPressed > 0)
    {
        if(!itemNotFound)
        {
            QString coinsTxt[] = { "1p", "2p", "5p", "10p", "20p", "50p", "£1", "£2"};
            double coinsVal[] = { 0.01, 0.02, 0.05, 0.1, 0.2, 0.5, 1.0, 2.0 };

            if(ui->lstCoins->currentItem() != NULL)
            {
                QString selectedCoin = ui->lstCoins->currentItem()->text();
                for(int i = 0; i < 8; i++)
                {
                    if(coinsTxt[i] == selectedCoin)
                    {
                        totalToPay -= coinsVal[i];
                        ui->lblPrice->setText(QString("£%L1 left to pay.").arg(totalToPay,0,'d',2));
                        if(totalToPay <= 0)
                        {
                            ui->lblItem->setText("Thankyou for using this machine.\nYour " + itemSelected + " will be dispensed below.");
                            resetNumberButtons();
                            resetLetterButtons();
                            if(totalToPay != 0.0)
                            {
                                ui->lblPrice->setText(QString("Your £%L1 change is below.").arg(abs(totalToPay),0,'d',2));
                            } else {
                                ui->lblPrice->setText("");
                            }
                        }
                    }
                }
            } else {
                QMessageBox msg;
                msg.setText("Please select a coin.");
                msg.exec();
            }
       } else {
            ui->lblItem->setText("Please select an item before inserting coins!");
            ui->lblPrice->setText("");
       }
    }
}

void VendingMachine::on_btnExitApp_clicked()
{
    this->close();
}
