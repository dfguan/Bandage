/********************************************************************************
** Form generated from reading UI file 'blasthitfiltersdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLASTHITFILTERSDIALOG_H
#define UI_BLASTHITFILTERSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "infotextwidget.h"

QT_BEGIN_NAMESPACE

class Ui_BlastHitFiltersDialog
{
public:
    QGridLayout *gridLayout;
    InfoTextWidget *eValueInfoText;
    InfoTextWidget *alignmentLengthInfoText;
    InfoTextWidget *queryCoverageInfoText;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *eValueCoefficientSpinBox;
    QSpinBox *eValueExponentSpinBox;
    InfoTextWidget *identityInfoText;
    InfoTextWidget *bitScoreInfoText;
    QSpacerItem *horizontalSpacer;
    QDoubleSpinBox *identitySpinBox;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *bitScoreCheckBox;
    QSpinBox *alignmentLengthSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QDoubleSpinBox *queryCoverageSpinBox;
    QCheckBox *queryCoverageCheckBox;
    QCheckBox *eValueCheckBox;
    QCheckBox *alignmentLengthCheckBox;
    QDialogButtonBox *buttonBox;
    QCheckBox *identityCheckBox;
    QLabel *filterDescriptionLabel;
    QDoubleSpinBox *bitScoreSpinBox;

    void setupUi(QDialog *BlastHitFiltersDialog)
    {
        if (BlastHitFiltersDialog->objectName().isEmpty())
            BlastHitFiltersDialog->setObjectName(QStringLiteral("BlastHitFiltersDialog"));
        BlastHitFiltersDialog->resize(334, 323);
        gridLayout = new QGridLayout(BlastHitFiltersDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        eValueInfoText = new InfoTextWidget(BlastHitFiltersDialog);
        eValueInfoText->setObjectName(QStringLiteral("eValueInfoText"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(eValueInfoText->sizePolicy().hasHeightForWidth());
        eValueInfoText->setSizePolicy(sizePolicy);
        eValueInfoText->setMinimumSize(QSize(16, 16));

        gridLayout->addWidget(eValueInfoText, 5, 1, 1, 1);

        alignmentLengthInfoText = new InfoTextWidget(BlastHitFiltersDialog);
        alignmentLengthInfoText->setObjectName(QStringLiteral("alignmentLengthInfoText"));
        sizePolicy.setHeightForWidth(alignmentLengthInfoText->sizePolicy().hasHeightForWidth());
        alignmentLengthInfoText->setSizePolicy(sizePolicy);
        alignmentLengthInfoText->setMinimumSize(QSize(16, 16));

        gridLayout->addWidget(alignmentLengthInfoText, 2, 1, 1, 1);

        queryCoverageInfoText = new InfoTextWidget(BlastHitFiltersDialog);
        queryCoverageInfoText->setObjectName(QStringLiteral("queryCoverageInfoText"));
        sizePolicy.setHeightForWidth(queryCoverageInfoText->sizePolicy().hasHeightForWidth());
        queryCoverageInfoText->setSizePolicy(sizePolicy);
        queryCoverageInfoText->setMinimumSize(QSize(16, 16));

        gridLayout->addWidget(queryCoverageInfoText, 3, 1, 1, 1);

        widget = new QWidget(BlastHitFiltersDialog);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        eValueCoefficientSpinBox = new QDoubleSpinBox(widget);
        eValueCoefficientSpinBox->setObjectName(QStringLiteral("eValueCoefficientSpinBox"));
        eValueCoefficientSpinBox->setAlignment(Qt::AlignCenter);
        eValueCoefficientSpinBox->setMaximum(9.99);

        horizontalLayout->addWidget(eValueCoefficientSpinBox);

        eValueExponentSpinBox = new QSpinBox(widget);
        eValueExponentSpinBox->setObjectName(QStringLiteral("eValueExponentSpinBox"));
        eValueExponentSpinBox->setAlignment(Qt::AlignCenter);
        eValueExponentSpinBox->setMinimum(-999);
        eValueExponentSpinBox->setMaximum(1);

        horizontalLayout->addWidget(eValueExponentSpinBox);


        gridLayout->addWidget(widget, 5, 3, 1, 1);

        identityInfoText = new InfoTextWidget(BlastHitFiltersDialog);
        identityInfoText->setObjectName(QStringLiteral("identityInfoText"));
        sizePolicy.setHeightForWidth(identityInfoText->sizePolicy().hasHeightForWidth());
        identityInfoText->setSizePolicy(sizePolicy);
        identityInfoText->setMinimumSize(QSize(16, 16));

        gridLayout->addWidget(identityInfoText, 4, 1, 1, 1);

        bitScoreInfoText = new InfoTextWidget(BlastHitFiltersDialog);
        bitScoreInfoText->setObjectName(QStringLiteral("bitScoreInfoText"));
        sizePolicy.setHeightForWidth(bitScoreInfoText->sizePolicy().hasHeightForWidth());
        bitScoreInfoText->setSizePolicy(sizePolicy);
        bitScoreInfoText->setMinimumSize(QSize(16, 16));

        gridLayout->addWidget(bitScoreInfoText, 6, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        identitySpinBox = new QDoubleSpinBox(BlastHitFiltersDialog);
        identitySpinBox->setObjectName(QStringLiteral("identitySpinBox"));
        identitySpinBox->setAlignment(Qt::AlignCenter);
        identitySpinBox->setMaximum(100);

        gridLayout->addWidget(identitySpinBox, 4, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 2, 1, 1);

        bitScoreCheckBox = new QCheckBox(BlastHitFiltersDialog);
        bitScoreCheckBox->setObjectName(QStringLiteral("bitScoreCheckBox"));

        gridLayout->addWidget(bitScoreCheckBox, 6, 2, 1, 1);

        alignmentLengthSpinBox = new QSpinBox(BlastHitFiltersDialog);
        alignmentLengthSpinBox->setObjectName(QStringLiteral("alignmentLengthSpinBox"));
        alignmentLengthSpinBox->setAlignment(Qt::AlignCenter);
        alignmentLengthSpinBox->setMaximum(1000000);

        gridLayout->addWidget(alignmentLengthSpinBox, 2, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 4, 1, 1);

        queryCoverageSpinBox = new QDoubleSpinBox(BlastHitFiltersDialog);
        queryCoverageSpinBox->setObjectName(QStringLiteral("queryCoverageSpinBox"));
        queryCoverageSpinBox->setAlignment(Qt::AlignCenter);
        queryCoverageSpinBox->setMaximum(100);

        gridLayout->addWidget(queryCoverageSpinBox, 3, 3, 1, 1);

        queryCoverageCheckBox = new QCheckBox(BlastHitFiltersDialog);
        queryCoverageCheckBox->setObjectName(QStringLiteral("queryCoverageCheckBox"));

        gridLayout->addWidget(queryCoverageCheckBox, 3, 2, 1, 1);

        eValueCheckBox = new QCheckBox(BlastHitFiltersDialog);
        eValueCheckBox->setObjectName(QStringLiteral("eValueCheckBox"));

        gridLayout->addWidget(eValueCheckBox, 5, 2, 1, 1);

        alignmentLengthCheckBox = new QCheckBox(BlastHitFiltersDialog);
        alignmentLengthCheckBox->setObjectName(QStringLiteral("alignmentLengthCheckBox"));

        gridLayout->addWidget(alignmentLengthCheckBox, 2, 2, 1, 1);

        buttonBox = new QDialogButtonBox(BlastHitFiltersDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 9, 0, 1, 5);

        identityCheckBox = new QCheckBox(BlastHitFiltersDialog);
        identityCheckBox->setObjectName(QStringLiteral("identityCheckBox"));

        gridLayout->addWidget(identityCheckBox, 4, 2, 1, 1);

        filterDescriptionLabel = new QLabel(BlastHitFiltersDialog);
        filterDescriptionLabel->setObjectName(QStringLiteral("filterDescriptionLabel"));
        filterDescriptionLabel->setWordWrap(true);

        gridLayout->addWidget(filterDescriptionLabel, 0, 0, 1, 5);

        bitScoreSpinBox = new QDoubleSpinBox(BlastHitFiltersDialog);
        bitScoreSpinBox->setObjectName(QStringLiteral("bitScoreSpinBox"));
        bitScoreSpinBox->setAlignment(Qt::AlignCenter);
        bitScoreSpinBox->setDecimals(1);
        bitScoreSpinBox->setMaximum(1e+6);

        gridLayout->addWidget(bitScoreSpinBox, 6, 3, 1, 1);

        QWidget::setTabOrder(alignmentLengthCheckBox, alignmentLengthSpinBox);
        QWidget::setTabOrder(alignmentLengthSpinBox, queryCoverageCheckBox);
        QWidget::setTabOrder(queryCoverageCheckBox, queryCoverageSpinBox);
        QWidget::setTabOrder(queryCoverageSpinBox, identityCheckBox);
        QWidget::setTabOrder(identityCheckBox, identitySpinBox);
        QWidget::setTabOrder(identitySpinBox, eValueCheckBox);
        QWidget::setTabOrder(eValueCheckBox, eValueCoefficientSpinBox);
        QWidget::setTabOrder(eValueCoefficientSpinBox, eValueExponentSpinBox);
        QWidget::setTabOrder(eValueExponentSpinBox, bitScoreCheckBox);

        retranslateUi(BlastHitFiltersDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), BlastHitFiltersDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), BlastHitFiltersDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(BlastHitFiltersDialog);
    } // setupUi

    void retranslateUi(QDialog *BlastHitFiltersDialog)
    {
        BlastHitFiltersDialog->setWindowTitle(QApplication::translate("BlastHitFiltersDialog", "BLAST hit filters", nullptr));
        eValueExponentSpinBox->setPrefix(QApplication::translate("BlastHitFiltersDialog", "e", nullptr));
        identitySpinBox->setSuffix(QApplication::translate("BlastHitFiltersDialog", "%", nullptr));
        bitScoreCheckBox->setText(QApplication::translate("BlastHitFiltersDialog", "Bit score:", nullptr));
        queryCoverageSpinBox->setSuffix(QApplication::translate("BlastHitFiltersDialog", "%", nullptr));
        queryCoverageCheckBox->setText(QApplication::translate("BlastHitFiltersDialog", "Query coverage:", nullptr));
        eValueCheckBox->setText(QApplication::translate("BlastHitFiltersDialog", "E-value:", nullptr));
        alignmentLengthCheckBox->setText(QApplication::translate("BlastHitFiltersDialog", "Alignment length:", nullptr));
        identityCheckBox->setText(QApplication::translate("BlastHitFiltersDialog", "Identity:", nullptr));
        filterDescriptionLabel->setText(QApplication::translate("BlastHitFiltersDialog", "Turn on one or more of these filters to exclude BLAST hits which fail to meet the defined threshold. To see the effects of changing these filters, it is necessary to rerun the BLAST search.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BlastHitFiltersDialog: public Ui_BlastHitFiltersDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLASTHITFILTERSDIALOG_H
