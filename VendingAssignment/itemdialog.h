#ifndef ITEMDIALOG_H
#define ITEMDIALOG_H

#include <QDialog>
#include "itemloader.h"

namespace Ui {
class ItemDialog;
}

/**
 * @brief Widget to allow the user to edit Items and add new Items to the vending machine.
 *
 */
class ItemDialog : public QDialog
{
    Q_OBJECT
    
public:
    /**
     * @brief
     *
     * @param parent
     */
    explicit ItemDialog(QWidget *parent = 0);
    /**
     * @brief Gets vending machine items from the the ItemLoader class for use in the dialog if any changes are made.
     *
     * @return ItemLoader
     */
    ItemLoader getItemList();
    /**
     * @brief
     *
     */
    ~ItemDialog();
    
private slots:

    /**
     * @brief Updates the table of items after items have been added to the central item store.
     *
     */
    void refreshItemTable();

    /**
     * @brief
     *
     */
    void on_btnClearFields_clicked();

    /**
     * @brief
     *
     */
    void on_btnClose_clicked();

    /**
     * @brief
     *
     */
    void on_btnDeleteItem_clicked();

    /**
     * @brief
     *
     */
    void on_btnAddItem_clicked();

private:
    ItemLoader items; /**< Instance of the central item list, retrieved from ItemLoader. */
    Ui::ItemDialog *ui; /**< TODO */
};

#endif // ITEMDIALOG_H
