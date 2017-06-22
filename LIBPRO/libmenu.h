#pragma once

#include <QWidget>
#include "ui_libmenu.h"
#include "Features.h"
#include "bookitemwidget.h"
#include <QFileDialog>
#include "noticewidget.h"

class Libmenu : public QWidget, public Ui::Libmenu
{
	Q_OBJECT

public:
	Libmenu(QWidget *parent = Q_NULLPTR);
	~Libmenu();
	void getNewBook();
	void setupBookWidget(QString);
	void setupNoticeWidget();
public slots:
	void add();
	void on_pushButton_4_clicked();
	void on_searchButton_clicked();
	void on_buttonLogout_clicked();
	signals:
private:
	Ui::Libmenu ui;
};
