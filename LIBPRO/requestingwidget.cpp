#include "requestingwidget.h"

requestingWidget::requestingWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

requestingWidget::~requestingWidget()
{
}

void requestingWidget::loadRequestingWidget(QString id, QString bookname, QString author, QString date) {
	ui.id->setText("Code-request: " + id);
	ui.bookName->setText("Book: " + bookname);
	ui.author->setText("Author: " + author);
	ui.date->setText("Date-request: " + date);
}

void requestingWidget::on_commandLinkButton_clicked() {
	CONNECTDB
		con->setSchema(DBBOOK);
	pstmt = con->prepareStatement("update request set available = '0' where binary book_name = (?)");
	pstmt->setString(1, ui.bookName->text().remove(0, 6).toLocal8Bit().constData());
	pstmt->execute();
	delete pstmt;
	DISCONNECTDB
		close();
}

