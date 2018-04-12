/********************************************************************************
** Form generated from reading UI file 'enteroneblastquerydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTERONEBLASTQUERYDIALOG_H
#define UI_ENTERONEBLASTQUERYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_EnterOneBlastQueryDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *nameLineEdit;
    QLabel *label_2;
    QFrame *line;
    QDialogButtonBox *buttonBox;
    QPlainTextEdit *sequenceTextEdit;

    void setupUi(QDialog *EnterOneBlastQueryDialog)
    {
        if (EnterOneBlastQueryDialog->objectName().isEmpty())
            EnterOneBlastQueryDialog->setObjectName(QStringLiteral("EnterOneBlastQueryDialog"));
        EnterOneBlastQueryDialog->resize(400, 300);
        gridLayout = new QGridLayout(EnterOneBlastQueryDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(EnterOneBlastQueryDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        nameLineEdit = new QLineEdit(EnterOneBlastQueryDialog);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        gridLayout->addWidget(nameLineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(EnterOneBlastQueryDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        line = new QFrame(EnterOneBlastQueryDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 2);

        buttonBox = new QDialogButtonBox(EnterOneBlastQueryDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 2);

        sequenceTextEdit = new QPlainTextEdit(EnterOneBlastQueryDialog);
        sequenceTextEdit->setObjectName(QStringLiteral("sequenceTextEdit"));

        gridLayout->addWidget(sequenceTextEdit, 1, 1, 1, 1);

        QWidget::setTabOrder(nameLineEdit, sequenceTextEdit);

        retranslateUi(EnterOneBlastQueryDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EnterOneBlastQueryDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EnterOneBlastQueryDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EnterOneBlastQueryDialog);
    } // setupUi

    void retranslateUi(QDialog *EnterOneBlastQueryDialog)
    {
        EnterOneBlastQueryDialog->setWindowTitle(QApplication::translate("EnterOneBlastQueryDialog", "Enter BLAST query", nullptr));
        label->setText(QApplication::translate("EnterOneBlastQueryDialog", "Name (optional):", nullptr));
        label_2->setText(QApplication::translate("EnterOneBlastQueryDialog", "Sequence:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnterOneBlastQueryDialog: public Ui_EnterOneBlastQueryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERONEBLASTQUERYDIALOG_H
