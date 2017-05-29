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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *displayUser;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *findBookButton;
    QSpacerItem *verticalSpacer;
    QPushButton *historyButton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *profileButton;
    QSpacerItem *verticalSpacer_3;
    QPushButton *exitButton;
    QListWidget *listWidget;
    QLabel *label;
    QWidget *searchPage;
    QLineEdit *searchLine;
    QPushButton *searchButton;
    QPushButton *returnButton;
    QListWidget *listWidget_2;
    QPushButton *addButton;
    QPushButton *removeButton;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *borrowedNumber;
    QLabel *remainNumber;
    QLabel *totalNumber;
    QListWidget *listWidget_3;
    QWidget *informationPage;
    QTableWidget *tableWidget;
    QPushButton *returnButton2;
    QGroupBox *groupBox;
    QPushButton *saveButton;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *lineUser_info;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *linePass_info;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *linePhone_info;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_4;
    QTextEdit *note_info;
    QPushButton *changeButton;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_3;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_4;

    void setupUi(QWidget *UserMenu)
    {
        if (UserMenu->objectName().isEmpty())
            UserMenu->setObjectName(QStringLiteral("UserMenu"));
        UserMenu->setWindowModality(Qt::ApplicationModal);
        UserMenu->resize(1060, 758);
        UserMenu->setMinimumSize(QSize(150, 40));
        QIcon icon;
        icon.addFile(QStringLiteral(":/LIBPRO/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        UserMenu->setWindowIcon(icon);
        UserMenu->setStyleSheet(QStringLiteral(""));
        stackedWidget = new QStackedWidget(UserMenu);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1061, 771));
        stackedWidget->setAutoFillBackground(false);
        stackedWidget->setStyleSheet(QLatin1String("#centralWidget{	\n"
"	image: url(:/LIBPRO/usermenu.jpg);\n"
"	background-image: url(:/LIBPRO/usermenu.jpg);\n"
"	border-image: url(:/LIBPRO/usermenu.jpg);\n"
"}"));
        menuPage = new QWidget();
        menuPage->setObjectName(QStringLiteral("menuPage"));
        layoutWidget = new QWidget(menuPage);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 150, 251, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        displayUser = new QLabel(layoutWidget);
        displayUser->setObjectName(QStringLiteral("displayUser"));

        horizontalLayout->addWidget(displayUser);

        layoutWidget1 = new QWidget(menuPage);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(220, 240, 152, 340));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        findBookButton = new QPushButton(layoutWidget1);
        findBookButton->setObjectName(QStringLiteral("findBookButton"));
        findBookButton->setMinimumSize(QSize(150, 40));
        findBookButton->setAutoFillBackground(false);

        verticalLayout->addWidget(findBookButton);

        verticalSpacer = new QSpacerItem(147, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        historyButton = new QPushButton(layoutWidget1);
        historyButton->setObjectName(QStringLiteral("historyButton"));
        historyButton->setMinimumSize(QSize(150, 40));

        verticalLayout->addWidget(historyButton);

        verticalSpacer_2 = new QSpacerItem(147, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        profileButton = new QPushButton(layoutWidget1);
        profileButton->setObjectName(QStringLiteral("profileButton"));
        profileButton->setMinimumSize(QSize(150, 40));

        verticalLayout->addWidget(profileButton);

        verticalSpacer_3 = new QSpacerItem(147, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        exitButton = new QPushButton(layoutWidget1);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setMinimumSize(QSize(150, 40));

        verticalLayout->addWidget(exitButton);

        listWidget = new QListWidget(menuPage);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(512, 267, 451, 311));
        label = new QLabel(menuPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(512, 242, 243, 19));
        label->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(menuPage);
        searchPage = new QWidget();
        searchPage->setObjectName(QStringLiteral("searchPage"));
        searchLine = new QLineEdit(searchPage);
        searchLine->setObjectName(QStringLiteral("searchLine"));
        searchLine->setGeometry(QRect(60, 50, 721, 41));
        QFont font;
        font.setFamily(QStringLiteral("Lucida Calligraphy"));
        font.setPointSize(20);
        searchLine->setFont(font);
        searchLine->setFocusPolicy(Qt::StrongFocus);
        searchLine->setClearButtonEnabled(true);
        searchButton = new QPushButton(searchPage);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(800, 50, 51, 41));
        searchButton->setStyleSheet(QStringLiteral("border-image: url(:/LIBPRO/search_icon.png);"));
        returnButton = new QPushButton(searchPage);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(60, 670, 91, 31));
        listWidget_2 = new QListWidget(searchPage);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(60, 120, 651, 531));
        QFont font1;
        font1.setFamily(QStringLiteral("Rockwell"));
        font1.setPointSize(20);
        listWidget_2->setFont(font1);
        addButton = new QPushButton(searchPage);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setEnabled(false);
        addButton->setGeometry(QRect(620, 660, 91, 31));
        removeButton = new QPushButton(searchPage);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setEnabled(false);
        removeButton->setGeometry(QRect(950, 660, 91, 31));
        pushButton = new QPushButton(searchPage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(740, 230, 91, 81));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/LIBPRO/cart.png);"));
        groupBox_2 = new QGroupBox(searchPage);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(750, 120, 291, 111));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 30, 47, 13));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 50, 47, 13));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(120, 80, 47, 13));
        borrowedNumber = new QLabel(groupBox_2);
        borrowedNumber->setObjectName(QStringLiteral("borrowedNumber"));
        borrowedNumber->setGeometry(QRect(110, 30, 21, 16));
        remainNumber = new QLabel(groupBox_2);
        remainNumber->setObjectName(QStringLiteral("remainNumber"));
        remainNumber->setGeometry(QRect(110, 50, 21, 16));
        totalNumber = new QLabel(groupBox_2);
        totalNumber->setObjectName(QStringLiteral("totalNumber"));
        totalNumber->setGeometry(QRect(160, 80, 21, 16));
        listWidget_3 = new QListWidget(searchPage);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        listWidget_3->setGeometry(QRect(750, 300, 291, 351));
        QFont font2;
        font2.setFamily(QStringLiteral("Rockwell"));
        font2.setPointSize(16);
        listWidget_3->setFont(font2);
        stackedWidget->addWidget(searchPage);
        informationPage = new QWidget();
        informationPage->setObjectName(QStringLiteral("informationPage"));
        tableWidget = new QTableWidget(informationPage);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(480, 110, 521, 521));
        tableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableWidget->setTextElideMode(Qt::ElideRight);
        tableWidget->setShowGrid(false);
        returnButton2 = new QPushButton(informationPage);
        returnButton2->setObjectName(QStringLiteral("returnButton2"));
        returnButton2->setGeometry(QRect(60, 670, 91, 31));
        groupBox = new QGroupBox(informationPage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 110, 411, 471));
        saveButton = new QPushButton(groupBox);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setEnabled(false);
        saveButton->setGeometry(QRect(260, 400, 81, 31));
        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(31, 62, 311, 201));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetNoConstraint);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        lineUser_info = new QLineEdit(layoutWidget2);
        lineUser_info->setObjectName(QStringLiteral("lineUser_info"));
        lineUser_info->setReadOnly(true);

        horizontalLayout_5->addWidget(lineUser_info);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_6->addWidget(label_4);

        linePass_info = new QLineEdit(layoutWidget2);
        linePass_info->setObjectName(QStringLiteral("linePass_info"));
        linePass_info->setEchoMode(QLineEdit::Password);
        linePass_info->setReadOnly(true);

        horizontalLayout_6->addWidget(linePass_info);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setSizeConstraint(QLayout::SetNoConstraint);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_7->addWidget(label_5);

        linePhone_info = new QLineEdit(layoutWidget2);
        linePhone_info->setObjectName(QStringLiteral("linePhone_info"));
        linePhone_info->setReadOnly(true);

        horizontalLayout_7->addWidget(linePhone_info);


        verticalLayout_4->addLayout(horizontalLayout_7);

        layoutWidget3 = new QWidget(groupBox);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(30, 280, 311, 73));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_5->addWidget(label_6);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_4);


        horizontalLayout_8->addLayout(verticalLayout_5);

        note_info = new QTextEdit(layoutWidget3);
        note_info->setObjectName(QStringLiteral("note_info"));
        note_info->setMaximumSize(QSize(221, 71));
        note_info->setReadOnly(true);

        horizontalLayout_8->addWidget(note_info);

        changeButton = new QPushButton(groupBox);
        changeButton->setObjectName(QStringLiteral("changeButton"));
        changeButton->setGeometry(QRect(160, 400, 81, 31));
        stackedWidget->addWidget(informationPage);
        layoutWidget4 = new QWidget(UserMenu);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        layoutWidget5 = new QWidget(UserMenu);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
#ifndef QT_NO_SHORTCUT
        label->setBuddy(listWidget);
#endif // QT_NO_SHORTCUT

        retranslateUi(UserMenu);
        QObject::connect(exitButton, SIGNAL(clicked()), UserMenu, SLOT(close()));

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(UserMenu);
    } // setupUi

    void retranslateUi(QWidget *UserMenu)
    {
        UserMenu->setWindowTitle(QApplication::translate("UserMenu", "Menu", Q_NULLPTR));
        label_2->setText(QApplication::translate("UserMenu", "<html><head/><body><p><span style=\" font-size:14pt;\">Hello,</span></p></body></html>", Q_NULLPTR));
        displayUser->setText(QApplication::translate("UserMenu", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
        findBookButton->setText(QApplication::translate("UserMenu", "Find Book", Q_NULLPTR));
        historyButton->setText(QApplication::translate("UserMenu", "Borrowed History", Q_NULLPTR));
        profileButton->setText(QApplication::translate("UserMenu", "Profile", Q_NULLPTR));
        exitButton->setText(QApplication::translate("UserMenu", "Log Out", Q_NULLPTR));
        label->setText(QApplication::translate("UserMenu", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff0000;\">                   Annouce New Books Releases</span></p></body></html>", Q_NULLPTR));
        searchLine->setText(QString());
        searchButton->setText(QString());
        returnButton->setText(QApplication::translate("UserMenu", "Back", Q_NULLPTR));
        addButton->setText(QApplication::translate("UserMenu", "Add", Q_NULLPTR));
        removeButton->setText(QApplication::translate("UserMenu", "Remove", Q_NULLPTR));
        pushButton->setText(QString());
        groupBox_2->setTitle(QString());
        label_7->setText(QApplication::translate("UserMenu", "Borowed", Q_NULLPTR));
        label_8->setText(QApplication::translate("UserMenu", "Remain", Q_NULLPTR));
        label_9->setText(QApplication::translate("UserMenu", "Total", Q_NULLPTR));
        borrowedNumber->setText(QString());
        remainNumber->setText(QString());
        totalNumber->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("UserMenu", "Book", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("UserMenu", "Author", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("UserMenu", "Date Borrow", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("UserMenu", "Date Return", Q_NULLPTR));
        returnButton2->setText(QApplication::translate("UserMenu", "Back", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("UserMenu", "Information", Q_NULLPTR));
        saveButton->setText(QApplication::translate("UserMenu", "Save Changes", Q_NULLPTR));
        label_3->setText(QApplication::translate("UserMenu", "UserName       ", Q_NULLPTR));
        label_4->setText(QApplication::translate("UserMenu", "Password        ", Q_NULLPTR));
        label_5->setText(QApplication::translate("UserMenu", "PhoneNumber ", Q_NULLPTR));
        label_6->setText(QApplication::translate("UserMenu", "Note               ", Q_NULLPTR));
        changeButton->setText(QApplication::translate("UserMenu", "Changes", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserMenu: public Ui_UserMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMENU_H
