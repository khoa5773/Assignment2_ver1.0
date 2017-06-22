#ifndef BOOKITEMWIDGET_H
#define BOOKITEMWIDGET_H

#include <QWidget>
#include <ui_bookitemwidget.h>
#include "Features.h"
#include "informationdialog.h"

class bookItemWidget : public QWidget, public Ui::bookItemWidget
{
    Q_OBJECT

public:
    explicit bookItemWidget(QWidget *parent = 0);
    ~bookItemWidget();
	void loadbook(QString, QString, QString, QString);
	public slots:
	void del();
	void on_editButton_clicked();
private:
    Ui::bookItemWidget ui;
	informationDialog *inform;
};

#endif // BOOKITEMWIDGET_H
