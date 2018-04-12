/********************************************************************************
** Form generated from reading UI file 'pathspecifydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATHSPECIFYDIALOG_H
#define UI_PATHSPECIFYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "infotextwidget.h"

QT_BEGIN_NAMESPACE

class Ui_PathSpecifyDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPlainTextEdit *pathTextEdit;
    QPushButton *copyButton;
    QDialogButtonBox *buttonBox;
    QPushButton *saveButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *tickCrossLabel;
    QLabel *validPathLabel;
    QWidget *circularPathWidget;
    QHBoxLayout *horizontalLayout;
    InfoTextWidget *circularPathInfoText;
    QCheckBox *circularPathCheckBox;

    void setupUi(QDialog *PathSpecifyDialog)
    {
        if (PathSpecifyDialog->objectName().isEmpty())
            PathSpecifyDialog->setObjectName(QStringLiteral("PathSpecifyDialog"));
        PathSpecifyDialog->resize(464, 476);
        gridLayout = new QGridLayout(PathSpecifyDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(PathSpecifyDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        pathTextEdit = new QPlainTextEdit(PathSpecifyDialog);
        pathTextEdit->setObjectName(QStringLiteral("pathTextEdit"));

        gridLayout->addWidget(pathTextEdit, 2, 0, 1, 2);

        copyButton = new QPushButton(PathSpecifyDialog);
        copyButton->setObjectName(QStringLiteral("copyButton"));

        gridLayout->addWidget(copyButton, 5, 0, 1, 1);

        buttonBox = new QDialogButtonBox(PathSpecifyDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 2);

        saveButton = new QPushButton(PathSpecifyDialog);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        gridLayout->addWidget(saveButton, 5, 1, 1, 1);

        widget = new QWidget(PathSpecifyDialog);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        tickCrossLabel = new QLabel(widget);
        tickCrossLabel->setObjectName(QStringLiteral("tickCrossLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tickCrossLabel->sizePolicy().hasHeightForWidth());
        tickCrossLabel->setSizePolicy(sizePolicy);
        tickCrossLabel->setMinimumSize(QSize(32, 32));
        tickCrossLabel->setMaximumSize(QSize(32, 32));
        tickCrossLabel->setPixmap(QPixmap(QString::fromUtf8(":/icons/cross-128.png")));
        tickCrossLabel->setScaledContents(true);

        horizontalLayout_2->addWidget(tickCrossLabel);

        validPathLabel = new QLabel(widget);
        validPathLabel->setObjectName(QStringLiteral("validPathLabel"));
        validPathLabel->setWordWrap(true);

        horizontalLayout_2->addWidget(validPathLabel);


        gridLayout->addWidget(widget, 4, 0, 1, 2);

        circularPathWidget = new QWidget(PathSpecifyDialog);
        circularPathWidget->setObjectName(QStringLiteral("circularPathWidget"));
        horizontalLayout = new QHBoxLayout(circularPathWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        circularPathInfoText = new InfoTextWidget(circularPathWidget);
        circularPathInfoText->setObjectName(QStringLiteral("circularPathInfoText"));
        sizePolicy.setHeightForWidth(circularPathInfoText->sizePolicy().hasHeightForWidth());
        circularPathInfoText->setSizePolicy(sizePolicy);
        circularPathInfoText->setMinimumSize(QSize(16, 16));

        horizontalLayout->addWidget(circularPathInfoText);

        circularPathCheckBox = new QCheckBox(circularPathWidget);
        circularPathCheckBox->setObjectName(QStringLiteral("circularPathCheckBox"));

        horizontalLayout->addWidget(circularPathCheckBox);


        gridLayout->addWidget(circularPathWidget, 1, 0, 1, 2);

        QWidget::setTabOrder(circularPathCheckBox, pathTextEdit);
        QWidget::setTabOrder(pathTextEdit, copyButton);
        QWidget::setTabOrder(copyButton, saveButton);

        retranslateUi(PathSpecifyDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PathSpecifyDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PathSpecifyDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PathSpecifyDialog);
    } // setupUi

    void retranslateUi(QDialog *PathSpecifyDialog)
    {
        PathSpecifyDialog->setWindowTitle(QApplication::translate("PathSpecifyDialog", "Specify exact path", nullptr));
        label->setText(QApplication::translate("PathSpecifyDialog", "Define a path by providing an ordered list of exact nodes, with their directionality, separated by commas.  You can optionally specify a start position for the first node and/or an end position for the last node by enclosing a number in parentheses at the beginning and/or end.\n"
"\n"
"Example without start/end positions: 5+, 6-, 41+\n"
"Example with start/end positions: (3039) 5+, 6-, 41+ (1023)\n"
"\n"
"Double clicking on a node in the graph will add it to the path, if possible. As directionality is important, it may be helpful to do this when the graph is drawn in double mode.", nullptr));
        copyButton->setText(QApplication::translate("PathSpecifyDialog", "Copy to clipboard", nullptr));
        saveButton->setText(QApplication::translate("PathSpecifyDialog", "Save to file", nullptr));
        tickCrossLabel->setText(QString());
        validPathLabel->setText(QApplication::translate("PathSpecifyDialog", "Path is invalid", nullptr));
        circularPathCheckBox->setText(QApplication::translate("PathSpecifyDialog", "Circular path", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PathSpecifyDialog: public Ui_PathSpecifyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATHSPECIFYDIALOG_H
