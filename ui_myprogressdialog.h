/********************************************************************************
** Form generated from reading UI file 'myprogressdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYPROGRESSDIALOG_H
#define UI_MYPROGRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "infotextwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MyProgressDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *messageLabel;
    QProgressBar *progressBar;
    QWidget *cancelWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    InfoTextWidget *cancelInfoText;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *MyProgressDialog)
    {
        if (MyProgressDialog->objectName().isEmpty())
            MyProgressDialog->setObjectName(QStringLiteral("MyProgressDialog"));
        MyProgressDialog->resize(269, 129);
        verticalLayout = new QVBoxLayout(MyProgressDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        messageLabel = new QLabel(MyProgressDialog);
        messageLabel->setObjectName(QStringLiteral("messageLabel"));
        messageLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(messageLabel);

        progressBar = new QProgressBar(MyProgressDialog);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximum(0);
        progressBar->setValue(0);
        progressBar->setTextVisible(false);

        verticalLayout->addWidget(progressBar);

        cancelWidget = new QWidget(MyProgressDialog);
        cancelWidget->setObjectName(QStringLiteral("cancelWidget"));
        horizontalLayout = new QHBoxLayout(cancelWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(51, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelInfoText = new InfoTextWidget(cancelWidget);
        cancelInfoText->setObjectName(QStringLiteral("cancelInfoText"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cancelInfoText->sizePolicy().hasHeightForWidth());
        cancelInfoText->setSizePolicy(sizePolicy);
        cancelInfoText->setMinimumSize(QSize(16, 16));

        horizontalLayout->addWidget(cancelInfoText);

        cancelButton = new QPushButton(cancelWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(cancelWidget);


        retranslateUi(MyProgressDialog);

        QMetaObject::connectSlotsByName(MyProgressDialog);
    } // setupUi

    void retranslateUi(QDialog *MyProgressDialog)
    {
        MyProgressDialog->setWindowTitle(QString());
        messageLabel->setText(QApplication::translate("MyProgressDialog", "Progress message...", nullptr));
        cancelButton->setText(QApplication::translate("MyProgressDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyProgressDialog: public Ui_MyProgressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYPROGRESSDIALOG_H
