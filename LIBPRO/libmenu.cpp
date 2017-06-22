#include "libmenu.h"

Libmenu::Libmenu(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setupBookWidget("%");
	setupNoticeWidget();
	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(add()));
	QObject::connect(ui.searchLine, SIGNAL(returnPressed()), ui.searchButton, SIGNAL(clicked()));
}

Libmenu::~Libmenu()
{
}

void Libmenu::setupBookWidget(QString key) {
	QLayoutItem *item;
	while ((item = ui.verticalLayout_2->takeAt(0))) {
		if (item->widget()) {
			delete item->widget();
		}
		delete item;
	}
	key = "%" + key + "%";
	CONNECTDB
		con->setSchema(DBBOOK);
	pstmt = con->prepareStatement("select * from book where book_name like (?) order by book_name");
	pstmt->setString(1, key.toLocal8Bit().constData());
	res = pstmt->executeQuery();
	while (res->next()) {
		QString name = res->getString("book_name").c_str();
		QString id = res->getString("id").c_str();
		QString author = res->getString("author_name").c_str();
		QString rating = res->getString("rating").c_str();
		QString type = res->getString("type").c_str();
		QString releaseDate = res->getString("release_date").c_str();
		bookItemWidget* book;
		book = new bookItemWidget();
		book->loadbook(name, id, author, type);
		book->setFixedSize(1180, 250);
		ui.verticalLayout_2->addWidget(book);
		ui.verticalLayout_2->addStretch(1);
	}
	delete pstmt;
	delete res;
	DISCONNECTDB
}

void Libmenu::getNewBook() {
	CONNECTDB
		con->setSchema(DBBOOK);
	pstmt = con->prepareStatement("call getNewBook(?,?,?,?,?,?,?,?)");
	pstmt->setString(1, ui.nameEdit->text().toLocal8Bit().constData());
	pstmt->setString(2, ui.authorEdit->text().toLocal8Bit().constData());
	pstmt->setString(3, ui.typeEdit->text().toLocal8Bit().constData());
	pstmt->setString(4, ui.dateEdit->text().toLocal8Bit().constData());
	pstmt->setString(5, ui.ratingEdit->text().toLocal8Bit().constData());
	pstmt->setString(6, ui.linkEdit->text().toLocal8Bit().constData());
	pstmt->setString(7, ui.summary->toPlainText().toLocal8Bit().constData());
	pstmt->setString(8, ui.review->toPlainText().toLocal8Bit().constData());
	pstmt->execute();
	delete pstmt;
	DISCONNECTDB
		QString imagePath = QFileDialog::getSaveFileName(this, "Save");
	ui.book_Img->pixmap()->toImage().save(imagePath);
}

void Libmenu::on_pushButton_4_clicked() {
	QString filename = QFileDialog::getOpenFileName(this, "Choose Image");
	QFile file(filename);
	if (!file.open(QFile::ReadOnly | QFile::Text)) {
		QMessageBox::warning(this, "..", "File can't be opened");
		return;
	}
	QPixmap image(filename);
	ui.book_Img->setPixmap(image);
	ui.book_Img->setScaledContents(true);
}

void Libmenu::add() {
	getNewBook();
	QMessageBox::information(this, "Success", "You added a new book. Congratulation!!!");
	ui.authorEdit->clear();
	ui.dateEdit->clear();
	ui.linkEdit->clear();
	ui.nameEdit->clear();
	ui.ratingEdit->clear();
	ui.typeEdit->clear();
	ui.review->clear();
	ui.summary->clear();
}

void Libmenu::on_searchButton_clicked() {
	setupBookWidget(ui.searchLine->text());
}

void Libmenu::setupNoticeWidget() {
	CONNECTDB
		con->setSchema(DBBOOK);
	pstmt = con->prepareStatement("select *,hour(timediff(now(),date_request)),minute(timediff(now(),date_request)) from request where binary available ='1' order by date_request");
	res = pstmt->executeQuery();
	while (res->next()) {
		QString code = res->getString("masach").c_str();
		QString bookname = res->getString("book_name").c_str();
		QString username = res->getString("account").c_str();
		QString time;
		int hour = res->getInt("hour(timediff(now(),date_request))");
		if (hour > 0)
		{
			if (hour == 1) {
				time = QString::fromStdString(to_string(hour)) + " hour";
			}
			else if (hour < 24) {
				time = QString::fromStdString(to_string(hour)) + " hours";
			}
			else {
				int day = hour / 24;
				if (day == 1) {
					time = QString::fromStdString(to_string(day)) + " day";
				}else
				time = QString::fromStdString(to_string(day)) + " days";
			}
		}
		else {
			int minute = res->getInt("minute(timediff(now(),date_request))");
			if (minute < 1) {
				time = "few seconds";
			}
			else if (minute == 1) {
				time = QString::fromStdString(to_string(minute)) + " minute";
			}
			else {
				time = QString::fromStdString(to_string(minute)) + " minutes";
			}
		}
		noticeWidget *notice = new noticeWidget();
		notice->loadnoticeWidget(code, bookname, username, time);
		notice->setFixedSize(1180, 200);
		ui.verticalLayout_3->addWidget(notice);
		ui.verticalLayout_3->addStretch(1);
	}
	delete pstmt;
	delete res;
	DISCONNECTDB
}

void Libmenu::on_buttonLogout_clicked() {
	close();
}