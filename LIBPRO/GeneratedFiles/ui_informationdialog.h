/********************************************************************************
** Form generated from reading UI file 'informationdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATIONDIALOG_H
#define UI_INFORMATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_informationDialog
{
public:
    QLineEdit *author;
    QLineEdit *link;
    QLineEdit *rating;
    QLineEdit *bookname;
    QLabel *img;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextEdit *summary;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QTextEdit *review;
    QLineEdit *type;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *loadButton;
    QLabel *label_7;
    QPushButton *yes;
    QPushButton *no;

    void setupUi(QDialog *informationDialog)
    {
        if (informationDialog->objectName().isEmpty())
            informationDialog->setObjectName(QStringLiteral("informationDialog"));
        informationDialog->resize(491, 650);
        informationDialog->setStyleSheet(QLatin1String("QPushButton {	\n"
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
"}"));
        author = new QLineEdit(informationDialog);
        author->setObjectName(QStringLiteral("author"));
        author->setGeometry(QRect(180, 80, 301, 41));
        QFont font;
        font.setFamily(QStringLiteral("Gadugi"));
        font.setPointSize(12);
        author->setFont(font);
        author->setStyleSheet(QLatin1String("border: 2px solid #2781c6;\n"
"\n"
"\n"
"/*border-top-left-radius:13px;\n"
"border-top-right-radius: 13px;*/\n"
"border-bottom-right-radius:13px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(168, 237, 205, 255), stop:0.492611 rgba(255, 255, 255, 255));"));
        link = new QLineEdit(informationDialog);
        link->setObjectName(QStringLiteral("link"));
        link->setGeometry(QRect(180, 160, 301, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Gadugi"));
        font1.setPointSize(8);
        link->setFont(font1);
        link->setStyleSheet(QLatin1String("border: 2px solid #2781c6;\n"
"\n"
"\n"
"border-top-left-radius:13px;\n"
"border-top-right-radius: 13px;\n"
"border-bottom-right-radius:13px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(168, 237, 205, 255), stop:0.492611 rgba(255, 255, 255, 255));"));
        link->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        rating = new QLineEdit(informationDialog);
        rating->setObjectName(QStringLiteral("rating"));
        rating->setGeometry(QRect(180, 280, 301, 41));
        rating->setFont(font);
        rating->setStyleSheet(QLatin1String("border: 2px solid #2781c6;\n"
"\n"
"\n"
"border-top-left-radius:13px;\n"
"border-top-right-radius: 13px;\n"
"border-bottom-right-radius:13px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(168, 237, 205, 255), stop:0.492611 rgba(255, 255, 255, 255));"));
        bookname = new QLineEdit(informationDialog);
        bookname->setObjectName(QStringLiteral("bookname"));
        bookname->setGeometry(QRect(180, 40, 301, 41));
        bookname->setFont(font);
        bookname->setStyleSheet(QLatin1String("border: 2px solid #2781c6;\n"
"\n"
"\n"
"border-top-left-radius:13px;\n"
"border-top-right-radius: 13px;\n"
"\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(168, 237, 205, 255), stop:0.492611 rgba(255, 255, 255, 255));"));
        img = new QLabel(informationDialog);
        img->setObjectName(QStringLiteral("img"));
        img->setGeometry(QRect(6, 2, 161, 201));
        img->setFrameShape(QFrame::NoFrame);
        scrollArea = new QScrollArea(informationDialog);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 360, 231, 211));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 231, 211));
        summary = new QTextEdit(scrollAreaWidgetContents);
        summary->setObjectName(QStringLiteral("summary"));
        summary->setGeometry(QRect(0, 0, 211, 211));
        summary->setStyleSheet(QLatin1String("border: 2px solid #2781c6;\n"
"\n"
"\n"
"border-top-left-radius:13px;\n"
"border-bottom-right-radius: 13px;\n"
"\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(168, 237, 205, 255), stop:0.492611 rgba(255, 255, 255, 255));"));
        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea_2 = new QScrollArea(informationDialog);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(250, 360, 231, 211));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 231, 211));
        review = new QTextEdit(scrollAreaWidgetContents_2);
        review->setObjectName(QStringLiteral("review"));
        review->setGeometry(QRect(0, 0, 211, 211));
        review->setStyleSheet(QLatin1String("border: 2px solid #2781c6;\n"
"\n"
"\n"
"border-top-left-radius:13px;\n"
"border-bottom-right-radius: 13px;\n"
"\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(168, 237, 205, 255), stop:0.492611 rgba(255, 255, 255, 255));"));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        type = new QLineEdit(informationDialog);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(10, 280, 161, 41));
        type->setFont(font);
        type->setStyleSheet(QLatin1String("border: 2px solid #2781c6;\n"
"\n"
"\n"
"border-top-left-radius:13px;\n"
"border-top-right-radius: 13px;\n"
"border-bottom-right-radius:13px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(168, 237, 205, 255), stop:0.492611 rgba(255, 255, 255, 255));"));
        label_2 = new QLabel(informationDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 10, 301, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_3 = new QLabel(informationDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 130, 301, 31));
        label_3->setFont(font2);
        label_4 = new QLabel(informationDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 250, 161, 31));
        label_4->setFont(font2);
        label_5 = new QLabel(informationDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 330, 201, 31));
        label_5->setFont(font2);
        label_6 = new QLabel(informationDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(250, 330, 301, 31));
        label_6->setFont(font2);
        loadButton = new QPushButton(informationDialog);
        loadButton->setObjectName(QStringLiteral("loadButton"));
        loadButton->setGeometry(QRect(30, 210, 101, 41));
        loadButton->setStyleSheet(QStringLiteral("border-radius: 20px;"));
        label_7 = new QLabel(informationDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(180, 250, 161, 31));
        label_7->setFont(font2);
        yes = new QPushButton(informationDialog);
        yes->setObjectName(QStringLiteral("yes"));
        yes->setGeometry(QRect(140, 590, 71, 51));
        yes->setStyleSheet(QStringLiteral("background:transparent;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/LIBPRO/Alecive-Flatwoken-Apps-Dialog-Apply.ico"), QSize(), QIcon::Normal, QIcon::Off);
        yes->setIcon(icon);
        yes->setIconSize(QSize(50, 50));
        no = new QPushButton(informationDialog);
        no->setObjectName(QStringLiteral("no"));
        no->setGeometry(QRect(250, 590, 71, 51));
        no->setStyleSheet(QStringLiteral("background: transparent;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/LIBPRO/Alecive-Flatwoken-Apps-Dialog-Close.ico"), QSize(), QIcon::Normal, QIcon::Off);
        no->setIcon(icon1);
        no->setIconSize(QSize(50, 50));

        retranslateUi(informationDialog);

        QMetaObject::connectSlotsByName(informationDialog);
    } // setupUi

    void retranslateUi(QDialog *informationDialog)
    {
        informationDialog->setWindowTitle(QApplication::translate("informationDialog", "informationDialog", Q_NULLPTR));
        author->setText(QString());
        img->setText(QString());
        label_2->setText(QApplication::translate("informationDialog", "Book - Author's name:", Q_NULLPTR));
        label_3->setText(QApplication::translate("informationDialog", "Link ebook:", Q_NULLPTR));
        label_4->setText(QApplication::translate("informationDialog", "Type:", Q_NULLPTR));
        label_5->setText(QApplication::translate("informationDialog", "Summary:", Q_NULLPTR));
        label_6->setText(QApplication::translate("informationDialog", "Review:", Q_NULLPTR));
        loadButton->setText(QApplication::translate("informationDialog", "Choose File", Q_NULLPTR));
        label_7->setText(QApplication::translate("informationDialog", "Rating:", Q_NULLPTR));
        yes->setText(QString());
        no->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class informationDialog: public Ui_informationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATIONDIALOG_H
