#pragma once

#include <QWidget>
#include "ui_usermenu.h"

class UserMenu : public QWidget, public Ui::UserMenu
{
	Q_OBJECT

public:
	UserMenu(QString user, QWidget *parent = Q_NULLPTR);
	~UserMenu();
	//LIBPRO *mainPage = NULL;

public
slots:
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
void on_addButton_clicked();
void on_listWidget_3_itemClicked();
void on_removeButton_clicked();


private:
	Ui::UserMenu ui;
	QString* user;
};
