#ifndef ITEMLOADER_H
#define ITEMLOADER_H
#include <QWidget>
#include <QtGui/QApplication>

/**
 * @brief Structure to define an Item, contains the attributes of an item. Used in a QList to form the central data store for the application.
 *
 */
struct Item
{
    QString itemCode; /**< Name of the item. */
    QString itemName; /**< Code used on the vending machine that the customer enters. */
    double itemPrice; /**< Price of the items, displayed to the user. */
};

/**
 * @brief Class to deal with Item objects, handles the conversion of disk files into items and central storage of them.
 *
 */
class ItemLoader
{
public:
/**
 * @brief
 *
 */
    ItemLoader();
    /**
     * @brief Creates the item list from the file stored on disk. Ran on program startup.
     *
     * @return QList<Item>
     */
    QList<Item> readItemsFromFile();
    /**
     * @brief Returns a copy of the item list so it can be accessed by another widget or process in the interface.
     *
     * @return QList<Item>
     */
    QList<Item> getItemsAsList();
    /**
     * @brief Takes an item list and sorts it. The vending machine display requires the item list to be sorted.
     *
     * @param unsortedItemList
     * @return QList<Item>
     */
    QList<Item> sortItemList(QList<Item> unsortedItemList);
    /**
     * @brief Delete item from the central item list by the item code specified.
     *
     * @param itemCode
     */
    void deleteItemByItemCode(QString itemCode);
    /**
     * @brief Saves the items in the item array out to file on disk. Run this after any changes to the central item list.
     *
     */
    void saveItemsToFile();
    /**
     * @brief Add an item to the programs central item list.
     *
     * @param itemName Name of the item.
     * @param itemCode Code used on the vending machine that the customer enters.
     * @param itemPrice Price of the items, displayed to the user.
     */
    void addItem(QString itemName, QString itemCode, double itemPrice);
   // void setVendingMachine(VendingMachine m);
   // VendingMachine getVendingMachine();
    /**
     * @brief
     *
     */
    ~ItemLoader();
private:
    QList<Item> m_itemList; /**< Stores the current state of the items inside the application.
When items are saved / loaded from disk they are saved / loaded into this variable. */
    //VendingMachine machine;

};

#endif // ITEMLOADER_H
