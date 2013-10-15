#include "item.h"

Item::Item()
{
}
#include "itemloader.h"

Item::Item()
{
    readItemsFromFile();
}

QList<Item> Item::readItemsFromFile()
{
    QFile f("items.csv");
    QStringList vals;
    if (f.open(QIODevice::ReadOnly))
    {
      //file opened successfully
      QString data;
      data = f.readAll();
      vals = data.split(',');
      f.close();
    }
    for (int row = 0; row < 2; row++ )
    {
       Item newItem;
       newItem.itemName = vals[row];
       newItem.itemCode = vals[row + 1];
       newItem.itemPrice = vals[row + 2].toDouble();
       itemList.append(newItem);
    }

    return itemList;

    //now to change stuff!
   // myList[0].parameter2.value1 = "a new value";
}

QList<Item> ItemLoader::getItems()
{

}
