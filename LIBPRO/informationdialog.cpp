#include "informationdialog.h"

informationDialog::informationDialog(QString a,QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	book = a;
	loadInfoBook(book);
	id = getbookID(book);
}

informationDialog::~informationDialog()
{
}

void informationDialog::loadInfoBook(QString bookname) {
	ui.img->setPixmap(":/LIBPRO/img/" + getbookID(bookname) + ".jpg");
	ui.bookname->setText(bookname);
	ui.author->setText(getBookInfo(bookname).at(2));
	ui.type->setText(getBookInfo(bookname).at(3));
	ui.link->setText(getBookInfo(bookname).at(6));
	ui.rating->setText(getBookInfo(bookname).at(5));
	ui.summary->setText(getBookInfo(bookname).at(7));
	ui.review->setText(getBookInfo(bookname).at(8));
}

void informationDialog::on_yes_clicked() {
	CONNECTDB
		con->setSchema(DBBOOK);
	pstmt = con->prepareStatement("update book set book_name = (?) and author_name = (?) and type = (?) and link = (?) and rating = (?) and summary = (?) and review = (?) where binary id = (?)");
	pstmt->setString(1, ui.bookname->text().toLocal8Bit().constData());
	pstmt->setString(2, ui.author->text().toLocal8Bit().constData());
	pstmt->setString(3, ui.type->text().toLocal8Bit().constData());
	pstmt->setString(4, ui.link->text().toLocal8Bit().constData());
	pstmt->setDouble(5, ui.rating->text().toDouble());
	pstmt->setString(6, ui.summary->toPlainText().toLocal8Bit().constData());
	pstmt->setString(7, ui.review->toPlainText().toLocal8Bit().constData());
	pstmt->setInt(7, id.toInt());
	pstmt->execute();
	delete pstmt;
	DISCONNECTDB
		close();
	QMessageBox::information(this, "Success", "You have just edited the book");
}

void informationDialog::on_no_clicked() {
	close();
}