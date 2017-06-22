#pragma once

#include <QWidget>
#include "ui_usermenu.h"
#include "Features.h"
#include "stardelegate.h"
#include "stareditor.h"
#include "starrating.h"
#include "requestingwidget.h"

#define COPYLIST ui.listCurrentItem->clear(); \
for (int i = 0; i < ui.listWidget_3->count(); ++i) { \
ui.listCurrentItem->addItem(ui.listWidget_3->item(i)->clone()); \
	}
#define UPDATETOTAL borrowing = getBorrowNum(getUser_now()); \
requested = getRequestNum(getUser_now()); \
int total = borrowing + requested; \
ui.borrowed->setText("Borrowing:" + QString::fromStdString(to_string(borrowing))); \
ui.remain->setText("Requested:" + QString::fromStdString(to_string(requested))); \
ui.total->setText("Total:" + QString::fromStdString(to_string(total))); 

class UserMenu : public QWidget, public Ui::UserMenu
{
	Q_OBJECT

public:
	UserMenu(QWidget *parent = Q_NULLPTR);
	~UserMenu();
	//LIBPRO *mainPage = NULL;

	void setupRequestingWidget();
	void setupNewBook();

public slots:
void update();
void exit();
//void on_exitButton_clicked();
void on_findBookButton_clicked();
void on_historyButton_clicked();
void on_returnButton_clicked();
void on_returnButton2_clicked();
void on_profileButton_clicked();

// profile menu function
void on_changeButton_clicked();
void on_saveButton_clicked();
void on_searchButton_clicked();

// find button and cart function
void on_listWidget_2_itemClicked();
void on_relatedItem_itemClicked();
void on_addButton_clicked();
void on_listWidget_3_itemClicked();
void on_removeButton_clicked();
void on_listWidget_2_itemDoubleClicked();
void on_returnButton_2_clicked();
void on_addButton_2_clicked();
void on_relatedItem_itemDoubleClicked();
void on_borrowButton_clicked();
void on_tableBook_itemClicked();
void on_returnButton_3_clicked();

bool checkBookItemExist(QListWidgetItem*, QListWidget*);
signals:

private:
	Ui::UserMenu ui;
	int borrowing = getBorrowNum(getUser_now());
	int requested = getRequestNum(getUser_now());
};