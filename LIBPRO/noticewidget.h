#pragma once

#include <QWidget>
#include "ui_noticewidget.h"
#include "Features.h"

class noticeWidget : public QWidget, public Ui::noticeWidget
{
	Q_OBJECT

public:
	noticeWidget(QWidget *parent = Q_NULLPTR);
	~noticeWidget();
	void loadnoticeWidget(QString, QString, QString, QString);
	public slots:

	void on_yes_clicked();
	void on_no_clicked();

	signals:
private:
	Ui::noticeWidget ui;
};
