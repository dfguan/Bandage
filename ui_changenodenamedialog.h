/********************************************************************************
** Form generated from reading UI file 'changenodenamedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGENODENAMEDIALOG_H
#define UI_CHANGENODENAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ChangeNodeNameDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLabel *currentNodeNameLabel2;
    QLabel *currentNodeNameLabel1;
    QLabel *newNodeNameLabel;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *newNodeNameLineEdit;
    QLabel *label_4;
    QLabel *errorLabel;

    void setupUi(QDialog *ChangeNodeNameDialog)
    {
        if (ChangeNodeNameDialog->objectName().isEmpty())
            ChangeNodeNameDialog->setObjectName(QStringLiteral("ChangeNodeNameDialog"));
        ChangeNodeNameDialog->resize(418, 249);
        gridLayout = new QGridLayout(ChangeNodeNameDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(ChangeNodeNameDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 2);

        currentNodeNameLabel2 = new QLabel(ChangeNodeNameDialog);
        currentNodeNameLabel2->setObjectName(QStringLiteral("currentNodeNameLabel2"));

        gridLayout->addWidget(currentNodeNameLabel2, 2, 1, 1, 1);

        currentNodeNameLabel1 = new QLabel(ChangeNodeNameDialog);
        currentNodeNameLabel1->setObjectName(QStringLiteral("currentNodeNameLabel1"));

        gridLayout->addWidget(currentNodeNameLabel1, 2, 0, 1, 1);

        newNodeNameLabel = new QLabel(ChangeNodeNameDialog);
        newNodeNameLabel->setObjectName(QStringLiteral("newNodeNameLabel"));

        gridLayout->addWidget(newNodeNameLabel, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);

        newNodeNameLineEdit = new QLineEdit(ChangeNodeNameDialog);
        newNodeNameLineEdit->setObjectName(QStringLiteral("newNodeNameLineEdit"));

        gridLayout->addWidget(newNodeNameLineEdit, 3, 1, 1, 1);

        label_4 = new QLabel(ChangeNodeNameDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setWordWrap(true);

        gridLayout->addWidget(label_4, 0, 0, 1, 2);

        errorLabel = new QLabel(ChangeNodeNameDialog);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));

        gridLayout->addWidget(errorLabel, 4, 1, 1, 1);


        retranslateUi(ChangeNodeNameDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ChangeNodeNameDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ChangeNodeNameDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ChangeNodeNameDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangeNodeNameDialog)
    {
        ChangeNodeNameDialog->setWindowTitle(QApplication::translate("ChangeNodeNameDialog", "Change node name", nullptr));
        currentNodeNameLabel2->setText(QApplication::translate("ChangeNodeNameDialog", "old_name", nullptr));
        currentNodeNameLabel1->setText(QApplication::translate("ChangeNodeNameDialog", "Current node name:", nullptr));
        newNodeNameLabel->setText(QApplication::translate("ChangeNodeNameDialog", "New node name:", nullptr));
        label_4->setText(QApplication::translate("ChangeNodeNameDialog", "Enter a new name for the node.  Both the node and its reverse complement will be renamed.  A '+' will be appended to the name of the positive node and a '-' will be appended to the name of the negative node.", nullptr));
        errorLabel->setText(QApplication::translate("ChangeNodeNameDialog", "error", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeNodeNameDialog: public Ui_ChangeNodeNameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGENODENAMEDIALOG_H
