/********************************************************************************
** Form generated from reading UI file 'changenodedepthdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGENODEDEPTHDIALOG_H
#define UI_CHANGENODEDEPTHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ChangeNodeDepthDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *infoLabel;
    QSpacerItem *verticalSpacer_2;
    QLabel *nodeNameLabel1;
    QLabel *currentDepthLabel1;
    QLabel *currentDepthLabel2;
    QLabel *newDepthLabel;
    QDoubleSpinBox *newDepthSpinBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QLabel *nodeNameLabel2;

    void setupUi(QDialog *ChangeNodeDepthDialog)
    {
        if (ChangeNodeDepthDialog->objectName().isEmpty())
            ChangeNodeDepthDialog->setObjectName(QStringLiteral("ChangeNodeDepthDialog"));
        ChangeNodeDepthDialog->resize(367, 235);
        gridLayout = new QGridLayout(ChangeNodeDepthDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        infoLabel = new QLabel(ChangeNodeDepthDialog);
        infoLabel->setObjectName(QStringLiteral("infoLabel"));
        infoLabel->setWordWrap(true);

        gridLayout->addWidget(infoLabel, 0, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(263, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 2);

        nodeNameLabel1 = new QLabel(ChangeNodeDepthDialog);
        nodeNameLabel1->setObjectName(QStringLiteral("nodeNameLabel1"));

        gridLayout->addWidget(nodeNameLabel1, 2, 0, 1, 1);

        currentDepthLabel1 = new QLabel(ChangeNodeDepthDialog);
        currentDepthLabel1->setObjectName(QStringLiteral("currentDepthLabel1"));

        gridLayout->addWidget(currentDepthLabel1, 3, 0, 1, 1);

        currentDepthLabel2 = new QLabel(ChangeNodeDepthDialog);
        currentDepthLabel2->setObjectName(QStringLiteral("currentDepthLabel2"));

        gridLayout->addWidget(currentDepthLabel2, 3, 1, 1, 1);

        newDepthLabel = new QLabel(ChangeNodeDepthDialog);
        newDepthLabel->setObjectName(QStringLiteral("newDepthLabel"));

        gridLayout->addWidget(newDepthLabel, 4, 0, 1, 1);

        newDepthSpinBox = new QDoubleSpinBox(ChangeNodeDepthDialog);
        newDepthSpinBox->setObjectName(QStringLiteral("newDepthSpinBox"));
        newDepthSpinBox->setDecimals(1);
        newDepthSpinBox->setMinimum(0.1);
        newDepthSpinBox->setMaximum(1e+6);

        gridLayout->addWidget(newDepthSpinBox, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(263, 9, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 2);

        buttonBox = new QDialogButtonBox(ChangeNodeDepthDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 2);

        nodeNameLabel2 = new QLabel(ChangeNodeDepthDialog);
        nodeNameLabel2->setObjectName(QStringLiteral("nodeNameLabel2"));
        nodeNameLabel2->setWordWrap(true);

        gridLayout->addWidget(nodeNameLabel2, 2, 1, 1, 1);


        retranslateUi(ChangeNodeDepthDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ChangeNodeDepthDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ChangeNodeDepthDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ChangeNodeDepthDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangeNodeDepthDialog)
    {
        ChangeNodeDepthDialog->setWindowTitle(QApplication::translate("ChangeNodeDepthDialog", "Change depth", nullptr));
        infoLabel->setText(QApplication::translate("ChangeNodeDepthDialog", "Enter a new depth. Both the node and its reverse complement will be have their depth set to the new value.", nullptr));
        nodeNameLabel1->setText(QApplication::translate("ChangeNodeDepthDialog", "Node:", nullptr));
        currentDepthLabel1->setText(QApplication::translate("ChangeNodeDepthDialog", "Current depth:", nullptr));
        currentDepthLabel2->setText(QApplication::translate("ChangeNodeDepthDialog", "old_depth", nullptr));
        newDepthLabel->setText(QApplication::translate("ChangeNodeDepthDialog", "New depth:", nullptr));
        nodeNameLabel2->setText(QApplication::translate("ChangeNodeDepthDialog", "node_names", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeNodeDepthDialog: public Ui_ChangeNodeDepthDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGENODEDEPTHDIALOG_H
