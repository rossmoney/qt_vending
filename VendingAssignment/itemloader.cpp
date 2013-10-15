#include <QWidget>
#include <QFile>
#include <QDir>
#include <QtGui/QApplication>
#include "itemloader.h"
#include "vendingmachine.h"

ItemLoader::ItemLoader()
{
    readItemsFromFile();
}

ItemLoader::~ItemLoader()
{
    //delete m_itemList;
}

QList<Item> ItemLoader::sortItemList(QList<Item> unsortedItemList)
{
    QList<Item> sortedItemList;
    Item unsortedItem;
    QStringList itemCodes;
    QStringList unsortedCodes;
    foreach (unsortedItem , unsortedItemList )
    {
        itemCodes << unsortedItem.itemCode;
    }
    unsortedCodes = itemCodes;
    int i = 0;
    qSort(itemCodes.begin(), itemCodes.end());
    QString unsorted, code;
    foreach (code , itemCodes )
    {
        i = 0;
        foreach (unsorted, unsortedCodes)
        {
            if(unsorted == code)
            {
                Item newItem;
                newItem.itemName = unsortedItemList[i].itemName;
                newItem.itemCode = code;
                newItem.itemPrice = unsortedItemList[i].itemPrice;
                sortedItemList << newItem;
            }
            i++;
        }
    }
    return sortedItemList;
}

QList<Item> ItemLoader::readItemsFromFile()
{
    QString path = QCoreApplication::applicationDirPath();
    path.append("/items.csv");
    QFile f(path);
    QStringList row, lines;
    if (f.open(QIODevice::ReadOnly))
    {
      //file opened successfully
      QString data;
      data = f.readAll();
      lines = data.split('\n');
      f.close();
    }

    QList<Item> itemList;

    if(lines.length() > 0)
    {
        itemList.empty();
        for (int line = 0; line < lines.length(); line++ )
        {
            if(lines[line] != "")
            {
            row = lines[line].split(',');
            if(row.length() > 0)
            {
                Item newItem;
                newItem.itemName = row[0];
                newItem.itemCode = row[1];
                newItem.itemPrice = row[2].toDouble();
                itemList << newItem;
            }
            }
        }
    }

    itemList = sortItemList(itemList);

    m_itemList = itemList;
    return itemList;

    //now to change stuff!
   // myList[0].parameter2.value1 = "a new value";
}

QList<Item> ItemLoader::getItemsAsList()
{
    return m_itemList;
}

/*VendingMachine ItemLoader::getVendingMachine()
{
    return machine;
}

void ItemLoader::setVendingMachine(VendingMachine m)
{
    machine = m;
}*/

void ItemLoader::addItem(QString itemName, QString itemCode, double itemPrice)
{
    Item newItem;
    newItem.itemCode = itemCode;
    newItem.itemName = itemName;
    newItem.itemPrice = itemPrice;
    m_itemList.append(newItem);
    m_itemList = sortItemList(m_itemList);
    saveItemsToFile();
}

void ItemLoader::deleteItemByItemCode(QString itemCode)
{
    for(int i = 0; i < m_itemList.length(); i++)
    {
        if(m_itemList[i].itemCode == itemCode)
        {
            m_itemList.removeAt(i);
            saveItemsToFile();
        }
    }
}

void ItemLoader::saveItemsToFile()
{
    QString path = QCoreApplication::applicationDirPath();
    path.append("/items.csv");
    QFile f(path);
    if (f.open(QIODevice::WriteOnly))
    {
        for(int i = 0; i < m_itemList.length(); i++)
        {
            QString line = m_itemList[i].itemName + "," + m_itemList[i].itemCode + "," + QString::number(m_itemList[i].itemPrice) + "\r\n";
            //file opened successfully
            f.write(line.toStdString().c_str());
        }
        f.close();
    }
}
