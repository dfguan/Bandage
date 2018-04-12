/********************************************************************************
** Form generated from reading UI file 'querypathsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYPATHSDIALOG_H
#define UI_QUERYPATHSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include "infotextwidget.h"
#include "mytablewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QueryPathsDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *queryLabel;
    InfoTextWidget *queryPathsInfoText;
    MyTableWidget *tableWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QueryPathsDialog)
    {
        if (QueryPathsDialog->objectName().isEmpty())
            QueryPathsDialog->setObjectName(QStringLiteral("QueryPathsDialog"));
        QueryPathsDialog->resize(1069, 417);
        gridLayout = new QGridLayout(QueryPathsDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        queryLabel = new QLabel(QueryPathsDialog);
        queryLabel->setObjectName(QStringLiteral("queryLabel"));
        queryLabel->setWordWrap(true);

        gridLayout->addWidget(queryLabel, 0, 1, 1, 1);

        queryPathsInfoText = new InfoTextWidget(QueryPathsDialog);
        queryPathsInfoText->setObjectName(QStringLiteral("queryPathsInfoText"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(queryPathsInfoText->sizePolicy().hasHeightForWidth());
        queryPathsInfoText->setSizePolicy(sizePolicy);
        queryPathsInfoText->setMinimumSize(QSize(16, 16));

        gridLayout->addWidget(queryPathsInfoText, 0, 0, 1, 1);

        tableWidget = new MyTableWidget(QueryPathsDialog);
        if (tableWidget->columnCount() < 11)
            tableWidget->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 0, 1, 2);

        buttonBox = new QDialogButtonBox(QueryPathsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);


        retranslateUi(QueryPathsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QueryPathsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QueryPathsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QueryPathsDialog);
    } // setupUi

    void retranslateUi(QDialog *QueryPathsDialog)
    {
        QueryPathsDialog->setWindowTitle(QApplication::translate("QueryPathsDialog", "Query paths", nullptr));
        queryLabel->setText(QApplication::translate("QueryPathsDialog", "Query description", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QueryPathsDialog", "Path", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QueryPathsDialog", "Length (bp)", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QueryPathsDialog", "Query covered by path", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("QueryPathsDialog", "Query covered by hits", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("QueryPathsDialog", "Identity", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("QueryPathsDialog", "Mismatches", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("QueryPathsDialog", "Gap opens", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("QueryPathsDialog", "Relative length", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("QueryPathsDialog", "Length discrepancy", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("QueryPathsDialog", "E-value product", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("QueryPathsDialog", "Copy sequence to clipboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QueryPathsDialog: public Ui_QueryPathsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYPATHSDIALOG_H
