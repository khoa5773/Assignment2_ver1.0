/********************************************************************************
** Form generated from reading UI file 'libmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBMENU_H
#define UI_LIBMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Libmenu
{
public:
    QPushButton *buttonLogout;
    QTabWidget *tabWidget;
    QWidget *All_book;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *searchLine;
    QCommandLinkButton *searchButton;
    QWidget *Add_book;
    QPushButton *pushButton_4;
    QLabel *book_Img;
    QLabel *type;
    QLabel *date;
    QLineEdit *typeEdit;
    QLineEdit *nameEdit;
    QLineEdit *authorEdit;
    QLabel *name;
    QLineEdit *dateEdit;
    QLabel *author;
    QLabel *rating;
    QLineEdit *borrowEdit;
    QLineEdit *ratingEdit;
    QLabel *number;
    QLineEdit *linkEdit;
    QLabel *link;
    QLabel *label_21;
    QPlainTextEdit *summary;
    QLabel *label_22;
    QPlainTextEdit *review;
    QPushButton *pushButton;
    QWidget *Book_request;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *aboutButton;

    void setupUi(QWidget *Libmenu)
    {
        if (Libmenu->objectName().isEmpty())
            Libmenu->setObjectName(QStringLiteral("Libmenu"));
        Libmenu->resize(1280, 907);
        Libmenu->setStyleSheet(QLatin1String("#Libmenu {	\n"
"border-image: url(:/LIBPRO/pattern-5_blur.png);\n"
"}\n"
"\n"
"QPushButton {	\n"
"	border-radius: 40px;\n"
"	background-color: qlineargradient(spread:reflect, x1:0.669951, y1:0.727273, x2:0, y2:0, stop:0 rgba(168, 237, 205, 255), stop:0.492611 rgba(255, 255, 255, 255));\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 rgb(212, 236, 215));\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}\n"
"\n"
"\n"
"QLineEdit {\n"
"	border: 1px solid grey;\n"
"	border-radius: 7px;\n"
"    width: 200px;\n"
"    height: 150px;\n"
"}\n"
"\n"
"QLabel {\n"
"	color: #646568;\n"
"	font-size: 14px;\n"
"	font-weight: bold;\n"
"	font-family: \"Bangla Sangam MN\";\n"
"}"));
        buttonLogout = new QPushButton(Libmenu);
        buttonLogout->setObjectName(QStringLiteral("buttonLogout"));
        buttonLogout->setGeometry(QRect(1160, 10, 64, 60));
        buttonLogout->setCursor(QCursor(Qt::PointingHandCursor));
        buttonLogout->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        QIcon icon;
        icon.addFile(QStringLiteral("power-button-md.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonLogout->setIcon(icon);
        buttonLogout->setIconSize(QSize(60, 60));
        tabWidget = new QTabWidget(Libmenu);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(-1, 75, 1281, 831));
        All_book = new QWidget();
        All_book->setObjectName(QStringLiteral("All_book"));
        scrollArea = new QScrollArea(All_book);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(30, 90, 1221, 701));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1221, 701));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        scrollArea->setWidget(scrollAreaWidgetContents);
        searchLine = new QLineEdit(All_book);
        searchLine->setObjectName(QStringLiteral("searchLine"));
        searchLine->setGeometry(QRect(60, 30, 1091, 41));
        QFont font;
        font.setFamily(QStringLiteral("Lucida Calligraphy"));
        font.setPointSize(18);
        searchLine->setFont(font);
        searchLine->setFocusPolicy(Qt::StrongFocus);
        searchLine->setClearButtonEnabled(true);
        searchButton = new QCommandLinkButton(All_book);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(1160, 20, 51, 61));
        searchButton->setCursor(QCursor(Qt::PointingHandCursor));
        searchButton->setMouseTracking(true);
        searchButton->setStyleSheet(QLatin1String("border: none;\n"
"border-radius: 15px;\n"
"background: transparent;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("search_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton->setIcon(icon1);
        searchButton->setIconSize(QSize(40, 60));
        tabWidget->addTab(All_book, QString());
        Add_book = new QWidget();
        Add_book->setObjectName(QStringLiteral("Add_book"));
        pushButton_4 = new QPushButton(Add_book);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(220, 410, 101, 41));
        pushButton_4->setStyleSheet(QStringLiteral("border-radius: 20px;"));
        book_Img = new QLabel(Add_book);
        book_Img->setObjectName(QStringLiteral("book_Img"));
        book_Img->setGeometry(QRect(80, 50, 221, 341));
        type = new QLabel(Add_book);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(400, 130, 47, 16));
        date = new QLabel(Add_book);
        date->setObjectName(QStringLiteral("date"));
        date->setGeometry(QRect(780, 130, 111, 20));
        typeEdit = new QLineEdit(Add_book);
        typeEdit->setObjectName(QStringLiteral("typeEdit"));
        typeEdit->setGeometry(QRect(450, 120, 231, 41));
        nameEdit = new QLineEdit(Add_book);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setGeometry(QRect(450, 50, 231, 41));
        authorEdit = new QLineEdit(Add_book);
        authorEdit->setObjectName(QStringLiteral("authorEdit"));
        authorEdit->setGeometry(QRect(890, 50, 231, 31));
        name = new QLabel(Add_book);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(400, 60, 47, 13));
        name->setStyleSheet(QStringLiteral(""));
        dateEdit = new QLineEdit(Add_book);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(890, 120, 231, 31));
        author = new QLabel(Add_book);
        author->setObjectName(QStringLiteral("author"));
        author->setGeometry(QRect(830, 60, 61, 21));
        rating = new QLabel(Add_book);
        rating->setObjectName(QStringLiteral("rating"));
        rating->setGeometry(QRect(620, 200, 51, 16));
        borrowEdit = new QLineEdit(Add_book);
        borrowEdit->setObjectName(QStringLiteral("borrowEdit"));
        borrowEdit->setGeometry(QRect(510, 180, 41, 41));
        ratingEdit = new QLineEdit(Add_book);
        ratingEdit->setObjectName(QStringLiteral("ratingEdit"));
        ratingEdit->setGeometry(QRect(670, 180, 41, 41));
        number = new QLabel(Add_book);
        number->setObjectName(QStringLiteral("number"));
        number->setGeometry(QRect(400, 200, 101, 16));
        linkEdit = new QLineEdit(Add_book);
        linkEdit->setObjectName(QStringLiteral("linkEdit"));
        linkEdit->setGeometry(QRect(450, 245, 671, 41));
        link = new QLabel(Add_book);
        link->setObjectName(QStringLiteral("link"));
        link->setGeometry(QRect(400, 250, 31, 21));
        label_21 = new QLabel(Add_book);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(400, 500, 61, 21));
        summary = new QPlainTextEdit(Add_book);
        summary->setObjectName(QStringLiteral("summary"));
        summary->setGeometry(QRect(470, 310, 651, 151));
        label_22 = new QLabel(Add_book);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(390, 310, 61, 21));
        review = new QPlainTextEdit(Add_book);
        review->setObjectName(QStringLiteral("review"));
        review->setGeometry(QRect(470, 490, 651, 161));
        pushButton = new QPushButton(Add_book);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(980, 690, 151, 41));
        tabWidget->addTab(Add_book, QString());
        Book_request = new QWidget();
        Book_request->setObjectName(QStringLiteral("Book_request"));
        scrollArea_2 = new QScrollArea(Book_request);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(30, 30, 1221, 741));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollArea_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 1221, 741));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        tabWidget->addTab(Book_request, QString());
        aboutButton = new QPushButton(Libmenu);
        aboutButton->setObjectName(QStringLiteral("aboutButton"));
        aboutButton->setGeometry(QRect(1050, 0, 111, 71));
        aboutButton->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/LIBPRO/Alecive-Flatwoken-Apps-Help-Info.ico"), QSize(), QIcon::Normal, QIcon::Off);
        aboutButton->setIcon(icon2);
        aboutButton->setIconSize(QSize(70, 70));

        retranslateUi(Libmenu);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Libmenu);
    } // setupUi

    void retranslateUi(QWidget *Libmenu)
    {
        Libmenu->setWindowTitle(QApplication::translate("Libmenu", "Libmenu", Q_NULLPTR));
        buttonLogout->setText(QString());
        searchLine->setText(QString());
        searchLine->setPlaceholderText(QApplication::translate("Libmenu", "Search books", Q_NULLPTR));
        searchButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(All_book), QApplication::translate("Libmenu", "All book", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Libmenu", "Choose File", Q_NULLPTR));
        book_Img->setText(QApplication::translate("Libmenu", "*Book Image*", Q_NULLPTR));
        type->setText(QApplication::translate("Libmenu", "Type", Q_NULLPTR));
        date->setText(QApplication::translate("Libmenu", "Date Released", Q_NULLPTR));
        name->setText(QApplication::translate("Libmenu", "Name", Q_NULLPTR));
        author->setText(QApplication::translate("Libmenu", "Author", Q_NULLPTR));
        rating->setText(QApplication::translate("Libmenu", "Rating", Q_NULLPTR));
        borrowEdit->setText(QApplication::translate("Libmenu", "5", Q_NULLPTR));
        number->setText(QApplication::translate("Libmenu", "Max Borrowed", Q_NULLPTR));
        link->setText(QApplication::translate("Libmenu", "Link", Q_NULLPTR));
        label_21->setText(QApplication::translate("Libmenu", "Review", Q_NULLPTR));
        label_22->setText(QApplication::translate("Libmenu", "Sumary", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Libmenu", "Add", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Add_book), QApplication::translate("Libmenu", "Add book", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Book_request), QApplication::translate("Libmenu", "Book requests", Q_NULLPTR));
        aboutButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Libmenu: public Ui_Libmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBMENU_H
