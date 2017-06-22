/********************************************************************************
** Form generated from reading UI file 'usermenu.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMENU_H
#define UI_USERMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserMenu
{
public:
    QStackedWidget *stackedWidget;
    QWidget *menuPage;
    QListWidget *newBook;
    QLabel *lastLogin;
    QPushButton *findBookButton;
    QPushButton *historyButton;
    QPushButton *exitButton;
    QLabel *label_6;
    QLabel *label_21;
    QLabel *label_22;
    QPushButton *profileButton;
    QLabel *labelHello;
    QLabel *label_23;
    QPushButton *aboutButton;
    QLineEdit *lineEdit;
    QWidget *searchPage;
    QLineEdit *searchLine;
    QListWidget *listWidget_2;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QLabel *borrowed;
    QLabel *remain;
    QLabel *total;
    QListWidget *listWidget_3;
    QCommandLinkButton *returnButton;
    QCommandLinkButton *searchButton;
    QCommandLinkButton *addButton;
    QCommandLinkButton *removeButton;
    QCommandLinkButton *borrowButton;
    QLabel *label_14;
    QWidget *informationPage;
    QGroupBox *groupBox;
    QPushButton *saveButton;
    QPushButton *changeButton;
    QLabel *label_3;
    QLineEdit *lineUser_info;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_10;
    QLineEdit *lineNickname_info;
    QLineEdit *linePass_info;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *linePhone_info;
    QLabel *label_18;
    QLabel *label_5;
    QLabel *label_19;
    QLineEdit *lineStudentNumber_info;
    QLabel *label_17;
    QLabel *label_20;
    QLineEdit *lineEmail_info;
    QCommandLinkButton *returnButton2;
    QLabel *label_8;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *page;
    QTableWidget *tableBook;
    QLabel *label_7;
    QCommandLinkButton *returnButton_3;
    QLabel *label_9;
    QWidget *bookDetail;
    QLabel *bookImg;
    QLabel *bookName;
    QLabel *author;
    QLabel *label_11;
    QListWidget *relatedItem;
    QCommandLinkButton *addButton_2;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *bookRelease;
    QFrame *line;
    QScrollArea *scrollArea;
    QWidget *scrollArea_2;
    QTextEdit *textEdit_2;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents;
    QTextEdit *textEdit;
    QListWidget *rating;
    QCommandLinkButton *returnButton_2;
    QLabel *quotes;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;

    void setupUi(QWidget *UserMenu)
    {
        if (UserMenu->objectName().isEmpty())
            UserMenu->setObjectName(QStringLiteral("UserMenu"));
        UserMenu->setWindowModality(Qt::ApplicationModal);
        UserMenu->resize(1280, 907);
        UserMenu->setMinimumSize(QSize(150, 40));
        QIcon icon;
        icon.addFile(QStringLiteral(":/LIBPRO/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        UserMenu->setWindowIcon(icon);
        UserMenu->setStyleSheet(QStringLiteral(""));
        stackedWidget = new QStackedWidget(UserMenu);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1281, 907));
        stackedWidget->setCursor(QCursor(Qt::ArrowCursor));
        stackedWidget->setLayoutDirection(Qt::LeftToRight);
        stackedWidget->setAutoFillBackground(false);
        stackedWidget->setStyleSheet(QLatin1String("#stackedWidget{\n"
"\n"
"	border-image: url(:/LIBPRO/pattern-5.png);\n"
"}\n"
"\n"
"\n"
"#changeButton::hover{\n"
"	color: #0846b2;\n"
"	font-family: monospace;\n"
"	text-decoration: underline;\n"
"}\n"
"\n"
"#saveButton::hover{\n"
"	color: #0846b2;\n"
"	font-family: monospace;\n"
"	text-decoration: underline;\n"
"}\n"
"\n"
"QCommandLinkButton::hover{\n"
"	background-color:#0846b2;\n"
"}\n"
"\n"
"QPushButton {	\n"
"	\n"
"	background-color: qlineargradient(spread:reflect, x1:0.669951, y1:0.727273, x2:0, y2:0, stop:0 rgba(168, 237, 205, 255), stop:0.492611 rgba(255, 255, 255, 255));\n"
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
"QListWidget{\n"
"background: rgba(66, 244, 220,0.3);\n"
"}\n"
"\n"
"QLabel{\n"
"backgroun"
                        "d: transparent;\n"
"}\n"
"\n"
"QLineEdit{\n"
"padding: 5px;\n"
"font-size:16px;\n"
"}\n"
"\n"
"\n"
""));
        menuPage = new QWidget();
        menuPage->setObjectName(QStringLiteral("menuPage"));
        menuPage->setStyleSheet(QLatin1String("#menuPage{ \n"
"	\n"
"	border-image: url(:/LIBPRO/pattern-5_blur.png);\n"
"}"));
        newBook = new QListWidget(menuPage);
        newBook->setObjectName(QStringLiteral("newBook"));
        newBook->setGeometry(QRect(100, 330, 621, 521));
        QFont font;
        font.setFamily(QStringLiteral("Gadugi"));
        font.setPointSize(20);
        newBook->setFont(font);
        newBook->setStyleSheet(QStringLiteral("border-image: url(:/LIBPRO/54ff9839a81fa-books-rowling-de.jpg);"));
        newBook->setFrameShape(QFrame::NoFrame);
        newBook->setIconSize(QSize(80, 80));
        newBook->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        newBook->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        newBook->setWordWrap(true);
        newBook->setSortingEnabled(true);
        lastLogin = new QLabel(menuPage);
        lastLogin->setObjectName(QStringLiteral("lastLogin"));
        lastLogin->setGeometry(QRect(920, 90, 221, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Gadugi"));
        font1.setPointSize(10);
        lastLogin->setFont(font1);
        lastLogin->setStyleSheet(QStringLiteral("color: rgb(0, 255, 0);"));
        findBookButton = new QPushButton(menuPage);
        findBookButton->setObjectName(QStringLiteral("findBookButton"));
        findBookButton->setGeometry(QRect(870, 380, 151, 161));
        findBookButton->setCursor(QCursor(Qt::PointingHandCursor));
        findBookButton->setLayoutDirection(Qt::LeftToRight);
        findBookButton->setAutoFillBackground(false);
        findBookButton->setStyleSheet(QLatin1String("border-top-left-radius: 50px;\n"
"\n"
"\n"
""));
        QIcon icon1;
        icon1.addFile(QStringLiteral("428094.svg"), QSize(), QIcon::Normal, QIcon::Off);
        findBookButton->setIcon(icon1);
        findBookButton->setIconSize(QSize(60, 60));
        historyButton = new QPushButton(menuPage);
        historyButton->setObjectName(QStringLiteral("historyButton"));
        historyButton->setGeometry(QRect(1020, 380, 151, 161));
        historyButton->setCursor(QCursor(Qt::PointingHandCursor));
        historyButton->setStyleSheet(QStringLiteral("border-top-right-radius: 50px;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("my_book.svg"), QSize(), QIcon::Normal, QIcon::Off);
        historyButton->setIcon(icon2);
        historyButton->setIconSize(QSize(60, 60));
        exitButton = new QPushButton(menuPage);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(1020, 540, 151, 161));
        exitButton->setCursor(QCursor(Qt::PointingHandCursor));
        exitButton->setStyleSheet(QStringLiteral("border-bottom-right-radius: 50px;"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("power-button-md.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitButton->setIcon(icon3);
        exitButton->setIconSize(QSize(60, 60));
        label_6 = new QLabel(menuPage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(930, 500, 51, 16));
        QFont font2;
        font2.setFamily(QStringLiteral("Futura"));
        font2.setBold(false);
        font2.setWeight(50);
        label_6->setFont(font2);
        label_6->setStyleSheet(QStringLiteral("color:#2976f2"));
        label_21 = new QLabel(menuPage);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(1070, 500, 71, 16));
        QFont font3;
        font3.setFamily(QStringLiteral("Futura"));
        label_21->setFont(font3);
        label_21->setStyleSheet(QStringLiteral("color:#2976f2"));
        label_22 = new QLabel(menuPage);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(1070, 660, 60, 16));
        label_22->setFont(font3);
        label_22->setStyleSheet(QStringLiteral("color:#2976f2"));
        profileButton = new QPushButton(menuPage);
        profileButton->setObjectName(QStringLiteral("profileButton"));
        profileButton->setGeometry(QRect(870, 540, 151, 161));
        profileButton->setCursor(QCursor(Qt::PointingHandCursor));
        profileButton->setStyleSheet(QStringLiteral("border-bottom-left-radius: 50px;"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/LIBPRO/G.svg"), QSize(), QIcon::Normal, QIcon::Off);
        profileButton->setIcon(icon4);
        profileButton->setIconSize(QSize(80, 80));
        labelHello = new QLabel(menuPage);
        labelHello->setObjectName(QStringLiteral("labelHello"));
        labelHello->setGeometry(QRect(40, 110, 301, 31));
        QFont font4;
        font4.setFamily(QStringLiteral("Californian FB"));
        font4.setPointSize(20);
        labelHello->setFont(font4);
        labelHello->setStyleSheet(QStringLiteral("color: rgb(85, 0, 255);"));
        labelHello->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_23 = new QLabel(menuPage);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(920, 660, 60, 16));
        label_23->setFont(font3);
        label_23->setStyleSheet(QStringLiteral("color:#2976f2"));
        aboutButton = new QPushButton(menuPage);
        aboutButton->setObjectName(QStringLiteral("aboutButton"));
        aboutButton->setGeometry(QRect(1160, 820, 111, 71));
        aboutButton->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/LIBPRO/Alecive-Flatwoken-Apps-Help-Info.ico"), QSize(), QIcon::Normal, QIcon::Off);
        aboutButton->setIcon(icon5);
        aboutButton->setIconSize(QSize(70, 70));
        lineEdit = new QLineEdit(menuPage);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(290, 270, 201, 41));
        QFont font5;
        lineEdit->setFont(font5);
        lineEdit->setStyleSheet(QLatin1String("border: 2px solid #2781c6;\n"
"font-size: 25px;\n"
"\n"
"\n"
"border-top-left-radius:13px;\n"
"border-bottom-right-radius: 13px;\n"
"\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(168, 237, 205, 255), stop:0.492611 rgba(255, 255, 255, 255));"));
        lineEdit->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(menuPage);
        searchPage = new QWidget();
        searchPage->setObjectName(QStringLiteral("searchPage"));
        searchPage->setStyleSheet(QStringLiteral(""));
        searchLine = new QLineEdit(searchPage);
        searchLine->setObjectName(QStringLiteral("searchLine"));
        searchLine->setGeometry(QRect(60, 30, 1161, 61));
        searchLine->setFont(font5);
        searchLine->setFocusPolicy(Qt::StrongFocus);
        searchLine->setStyleSheet(QLatin1String("border: 2px solid #2781c6;\n"
"border-radius: 20px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(168, 237, 205, 255), stop:0.492611 rgba(255, 255, 255, 255));\n"
"\n"
"padding: 15px;"));
        searchLine->setClearButtonEnabled(true);
        listWidget_2 = new QListWidget(searchPage);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(60, 120, 781, 621));
        QFont font6;
        font6.setFamily(QStringLiteral("Rockwell"));
        font6.setPointSize(20);
        listWidget_2->setFont(font6);
        listWidget_2->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        listWidget_2->setMouseTracking(true);
        listWidget_2->setToolTipDuration(10);
        listWidget_2->setLayoutDirection(Qt::LeftToRight);
        listWidget_2->setStyleSheet(QStringLiteral(""));
        listWidget_2->setFrameShape(QFrame::NoFrame);
        listWidget_2->setFrameShadow(QFrame::Sunken);
        listWidget_2->setIconSize(QSize(80, 150));
        listWidget_2->setTextElideMode(Qt::ElideRight);
        listWidget_2->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        listWidget_2->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        listWidget_2->setSortingEnabled(true);
        pushButton = new QPushButton(searchPage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(880, 230, 94, 81));
        pushButton->setStyleSheet(QLatin1String("border-image: url(:/LIBPRO/cart.png);\n"
"background: transparent;"));
        groupBox_2 = new QGroupBox(searchPage);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(910, 110, 291, 121));
        groupBox_2->setStyleSheet(QStringLiteral("background: rgba(66, 244, 220,0.3);"));
        borrowed = new QLabel(groupBox_2);
        borrowed->setObjectName(QStringLiteral("borrowed"));
        borrowed->setGeometry(QRect(40, 30, 241, 31));
        QFont font7;
        font7.setFamily(QStringLiteral("American Typewriter"));
        font7.setPointSize(14);
        borrowed->setFont(font7);
        borrowed->setStyleSheet(QLatin1String("color:red;\n"
"background: transparent;"));
        remain = new QLabel(groupBox_2);
        remain->setObjectName(QStringLiteral("remain"));
        remain->setGeometry(QRect(40, 50, 241, 31));
        remain->setFont(font7);
        remain->setStyleSheet(QLatin1String("color: red;\n"
"background: transparent;"));
        total = new QLabel(groupBox_2);
        total->setObjectName(QStringLiteral("total"));
        total->setGeometry(QRect(120, 80, 161, 31));
        QFont font8;
        font8.setFamily(QStringLiteral("Futura"));
        font8.setPointSize(18);
        total->setFont(font8);
        total->setStyleSheet(QLatin1String("color:red;\n"
"background: transparent;"));
        listWidget_3 = new QListWidget(searchPage);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        listWidget_3->setGeometry(QRect(890, 310, 361, 431));
        QFont font9;
        font9.setFamily(QStringLiteral("Rockwell"));
        font9.setPointSize(15);
        listWidget_3->setFont(font9);
        listWidget_3->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        listWidget_3->setMouseTracking(true);
        listWidget_3->setFrameShape(QFrame::NoFrame);
        listWidget_3->setIconSize(QSize(50, 50));
        listWidget_3->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        listWidget_3->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        listWidget_3->setWordWrap(false);
        listWidget_3->setSortingEnabled(true);
        returnButton = new QCommandLinkButton(searchPage);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(50, 770, 111, 111));
        returnButton->setCursor(QCursor(Qt::PointingHandCursor));
        returnButton->setMouseTracking(true);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/LIBPRO/back.ico"), QSize(), QIcon::Normal, QIcon::Off);
        returnButton->setIcon(icon6);
        returnButton->setIconSize(QSize(100, 100));
        searchButton = new QCommandLinkButton(searchPage);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(1160, 30, 61, 61));
        searchButton->setCursor(QCursor(Qt::PointingHandCursor));
        searchButton->setMouseTracking(true);
        searchButton->setStyleSheet(QLatin1String("border-radius: 20px;\n"
"background:transparent;"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/LIBPRO/search.ico"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton->setIcon(icon7);
        searchButton->setIconSize(QSize(45, 50));
        addButton = new QCommandLinkButton(searchPage);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setEnabled(false);
        addButton->setGeometry(QRect(910, 760, 101, 101));
        addButton->setCursor(QCursor(Qt::PointingHandCursor));
        addButton->setMouseTracking(true);
        addButton->setStyleSheet(QLatin1String("border: 2px solid #96a560;\n"
"background-color: #e0eaaf;\n"
"border-top-left-radius:13px;\n"
"border-bottom-left-radius:13px;"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/LIBPRO/add.ico"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon8);
        addButton->setIconSize(QSize(100, 80));
        removeButton = new QCommandLinkButton(searchPage);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setEnabled(false);
        removeButton->setGeometry(QRect(1110, 760, 101, 101));
        removeButton->setCursor(QCursor(Qt::PointingHandCursor));
        removeButton->setMouseTracking(true);
        removeButton->setStyleSheet(QLatin1String("border: 2px solid #96a560;\n"
"background-color: #e0eaaf;\n"
"border-bottom-right-radius:13px;\n"
"border-top-right-radius:13px;"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/LIBPRO/remove.ico"), QSize(), QIcon::Normal, QIcon::Off);
        removeButton->setIcon(icon9);
        removeButton->setIconSize(QSize(100, 80));
        borrowButton = new QCommandLinkButton(searchPage);
        borrowButton->setObjectName(QStringLiteral("borrowButton"));
        borrowButton->setGeometry(QRect(1010, 760, 101, 101));
        borrowButton->setCursor(QCursor(Qt::PointingHandCursor));
        borrowButton->setMouseTracking(true);
        borrowButton->setStyleSheet(QLatin1String("border: 2px solid #96a560;\n"
"background-color: #e0eaaf;\n"
""));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/LIBPRO/borrow.ico"), QSize(), QIcon::Normal, QIcon::Off);
        borrowButton->setIcon(icon10);
        borrowButton->setIconSize(QSize(100, 80));
        label_14 = new QLabel(searchPage);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(980, 260, 141, 51));
        QFont font10;
        font10.setPointSize(15);
        label_14->setFont(font10);
        stackedWidget->addWidget(searchPage);
        informationPage = new QWidget();
        informationPage->setObjectName(QStringLiteral("informationPage"));
        groupBox = new QGroupBox(informationPage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(90, 20, 411, 611));
        QFont font11;
        font11.setFamily(QStringLiteral("American Typewriter"));
        font11.setPointSize(36);
        groupBox->setFont(font11);
        groupBox->setStyleSheet(QStringLiteral(""));
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        saveButton = new QPushButton(groupBox);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setEnabled(false);
        saveButton->setGeometry(QRect(0, 550, 411, 41));
        QFont font12;
        font12.setFamily(QStringLiteral("Gill Sans"));
        font12.setPointSize(18);
        font12.setBold(false);
        font12.setItalic(false);
        font12.setWeight(50);
        saveButton->setFont(font12);
        saveButton->setCursor(QCursor(Qt::PointingHandCursor));
        saveButton->setStyleSheet(QLatin1String("border: 2px solid #96a560;\n"
"background-color: #e0eaaf;\n"
"border-bottom-left-radius:13px;\n"
"border-bottom-right-radius:13px;"));
        changeButton = new QPushButton(groupBox);
        changeButton->setObjectName(QStringLiteral("changeButton"));
        changeButton->setGeometry(QRect(0, 510, 411, 41));
        changeButton->setFont(font12);
        changeButton->setCursor(QCursor(Qt::PointingHandCursor));
        changeButton->setStyleSheet(QLatin1String("border: 2px solid #96a560;\n"
"background-color: #e0eaaf;\n"
"border-top-left-radius:13px;\n"
"border-top-right-radius:13px;"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 50, 51, 51));
        label_3->setStyleSheet(QStringLiteral("border-image: url(:/LIBPRO/user_icon.png);"));
        lineUser_info = new QLineEdit(groupBox);
        lineUser_info->setObjectName(QStringLiteral("lineUser_info"));
        lineUser_info->setGeometry(QRect(90, 60, 301, 41));
        lineUser_info->setStyleSheet(QLatin1String("border: 2px solid #2781c6;\n"
"\n"
"\n"
"border-top-left-radius:13px;\n"
"border-top-right-radius: 13px;\n"
"\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(168, 237, 205, 255), stop:0.492611 rgba(255, 255, 255, 255));"));
        lineUser_info->setReadOnly(true);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 100, 91, 21));
        QFont font13;
        font13.setFamily(QStringLiteral("Futura"));
        font13.setPointSize(11);
        label_2->setFont(font13);
        label_2->setStyleSheet(QStringLiteral("color: #017c64;"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 170, 51, 51));
        label_4->setStyleSheet(QStringLiteral("border-image: url(:/LIBPRO/password_icon.png);"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 130, 71, 20));
        label_10->setFont(font13);
        label_10->setStyleSheet(QStringLiteral("color: #017c64;"));
        lineNickname_info = new QLineEdit(groupBox);
        lineNickname_info->setObjectName(QStringLiteral("lineNickname_info"));
        lineNickname_info->setGeometry(QRect(90, 120, 301, 41));
        lineNickname_info->setStyleSheet(QLatin1String("border: 2px solid #2781c6;\n"
"\n"
"\n"
"/*border-top-left-radius:13px;\n"
"border-top-right-radius: 13px;*/\n"
"border-bottom-right-radius:13px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(168, 237, 205, 255), stop:0.492611 rgba(255, 255, 255, 255));"));
        lineNickname_info->setReadOnly(true);
        linePass_info = new QLineEdit(groupBox);
        linePass_info->setObjectName(QStringLiteral("linePass_info"));
        linePass_info->setGeometry(QRect(90, 180, 301, 41));
        linePass_info->setStyleSheet(QLatin1String("border: 2px solid #2781c6;\n"
"\n"
"\n"
"border-top-left-radius:13px;\n"
"border-top-right-radius: 13px;\n"
"border-bottom-right-radius:13px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(168, 237, 205, 255), stop:0.492611 rgba(255, 255, 255, 255));"));
        linePass_info->setEchoMode(QLineEdit::Password);
        linePass_info->setReadOnly(true);
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 220, 81, 16));
        label_15->setFont(font13);
        label_15->setStyleSheet(QStringLiteral("color: #017c64;"));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(30, 260, 51, 51));
        label_16->setStyleSheet(QStringLiteral("border-image: url(:/LIBPRO/phone-icon.png);"));
        linePhone_info = new QLineEdit(groupBox);
        linePhone_info->setObjectName(QStringLiteral("linePhone_info"));
        linePhone_info->setGeometry(QRect(90, 270, 301, 41));
        linePhone_info->setStyleSheet(QLatin1String("border: 2px solid #2781c6;\n"
"\n"
"\n"
"border-top-left-radius:13px;\n"
"border-top-right-radius: 13px;\n"
"border-bottom-right-radius:13px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(168, 237, 205, 255), stop:0.492611 rgba(255, 255, 255, 255));"));
        linePhone_info->setReadOnly(true);
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(20, 310, 71, 21));
        label_18->setFont(font13);
        label_18->setStyleSheet(QStringLiteral("color: #017c64;"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 350, 51, 51));
        label_5->setStyleSheet(QStringLiteral("border-image: url(:/LIBPRO/mssv.ico);"));
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(80, 380, 81, 16));
        label_19->setFont(font13);
        label_19->setStyleSheet(QStringLiteral("color: #017c64;"));
        lineStudentNumber_info = new QLineEdit(groupBox);
        lineStudentNumber_info->setObjectName(QStringLiteral("lineStudentNumber_info"));
        lineStudentNumber_info->setGeometry(QRect(30, 410, 151, 41));
        lineStudentNumber_info->setStyleSheet(QLatin1String("border: 2px solid #2781c6;\n"
"\n"
"\n"
"border-top-left-radius:13px;\n"
"border-top-right-radius: 13px;\n"
"border-bottom-right-radius:13px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(168, 237, 205, 255), stop:0.492611 rgba(255, 255, 255, 255));"));
        lineStudentNumber_info->setReadOnly(true);
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(210, 350, 51, 51));
        label_17->setStyleSheet(QStringLiteral("border-image: url(:/LIBPRO/mail-icon.png);"));
        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(260, 380, 71, 16));
        label_20->setFont(font13);
        label_20->setStyleSheet(QStringLiteral("color: #017c64;"));
        lineEmail_info = new QLineEdit(groupBox);
        lineEmail_info->setObjectName(QStringLiteral("lineEmail_info"));
        lineEmail_info->setGeometry(QRect(210, 410, 181, 41));
        lineEmail_info->setStyleSheet(QLatin1String("border: 2px solid #2781c6;\n"
"\n"
"\n"
"border-top-left-radius:13px;\n"
"border-top-right-radius: 13px;\n"
"border-bottom-right-radius:13px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(168, 237, 205, 255), stop:0.492611 rgba(255, 255, 255, 255));"));
        lineEmail_info->setReadOnly(true);
        returnButton2 = new QCommandLinkButton(informationPage);
        returnButton2->setObjectName(QStringLiteral("returnButton2"));
        returnButton2->setGeometry(QRect(80, 710, 121, 121));
        returnButton2->setCursor(QCursor(Qt::PointingHandCursor));
        returnButton2->setMouseTracking(true);
        returnButton2->setIcon(icon6);
        returnButton2->setIconSize(QSize(100, 100));
        label_8 = new QLabel(informationPage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(550, 0, 291, 71));
        QFont font14;
        font14.setPointSize(36);
        label_8->setFont(font14);
        scrollArea_4 = new QScrollArea(informationPage);
        scrollArea_4->setObjectName(QStringLiteral("scrollArea_4"));
        scrollArea_4->setGeometry(QRect(550, 70, 660, 781));
        scrollArea_4->setFrameShape(QFrame::Box);
        scrollArea_4->setWidgetResizable(true);
        scrollArea_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 656, 777));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        scrollArea_4->setWidget(scrollAreaWidgetContents_2);
        stackedWidget->addWidget(informationPage);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        tableBook = new QTableWidget(page);
        if (tableBook->columnCount() < 6)
            tableBook->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableBook->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableBook->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableBook->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableBook->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableBook->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableBook->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tableBook->rowCount() < 50)
            tableBook->setRowCount(50);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setForeground(brush);
        tableBook->setItem(0, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableBook->setItem(0, 1, __qtablewidgetitem7);
        QBrush brush1(QColor(255, 255, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setForeground(brush1);
        tableBook->setItem(0, 2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableBook->setItem(0, 3, __qtablewidgetitem9);
        tableBook->setObjectName(QStringLiteral("tableBook"));
        tableBook->setGeometry(QRect(50, 100, 1181, 741));
        tableBook->setFont(font1);
        tableBook->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        tableBook->setMouseTracking(true);
        tableBook->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableBook->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableBook->setGridStyle(Qt::SolidLine);
        tableBook->setSortingEnabled(true);
        tableBook->setRowCount(50);
        tableBook->horizontalHeader()->setCascadingSectionResizes(true);
        tableBook->horizontalHeader()->setDefaultSectionSize(190);
        label_7 = new QLabel(page);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(150, 30, 971, 51));
        QFont font15;
        font15.setFamily(QStringLiteral("Gadugi"));
        font15.setPointSize(20);
        font15.setBold(true);
        font15.setWeight(75);
        label_7->setFont(font15);
        label_7->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(168, 237, 205, 255), stop:0.492611 rgba(255, 255, 255, 255));"));
        label_7->setAlignment(Qt::AlignCenter);
        returnButton_3 = new QCommandLinkButton(page);
        returnButton_3->setObjectName(QStringLiteral("returnButton_3"));
        returnButton_3->setGeometry(QRect(40, 0, 101, 91));
        returnButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        returnButton_3->setMouseTracking(true);
        returnButton_3->setIcon(icon6);
        returnButton_3->setIconSize(QSize(80, 100));
        label_9 = new QLabel(page);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(50, 860, 1171, 31));
        stackedWidget->addWidget(page);
        bookDetail = new QWidget();
        bookDetail->setObjectName(QStringLiteral("bookDetail"));
        bookDetail->setStyleSheet(QStringLiteral(""));
        bookImg = new QLabel(bookDetail);
        bookImg->setObjectName(QStringLiteral("bookImg"));
        bookImg->setGeometry(QRect(20, 20, 221, 331));
        bookImg->setFrameShape(QFrame::NoFrame);
        bookName = new QLabel(bookDetail);
        bookName->setObjectName(QStringLiteral("bookName"));
        bookName->setGeometry(QRect(260, 10, 991, 71));
        QFont font16;
        font16.setFamily(QStringLiteral("Gadugi"));
        font16.setPointSize(30);
        font16.setBold(true);
        font16.setWeight(75);
        bookName->setFont(font16);
        bookName->setFrameShape(QFrame::NoFrame);
        bookName->setScaledContents(true);
        author = new QLabel(bookDetail);
        author->setObjectName(QStringLiteral("author"));
        author->setGeometry(QRect(260, 80, 721, 41));
        QFont font17;
        font17.setFamily(QStringLiteral("Sitka Display"));
        font17.setPointSize(18);
        author->setFont(font17);
        author->setFrameShape(QFrame::NoFrame);
        author->setFrameShadow(QFrame::Plain);
        label_11 = new QLabel(bookDetail);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(1000, 130, 161, 41));
        label_11->setFont(font10);
        label_11->setStyleSheet(QStringLiteral("color: rgb(0, 85, 255);"));
        relatedItem = new QListWidget(bookDetail);
        relatedItem->setObjectName(QStringLiteral("relatedItem"));
        relatedItem->setGeometry(QRect(1000, 180, 271, 251));
        QFont font18;
        font18.setPointSize(12);
        relatedItem->setFont(font18);
        relatedItem->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        relatedItem->setMouseTracking(true);
        relatedItem->setFocusPolicy(Qt::StrongFocus);
        relatedItem->setToolTipDuration(10);
        relatedItem->setAutoFillBackground(false);
        relatedItem->setStyleSheet(QStringLiteral("background:transparent;"));
        relatedItem->setFrameShape(QFrame::NoFrame);
        relatedItem->setFrameShadow(QFrame::Plain);
        relatedItem->setIconSize(QSize(50, 50));
        relatedItem->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        relatedItem->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        relatedItem->setWordWrap(true);
        relatedItem->setSortingEnabled(true);
        addButton_2 = new QCommandLinkButton(bookDetail);
        addButton_2->setObjectName(QStringLiteral("addButton_2"));
        addButton_2->setGeometry(QRect(110, 440, 91, 91));
        addButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        addButton_2->setMouseTracking(false);
        addButton_2->setAutoFillBackground(false);
        addButton_2->setIcon(icon8);
        addButton_2->setIconSize(QSize(100, 80));
        label_12 = new QLabel(bookDetail);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(90, 530, 261, 31));
        QFont font19;
        font19.setFamily(QStringLiteral("Centaur"));
        font19.setPointSize(25);
        label_12->setFont(font19);
        label_12->setStyleSheet(QStringLiteral("color: rgb(0, 85, 255);"));
        label_13 = new QLabel(bookDetail);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(0, 490, 91, 81));
        label_13->setStyleSheet(QStringLiteral("border-image: url(:/LIBPRO/icon.png);"));
        label_13->setFrameShape(QFrame::NoFrame);
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/LIBPRO/1.ico")));
        label_13->setScaledContents(true);
        bookRelease = new QLabel(bookDetail);
        bookRelease->setObjectName(QStringLiteral("bookRelease"));
        bookRelease->setGeometry(QRect(10, 350, 231, 31));
        QFont font20;
        font20.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font20.setPointSize(15);
        bookRelease->setFont(font20);
        bookRelease->setFrameShape(QFrame::NoFrame);
        bookRelease->setAlignment(Qt::AlignCenter);
        line = new QFrame(bookDetail);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(260, 130, 731, 5));
        line->setAutoFillBackground(false);
        line->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        scrollArea = new QScrollArea(bookDetail);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 570, 941, 171));
        QFont font21;
        font21.setFamily(QStringLiteral("Gadugi"));
        font21.setPointSize(12);
        scrollArea->setFont(font21);
        scrollArea->setStyleSheet(QStringLiteral("background:transparent;"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollArea_2 = new QWidget();
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(0, 0, 941, 171));
        textEdit_2 = new QTextEdit(scrollArea_2);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(0, 0, 941, 171));
        textEdit_2->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidget(scrollArea_2);
        scrollArea_3 = new QScrollArea(bookDetail);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(260, 140, 731, 391));
        scrollArea_3->setFont(font21);
        scrollArea_3->setStyleSheet(QStringLiteral("background:transparent;"));
        scrollArea_3->setFrameShape(QFrame::NoFrame);
        scrollArea_3->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea_3->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 731, 391));
        textEdit = new QTextEdit(scrollAreaWidgetContents);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(3, 0, 721, 391));
        textEdit->setFrameShape(QFrame::NoFrame);
        textEdit->setReadOnly(true);
        scrollArea_3->setWidget(scrollAreaWidgetContents);
        rating = new QListWidget(bookDetail);
        rating->setObjectName(QStringLiteral("rating"));
        rating->setGeometry(QRect(70, 390, 111, 51));
        rating->setFont(font10);
        rating->setStyleSheet(QStringLiteral("background: transparent;"));
        rating->setFrameShape(QFrame::NoFrame);
        rating->setLayoutMode(QListView::SinglePass);
        returnButton_2 = new QCommandLinkButton(bookDetail);
        returnButton_2->setObjectName(QStringLiteral("returnButton_2"));
        returnButton_2->setGeometry(QRect(30, 770, 121, 111));
        returnButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        returnButton_2->setMouseTracking(true);
        returnButton_2->setIcon(icon6);
        returnButton_2->setIconSize(QSize(100, 100));
        quotes = new QLabel(bookDetail);
        quotes->setObjectName(QStringLiteral("quotes"));
        quotes->setGeometry(QRect(1000, 570, 261, 331));
        quotes->setStyleSheet(QStringLiteral("background:transparent;"));
        quotes->setFrameShape(QFrame::StyledPanel);
        quotes->setPixmap(QPixmap(QString::fromUtf8(":/LIBPRO/quote/1.jpg")));
        quotes->setScaledContents(true);
        quotes->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        stackedWidget->addWidget(bookDetail);
        layoutWidget = new QWidget(UserMenu);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        layoutWidget1 = new QWidget(UserMenu);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);

        retranslateUi(UserMenu);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(UserMenu);
    } // setupUi

    void retranslateUi(QWidget *UserMenu)
    {
        UserMenu->setWindowTitle(QApplication::translate("UserMenu", "Menu", Q_NULLPTR));
        lastLogin->setText(QString());
        findBookButton->setText(QString());
        historyButton->setText(QString());
        exitButton->setText(QString());
        label_6->setText(QApplication::translate("UserMenu", "Search", Q_NULLPTR));
        label_21->setText(QApplication::translate("UserMenu", " My books", Q_NULLPTR));
        label_22->setText(QApplication::translate("UserMenu", "  Log out", Q_NULLPTR));
        profileButton->setText(QString());
        labelHello->setText(QApplication::translate("UserMenu", "Hello, (display name here)", Q_NULLPTR));
        label_23->setText(QApplication::translate("UserMenu", "My profile", Q_NULLPTR));
        aboutButton->setText(QString());
        lineEdit->setText(QApplication::translate("UserMenu", "NEW BOOKS", Q_NULLPTR));
        searchLine->setText(QString());
        searchLine->setPlaceholderText(QApplication::translate("UserMenu", "Search for books", Q_NULLPTR));
        pushButton->setText(QString());
        groupBox_2->setTitle(QString());
        borrowed->setText(QApplication::translate("UserMenu", "Borowing:", Q_NULLPTR));
        remain->setText(QApplication::translate("UserMenu", "Requested:", Q_NULLPTR));
        total->setText(QApplication::translate("UserMenu", "Total:", Q_NULLPTR));
        returnButton->setText(QString());
        searchButton->setText(QString());
        addButton->setText(QString());
        removeButton->setText(QString());
        borrowButton->setText(QString());
        label_14->setText(QApplication::translate("UserMenu", "Current Items:", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("UserMenu", "Information", Q_NULLPTR));
        saveButton->setText(QApplication::translate("UserMenu", "Save Changes", Q_NULLPTR));
        changeButton->setText(QApplication::translate("UserMenu", "Change", Q_NULLPTR));
        label_3->setText(QString());
        label_2->setText(QApplication::translate("UserMenu", " Username", Q_NULLPTR));
        label_4->setText(QString());
        label_10->setText(QApplication::translate("UserMenu", " Nickname                ", Q_NULLPTR));
        label_15->setText(QApplication::translate("UserMenu", " Password", Q_NULLPTR));
        label_16->setText(QString());
        label_18->setText(QApplication::translate("UserMenu", "   Phone", Q_NULLPTR));
        label_5->setText(QString());
        label_19->setText(QApplication::translate("UserMenu", " Student no.", Q_NULLPTR));
        label_17->setText(QString());
        label_20->setText(QApplication::translate("UserMenu", "  Email", Q_NULLPTR));
        returnButton2->setText(QString());
        label_8->setText(QApplication::translate("UserMenu", "Your request", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableBook->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("UserMenu", "Book", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableBook->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("UserMenu", "Author", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableBook->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("UserMenu", "Rating", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableBook->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("UserMenu", "Link", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableBook->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("UserMenu", "Date-borrow", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableBook->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("UserMenu", "Time-remaining", Q_NULLPTR));

        const bool __sortingEnabled = tableBook->isSortingEnabled();
        tableBook->setSortingEnabled(false);
        tableBook->setSortingEnabled(__sortingEnabled);

        label_7->setText(QApplication::translate("UserMenu", "YOUR BOOKS", Q_NULLPTR));
        returnButton_3->setText(QString());
        label_9->setText(QApplication::translate("UserMenu", "*Please select books you want to see to copy the links.", Q_NULLPTR));
        bookImg->setText(QString());
        bookName->setText(QString());
        author->setText(QString());
        label_11->setText(QApplication::translate("UserMenu", "Related Item", Q_NULLPTR));
        addButton_2->setText(QString());
        label_12->setText(QApplication::translate("UserMenu", "Community Reviews:", Q_NULLPTR));
        label_13->setText(QString());
        bookRelease->setText(QString());
        returnButton_2->setText(QString());
        quotes->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserMenu: public Ui_UserMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMENU_H
