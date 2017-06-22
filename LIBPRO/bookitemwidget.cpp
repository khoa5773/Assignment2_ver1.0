#include "bookitemwidget.h"

bookItemWidget::bookItemWidget(QWidget *parent) :
    QWidget(parent)
{
	ui.setupUi(this);
	ui.bookImg->setScaledContents(true);
	QObject::connect(ui.removeButton, SIGNAL(clicked()), this, SLOT(del()));
}

bookItemWidget::~bookItemWidget()
{
}

void bookItemWidget::loadbook(QString name, QString id, QString author, QString type) {
	ui.bookName->setText(name);
	ui.bookImg->setStyleSheet(QStringLiteral("border-image: url(:/LIBPRO/img/") + id + QStringLiteral(".jpg);"));
	ui.bookAuthor->setText(author + " - " + type);
}

void bookItemWidget::del() {
	delBook(ui.bookName->text());
	close();
}

void bookItemWidget::on_editButton_clicked() {
	inform = new informationDialog(ui.bookName->text(),this);
	inform->show();
}