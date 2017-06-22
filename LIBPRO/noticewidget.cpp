#include "noticewidget.h"

noticeWidget::noticeWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.img->setScaledContents(true);
}

noticeWidget::~noticeWidget()
{
}

void noticeWidget::loadnoticeWidget(QString code, QString bookname, QString username, QString time) {
	ui.code->setText("Code-request: " + code);
	ui.bookname->setText(bookname);
	ui.username->setText("User: " + username);
	ui.img->setPixmap(":/LIBPRO/img/" + getbookID(bookname) + ".jpg");
	ui.time->setText("Request has been sent " + time + " ago");
}

void noticeWidget::on_yes_clicked() {
	QString book_name;
	QString author;
	QString rating;
	QString link;
	CONNECTDB
		con->setSchema(DBBOOK);
	pstmt = con->prepareStatement("select * from book_admin.book where binary book_name = (?)");
	pstmt->setString(1, ui.bookname->text().toLocal8Bit().constData());
	res = pstmt->executeQuery();
	while (res->next()) {
		book_name = res->getString("book_name").c_str();
		author = res->getString("author_name").c_str();
		rating = res->getString("rating").c_str();
		link = res->getString("link").c_str();
	}
	delete pstmt;
	pstmt = con->prepareStatement("call book_admin.getBook(?,?,?,?,?)");
	pstmt->setString(1, book_name.toLocal8Bit().constData());
	pstmt->setString(2, author.toLocal8Bit().constData());
	pstmt->setString(3, rating.toLocal8Bit().constData());
	pstmt->setString(4, link.toLocal8Bit().constData());
	pstmt->setString(5, ui.username->text().remove(0,6).toLocal8Bit().constData());
	pstmt->execute();
	delete pstmt;
	pstmt = con->prepareStatement("update request set available = '0' where binary book_name = (?)");
	pstmt->setString(1, ui.bookname->text().toLocal8Bit().constData());
	pstmt->execute();
	delete pstmt;
	delete res;
	DISCONNECTDB
		close();
}

void noticeWidget::on_no_clicked() {
	CONNECTDB
		con->setSchema(DBBOOK);
	pstmt = con->prepareStatement("update request set available = '0' where binary book_name = (?)");
	pstmt->setString(1, ui.bookname->text().toLocal8Bit().constData());
	pstmt->execute();
	delete pstmt;
	DISCONNECTDB
		close();
}