#ifndef VENDINGMACHINE_H
#define VENDINGMACHINE_H

#include <QWidget>
#include <QtGui/QApplication>
#include "itemloader.h"

namespace Ui {
class VendingMachine;
}

/**
 * @brief Main vending machine operation window.
 *
 */
class VendingMachine : public QWidget
{
    Q_OBJECT
    
public:
    /**
     * @brief Initializes variables and item list data.
     *
     * @param parent
     */
    explicit VendingMachine(QWidget *parent = 0);
    /**
     * @brief Populate main table view with vending machine items.
     *
     */
    void setupTableData();
    /**
     * @brief Cleans up the UI.
     *
     */
    ~VendingMachine();
    
private slots:
    /**
     * @brief Reset lettered buttons (first column) to their default fonts. Issued prior to setting the font on the newly selected button.
     *
     */
    void resetLetterButtons();
    /**
     * @brief Reset numbered buttons (second column) to their default fonts. Issued prior to setting the font on the newly selected button.
     *
     */
    void resetNumberButtons();
    /**
     * @brief Processes item selection, returns text specifying item price etc if item exists, if item doesn't exist display error.
     *
     * @param QString
     * @param int
     */
    void processItemCode(QString, int);

    /**
     * @brief
     *
     */
    void on_btnA_clicked();

    /**
     * @brief
     *
     */
    void on_btnB_clicked();

    /**
     * @brief
     *
     */
    void on_btnC_clicked();

    /**
     * @brief
     *
     */
    void on_btnD_clicked();

    /**
     * @brief
     *
     */
    void on_btnE_clicked();

    /**
     * @brief
     *
     */
    void on_btnF_clicked();

    /**
     * @brief
     *
     */
    /**
     * @brief
     *
     */
    void on_btnG_clicked();

    /**
     * @brief
     *
     */
    void on_btnH_clicked();

    /**
     * @brief
     *
     */
    void on_btn1_clicked();

    /**
     * @brief
     *
     */
    void on_btn2_clicked();

    /**
     * @brief
     *
     */
    void on_btn3_clicked();

    /**
     * @brief
     *
     */
    void on_btn4_clicked();

    /**
     * @brief
     *
     */
    void on_btn5_clicked();

    /**
     * @brief
     *
     */
    void on_btn6_clicked();

    /**
     * @brief
     *
     */
    void on_btn7_clicked();

    /**
     * @brief
     *
     */
    void on_btn8_clicked();

    /**
     * @brief
     *
     */
    void on_btnEditItems_clicked();

    /**
     * @brief
     *
     */
    void on_btnCancel_clicked();

    /**
     * @brief
     *
     */
    void on_btnAddCoin_clicked();

    /**
     * @brief
     *
     */
    void on_btnExitApp_clicked();

private:
    QFont selectedButton; /**< TODO */
    QFont resetButton; /**< TODO */
    QString m_letterPressed; /**< TODO */
    QString itemSelected; /**< TODO */
    int m_numberPressed; /**< TODO */
    double totalToPay; /**< TODO */
    bool itemNotFound; /**< TODO */
    ItemLoader items; /**< Central item store list */

    Ui::VendingMachine *ui; /**< TODO */
};

#endif // VENDINGMACHINE_H
