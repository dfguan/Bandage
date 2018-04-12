/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *iconLabel;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QFrame *line;
    QLabel *versionCopyrightLabel;
    QFrame *line_2;
    QLabel *aboutLabel;
    QFrame *line_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QStringLiteral("AboutDialog"));
        AboutDialog->resize(527, 510);
        verticalLayout_3 = new QVBoxLayout(AboutDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(12);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        iconLabel = new QLabel(AboutDialog);
        iconLabel->setObjectName(QStringLiteral("iconLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(128);
        sizePolicy.setVerticalStretch(128);
        sizePolicy.setHeightForWidth(iconLabel->sizePolicy().hasHeightForWidth());
        iconLabel->setSizePolicy(sizePolicy);
        iconLabel->setMinimumSize(QSize(185, 173));
        iconLabel->setMaximumSize(QSize(128, 128));
        iconLabel->setPixmap(QPixmap(QString::fromUtf8(":/icons/icon.png")));
        iconLabel->setScaledContents(true);

        verticalLayout_2->addWidget(iconLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        titleLabel = new QLabel(AboutDialog);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));

        verticalLayout->addWidget(titleLabel);

        line = new QFrame(AboutDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        versionCopyrightLabel = new QLabel(AboutDialog);
        versionCopyrightLabel->setObjectName(QStringLiteral("versionCopyrightLabel"));
        versionCopyrightLabel->setMinimumSize(QSize(300, 0));
        versionCopyrightLabel->setMaximumSize(QSize(300, 16777215));
        versionCopyrightLabel->setWordWrap(true);
        versionCopyrightLabel->setOpenExternalLinks(true);

        verticalLayout->addWidget(versionCopyrightLabel);

        line_2 = new QFrame(AboutDialog);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        aboutLabel = new QLabel(AboutDialog);
        aboutLabel->setObjectName(QStringLiteral("aboutLabel"));
        aboutLabel->setMinimumSize(QSize(300, 0));
        aboutLabel->setMaximumSize(QSize(300, 16777215));
        aboutLabel->setWordWrap(true);
        aboutLabel->setOpenExternalLinks(true);

        verticalLayout->addWidget(aboutLabel);

        line_3 = new QFrame(AboutDialog);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About Bandage", nullptr));
        iconLabel->setText(QString());
        titleLabel->setText(QApplication::translate("AboutDialog", "Bandage", nullptr));
        versionCopyrightLabel->setText(QApplication::translate("AboutDialog", "<html><head/><body><p>Version: xxx</p><p>Copyright 2017 Ryan Wick</p><p><a href=\"http://rrwick.github.io/Bandage/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://rrwick.github.io/Bandage/</span></a></p></body></html>", nullptr));
        aboutLabel->setText(QApplication::translate("AboutDialog", "<html><head/><body><p>Bandage is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.</p><p></p><p>Bandage is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.</p><p></p><p>See the GNU General Public License for more details:</p><p><a href=\"http://www.gnu.org/licenses/gpl.txt\"><span style=\" text-decoration: underline; color:#0000ff;\">http://www.gnu.org/licenses/gpl.txt</span></a></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
