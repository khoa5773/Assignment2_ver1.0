/********************************************************************************
** Form generated from reading UI file 'bookitemwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKITEMWIDGET_H
#define UI_BOOKITEMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bookItemWidget
{
public:
    QLabel *bookName;
    QLabel *bookImg;
    QPushButton *editButton;
    QLabel *bookAuthor;
    QPushButton *removeButton;
    QFrame *line;

    void setupUi(QWidget *bookItemWidget)
    {
        if (bookItemWidget->objectName().isEmpty())
            bookItemWidget->setObjectName(QStringLiteral("bookItemWidget"));
        bookItemWidget->resize(1180, 250);
        bookName = new QLabel(bookItemWidget);
        bookName->setObjectName(QStringLiteral("bookName"));
        bookName->setGeometry(QRect(150, 10, 1011, 71));
        QFont font;
        bookName->setFont(font);
        bookName->setStyleSheet(QStringLiteral("font-size: 40px;"));
        bookImg = new QLabel(bookItemWidget);
        bookImg->setObjectName(QStringLiteral("bookImg"));
        bookImg->setGeometry(QRect(0, 0, 141, 241));
        bookImg->setStyleSheet(QStringLiteral(""));
        editButton = new QPushButton(bookItemWidget);
        editButton->setObjectName(QStringLiteral("editButton"));
        editButton->setGeometry(QRect(790, 170, 161, 51));
        editButton->setCursor(QCursor(Qt::PointingHandCursor));
        editButton->setMouseTracking(true);
        bookAuthor = new QLabel(bookItemWidget);
        bookAuthor->setObjectName(QStringLiteral("bookAuthor"));
        bookAuthor->setGeometry(QRect(150, 120, 281, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Gadugi"));
        font1.setPointSize(20);
        font1.setItalic(true);
        bookAuthor->setFont(font1);
        removeButton = new QPushButton(bookItemWidget);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setGeometry(QRect(980, 170, 161, 51));
        removeButton->setCursor(QCursor(Qt::PointingHandCursor));
        removeButton->setMouseTracking(true);
        line = new QFrame(bookItemWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 240, 1221, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(bookItemWidget);

        QMetaObject::connectSlotsByName(bookItemWidget);
    } // setupUi

    void retranslateUi(QWidget *bookItemWidget)
    {
        bookItemWidget->setWindowTitle(QApplication::translate("bookItemWidget", "bookItemWidget", Q_NULLPTR));
        bookName->setText(QString());
        bookImg->setText(QString());
        editButton->setText(QApplication::translate("bookItemWidget", "Edit", Q_NULLPTR));
        bookAuthor->setText(QString());
        removeButton->setText(QApplication::translate("bookItemWidget", "Remove", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class bookItemWidget: public Ui_bookItemWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKITEMWIDGET_H
