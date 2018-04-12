/********************************************************************************
** Form generated from reading UI file 'blastsearchdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLASTSEARCHDIALOG_H
#define UI_BLASTSEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "infotextwidget.h"
#include "mytablewidget.h"

QT_BEGIN_NAMESPACE

class Ui_BlastSearchDialog
{
public:
    QGridLayout *gridLayout_2;
    QLabel *step2Label;
    QWidget *blastHitsWidget;
    QHBoxLayout *horizontalLayout_7;
    InfoTextWidget *blastHitsTableInfoText;
    MyTableWidget *blastHitsTableWidget;
    QWidget *buildBlastDatabaseWidget;
    QHBoxLayout *horizontalLayout;
    InfoTextWidget *buildBlastDatabaseInfoText;
    QPushButton *buildBlastDatabaseButton;
    QWidget *blastQueriesWidget1;
    QHBoxLayout *horizontalLayout_4;
    InfoTextWidget *loadQueriesFromFastaInfoText;
    QPushButton *loadQueriesFromFastaButton;
    QSpacerItem *horizontalSpacer_7;
    InfoTextWidget *enterQueryManuallyInfoText;
    QPushButton *enterQueryManuallyButton;
    QSpacerItem *horizontalSpacer_9;
    InfoTextWidget *clearSelectedQueriesInfoText;
    QPushButton *clearSelectedQueriesButton;
    QSpacerItem *horizontalSpacer_8;
    InfoTextWidget *clearAllQueriesInfoText;
    QPushButton *clearAllQueriesButton;
    QLabel *step2TickLabel;
    QLabel *step1Label;
    QDialogButtonBox *buttonBox;
    QLabel *step3TickLabel;
    QFrame *line_3;
    QFrame *line;
    QFrame *line_2;
    QLabel *step3Label;
    QFrame *line_4;
    QLabel *hitsLabel;
    QLabel *step1TickLabel;
    QSpacerItem *verticalSpacer_2;
    QWidget *blastQueriesWidget2;
    QHBoxLayout *horizontalLayout_2;
    InfoTextWidget *blastQueriesTableInfoText;
    MyTableWidget *blastQueriesTableWidget;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QWidget *blastSearchWidget;
    QGridLayout *gridLayout;
    InfoTextWidget *blastHitFiltersInfoText;
    InfoTextWidget *parametersInfoText;
    QPushButton *blastFiltersButton;
    QLabel *blastHitFiltersLabel;
    QLabel *parametersLabel;
    QLineEdit *parametersLineEdit;
    InfoTextWidget *startBlastSearchInfoText;
    QPushButton *runBlastSearchButton;

    void setupUi(QDialog *BlastSearchDialog)
    {
        if (BlastSearchDialog->objectName().isEmpty())
            BlastSearchDialog->setObjectName(QStringLiteral("BlastSearchDialog"));
        BlastSearchDialog->resize(1222, 753);
        gridLayout_2 = new QGridLayout(BlastSearchDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        step2Label = new QLabel(BlastSearchDialog);
        step2Label->setObjectName(QStringLiteral("step2Label"));

        gridLayout_2->addWidget(step2Label, 3, 1, 1, 1);

        blastHitsWidget = new QWidget(BlastSearchDialog);
        blastHitsWidget->setObjectName(QStringLiteral("blastHitsWidget"));
        horizontalLayout_7 = new QHBoxLayout(blastHitsWidget);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        blastHitsTableInfoText = new InfoTextWidget(blastHitsWidget);
        blastHitsTableInfoText->setObjectName(QStringLiteral("blastHitsTableInfoText"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(blastHitsTableInfoText->sizePolicy().hasHeightForWidth());
        blastHitsTableInfoText->setSizePolicy(sizePolicy);
        blastHitsTableInfoText->setMinimumSize(QSize(16, 16));

        horizontalLayout_7->addWidget(blastHitsTableInfoText);

        blastHitsTableWidget = new MyTableWidget(blastHitsWidget);
        if (blastHitsTableWidget->columnCount() < 14)
            blastHitsTableWidget->setColumnCount(14);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        blastHitsTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        blastHitsTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        blastHitsTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        blastHitsTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        blastHitsTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        blastHitsTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        blastHitsTableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        blastHitsTableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        blastHitsTableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        blastHitsTableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        blastHitsTableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        blastHitsTableWidget->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        blastHitsTableWidget->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        blastHitsTableWidget->setHorizontalHeaderItem(13, __qtablewidgetitem13);
        blastHitsTableWidget->setObjectName(QStringLiteral("blastHitsTableWidget"));

        horizontalLayout_7->addWidget(blastHitsTableWidget);


        gridLayout_2->addWidget(blastHitsWidget, 12, 2, 2, 1);

        buildBlastDatabaseWidget = new QWidget(BlastSearchDialog);
        buildBlastDatabaseWidget->setObjectName(QStringLiteral("buildBlastDatabaseWidget"));
        horizontalLayout = new QHBoxLayout(buildBlastDatabaseWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        buildBlastDatabaseInfoText = new InfoTextWidget(buildBlastDatabaseWidget);
        buildBlastDatabaseInfoText->setObjectName(QStringLiteral("buildBlastDatabaseInfoText"));
        sizePolicy.setHeightForWidth(buildBlastDatabaseInfoText->sizePolicy().hasHeightForWidth());
        buildBlastDatabaseInfoText->setSizePolicy(sizePolicy);
        buildBlastDatabaseInfoText->setMinimumSize(QSize(16, 16));

        horizontalLayout->addWidget(buildBlastDatabaseInfoText);

        buildBlastDatabaseButton = new QPushButton(buildBlastDatabaseWidget);
        buildBlastDatabaseButton->setObjectName(QStringLiteral("buildBlastDatabaseButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buildBlastDatabaseButton->sizePolicy().hasHeightForWidth());
        buildBlastDatabaseButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(buildBlastDatabaseButton);


        gridLayout_2->addWidget(buildBlastDatabaseWidget, 0, 2, 1, 1);

        blastQueriesWidget1 = new QWidget(BlastSearchDialog);
        blastQueriesWidget1->setObjectName(QStringLiteral("blastQueriesWidget1"));
        horizontalLayout_4 = new QHBoxLayout(blastQueriesWidget1);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        loadQueriesFromFastaInfoText = new InfoTextWidget(blastQueriesWidget1);
        loadQueriesFromFastaInfoText->setObjectName(QStringLiteral("loadQueriesFromFastaInfoText"));
        sizePolicy.setHeightForWidth(loadQueriesFromFastaInfoText->sizePolicy().hasHeightForWidth());
        loadQueriesFromFastaInfoText->setSizePolicy(sizePolicy);
        loadQueriesFromFastaInfoText->setMinimumSize(QSize(16, 16));

        horizontalLayout_4->addWidget(loadQueriesFromFastaInfoText);

        loadQueriesFromFastaButton = new QPushButton(blastQueriesWidget1);
        loadQueriesFromFastaButton->setObjectName(QStringLiteral("loadQueriesFromFastaButton"));
        sizePolicy1.setHeightForWidth(loadQueriesFromFastaButton->sizePolicy().hasHeightForWidth());
        loadQueriesFromFastaButton->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(loadQueriesFromFastaButton);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        enterQueryManuallyInfoText = new InfoTextWidget(blastQueriesWidget1);
        enterQueryManuallyInfoText->setObjectName(QStringLiteral("enterQueryManuallyInfoText"));
        sizePolicy.setHeightForWidth(enterQueryManuallyInfoText->sizePolicy().hasHeightForWidth());
        enterQueryManuallyInfoText->setSizePolicy(sizePolicy);
        enterQueryManuallyInfoText->setMinimumSize(QSize(16, 16));

        horizontalLayout_4->addWidget(enterQueryManuallyInfoText);

        enterQueryManuallyButton = new QPushButton(blastQueriesWidget1);
        enterQueryManuallyButton->setObjectName(QStringLiteral("enterQueryManuallyButton"));
        sizePolicy1.setHeightForWidth(enterQueryManuallyButton->sizePolicy().hasHeightForWidth());
        enterQueryManuallyButton->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(enterQueryManuallyButton);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);

        clearSelectedQueriesInfoText = new InfoTextWidget(blastQueriesWidget1);
        clearSelectedQueriesInfoText->setObjectName(QStringLiteral("clearSelectedQueriesInfoText"));
        sizePolicy.setHeightForWidth(clearSelectedQueriesInfoText->sizePolicy().hasHeightForWidth());
        clearSelectedQueriesInfoText->setSizePolicy(sizePolicy);
        clearSelectedQueriesInfoText->setMinimumSize(QSize(16, 16));

        horizontalLayout_4->addWidget(clearSelectedQueriesInfoText);

        clearSelectedQueriesButton = new QPushButton(blastQueriesWidget1);
        clearSelectedQueriesButton->setObjectName(QStringLiteral("clearSelectedQueriesButton"));
        sizePolicy1.setHeightForWidth(clearSelectedQueriesButton->sizePolicy().hasHeightForWidth());
        clearSelectedQueriesButton->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(clearSelectedQueriesButton);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        clearAllQueriesInfoText = new InfoTextWidget(blastQueriesWidget1);
        clearAllQueriesInfoText->setObjectName(QStringLiteral("clearAllQueriesInfoText"));
        sizePolicy.setHeightForWidth(clearAllQueriesInfoText->sizePolicy().hasHeightForWidth());
        clearAllQueriesInfoText->setSizePolicy(sizePolicy);
        clearAllQueriesInfoText->setMinimumSize(QSize(16, 16));

        horizontalLayout_4->addWidget(clearAllQueriesInfoText);

        clearAllQueriesButton = new QPushButton(blastQueriesWidget1);
        clearAllQueriesButton->setObjectName(QStringLiteral("clearAllQueriesButton"));
        sizePolicy1.setHeightForWidth(clearAllQueriesButton->sizePolicy().hasHeightForWidth());
        clearAllQueriesButton->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(clearAllQueriesButton);


        gridLayout_2->addWidget(blastQueriesWidget1, 3, 2, 1, 1);

        step2TickLabel = new QLabel(BlastSearchDialog);
        step2TickLabel->setObjectName(QStringLiteral("step2TickLabel"));
        sizePolicy.setHeightForWidth(step2TickLabel->sizePolicy().hasHeightForWidth());
        step2TickLabel->setSizePolicy(sizePolicy);
        step2TickLabel->setMinimumSize(QSize(32, 32));
        step2TickLabel->setMaximumSize(QSize(32, 32));
        step2TickLabel->setScaledContents(true);

        gridLayout_2->addWidget(step2TickLabel, 3, 0, 1, 1);

        step1Label = new QLabel(BlastSearchDialog);
        step1Label->setObjectName(QStringLiteral("step1Label"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        step1Label->setFont(font);

        gridLayout_2->addWidget(step1Label, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(BlastSearchDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout_2->addWidget(buttonBox, 18, 2, 1, 1);

        step3TickLabel = new QLabel(BlastSearchDialog);
        step3TickLabel->setObjectName(QStringLiteral("step3TickLabel"));
        sizePolicy.setHeightForWidth(step3TickLabel->sizePolicy().hasHeightForWidth());
        step3TickLabel->setSizePolicy(sizePolicy);
        step3TickLabel->setMinimumSize(QSize(32, 32));
        step3TickLabel->setMaximumSize(QSize(32, 32));
        step3TickLabel->setScaledContents(true);

        gridLayout_2->addWidget(step3TickLabel, 8, 0, 1, 1);

        line_3 = new QFrame(BlastSearchDialog);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 1, 0, 1, 3);

        line = new QFrame(BlastSearchDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 17, 2, 1, 1);

        line_2 = new QFrame(BlastSearchDialog);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 7, 0, 1, 3);

        step3Label = new QLabel(BlastSearchDialog);
        step3Label->setObjectName(QStringLiteral("step3Label"));

        gridLayout_2->addWidget(step3Label, 8, 1, 1, 1);

        line_4 = new QFrame(BlastSearchDialog);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_4, 11, 0, 1, 3);

        hitsLabel = new QLabel(BlastSearchDialog);
        hitsLabel->setObjectName(QStringLiteral("hitsLabel"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        hitsLabel->setFont(font1);

        gridLayout_2->addWidget(hitsLabel, 12, 1, 1, 1);

        step1TickLabel = new QLabel(BlastSearchDialog);
        step1TickLabel->setObjectName(QStringLiteral("step1TickLabel"));
        sizePolicy.setHeightForWidth(step1TickLabel->sizePolicy().hasHeightForWidth());
        step1TickLabel->setSizePolicy(sizePolicy);
        step1TickLabel->setMinimumSize(QSize(32, 32));
        step1TickLabel->setMaximumSize(QSize(32, 32));
        step1TickLabel->setScaledContents(true);

        gridLayout_2->addWidget(step1TickLabel, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 13, 1, 1, 1);

        blastQueriesWidget2 = new QWidget(BlastSearchDialog);
        blastQueriesWidget2->setObjectName(QStringLiteral("blastQueriesWidget2"));
        horizontalLayout_2 = new QHBoxLayout(blastQueriesWidget2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        blastQueriesTableInfoText = new InfoTextWidget(blastQueriesWidget2);
        blastQueriesTableInfoText->setObjectName(QStringLiteral("blastQueriesTableInfoText"));
        sizePolicy.setHeightForWidth(blastQueriesTableInfoText->sizePolicy().hasHeightForWidth());
        blastQueriesTableInfoText->setSizePolicy(sizePolicy);
        blastQueriesTableInfoText->setMinimumSize(QSize(16, 16));

        horizontalLayout_2->addWidget(blastQueriesTableInfoText);

        blastQueriesTableWidget = new MyTableWidget(blastQueriesWidget2);
        if (blastQueriesTableWidget->columnCount() < 8)
            blastQueriesTableWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        blastQueriesTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        blastQueriesTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        blastQueriesTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        blastQueriesTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        blastQueriesTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        blastQueriesTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        blastQueriesTableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        blastQueriesTableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem21);
        blastQueriesTableWidget->setObjectName(QStringLiteral("blastQueriesTableWidget"));

        horizontalLayout_2->addWidget(blastQueriesTableWidget);


        gridLayout_2->addWidget(blastQueriesWidget2, 4, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_2->addItem(verticalSpacer_3, 9, 1, 1, 1);

        blastSearchWidget = new QWidget(BlastSearchDialog);
        blastSearchWidget->setObjectName(QStringLiteral("blastSearchWidget"));
        gridLayout = new QGridLayout(blastSearchWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        blastHitFiltersInfoText = new InfoTextWidget(blastSearchWidget);
        blastHitFiltersInfoText->setObjectName(QStringLiteral("blastHitFiltersInfoText"));
        sizePolicy.setHeightForWidth(blastHitFiltersInfoText->sizePolicy().hasHeightForWidth());
        blastHitFiltersInfoText->setSizePolicy(sizePolicy);
        blastHitFiltersInfoText->setMinimumSize(QSize(16, 16));

        gridLayout->addWidget(blastHitFiltersInfoText, 1, 0, 1, 1);

        parametersInfoText = new InfoTextWidget(blastSearchWidget);
        parametersInfoText->setObjectName(QStringLiteral("parametersInfoText"));
        sizePolicy.setHeightForWidth(parametersInfoText->sizePolicy().hasHeightForWidth());
        parametersInfoText->setSizePolicy(sizePolicy);
        parametersInfoText->setMinimumSize(QSize(16, 16));

        gridLayout->addWidget(parametersInfoText, 0, 0, 1, 1);

        blastFiltersButton = new QPushButton(blastSearchWidget);
        blastFiltersButton->setObjectName(QStringLiteral("blastFiltersButton"));

        gridLayout->addWidget(blastFiltersButton, 1, 1, 1, 1);

        blastHitFiltersLabel = new QLabel(blastSearchWidget);
        blastHitFiltersLabel->setObjectName(QStringLiteral("blastHitFiltersLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(blastHitFiltersLabel->sizePolicy().hasHeightForWidth());
        blastHitFiltersLabel->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(blastHitFiltersLabel, 1, 2, 1, 1);

        parametersLabel = new QLabel(blastSearchWidget);
        parametersLabel->setObjectName(QStringLiteral("parametersLabel"));

        gridLayout->addWidget(parametersLabel, 0, 1, 1, 1);

        parametersLineEdit = new QLineEdit(blastSearchWidget);
        parametersLineEdit->setObjectName(QStringLiteral("parametersLineEdit"));

        gridLayout->addWidget(parametersLineEdit, 0, 2, 1, 2);

        startBlastSearchInfoText = new InfoTextWidget(blastSearchWidget);
        startBlastSearchInfoText->setObjectName(QStringLiteral("startBlastSearchInfoText"));
        sizePolicy.setHeightForWidth(startBlastSearchInfoText->sizePolicy().hasHeightForWidth());
        startBlastSearchInfoText->setSizePolicy(sizePolicy);
        startBlastSearchInfoText->setMinimumSize(QSize(16, 16));

        gridLayout->addWidget(startBlastSearchInfoText, 2, 0, 1, 1);

        runBlastSearchButton = new QPushButton(blastSearchWidget);
        runBlastSearchButton->setObjectName(QStringLiteral("runBlastSearchButton"));
        sizePolicy1.setHeightForWidth(runBlastSearchButton->sizePolicy().hasHeightForWidth());
        runBlastSearchButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(runBlastSearchButton, 2, 1, 1, 3);


        gridLayout_2->addWidget(blastSearchWidget, 8, 2, 2, 1);

        QWidget::setTabOrder(buildBlastDatabaseButton, loadQueriesFromFastaButton);
        QWidget::setTabOrder(loadQueriesFromFastaButton, enterQueryManuallyButton);
        QWidget::setTabOrder(enterQueryManuallyButton, clearSelectedQueriesButton);
        QWidget::setTabOrder(clearSelectedQueriesButton, clearAllQueriesButton);
        QWidget::setTabOrder(clearAllQueriesButton, blastQueriesTableWidget);
        QWidget::setTabOrder(blastQueriesTableWidget, parametersLineEdit);
        QWidget::setTabOrder(parametersLineEdit, blastFiltersButton);
        QWidget::setTabOrder(blastFiltersButton, runBlastSearchButton);
        QWidget::setTabOrder(runBlastSearchButton, blastHitsTableWidget);

        retranslateUi(BlastSearchDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), BlastSearchDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), BlastSearchDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(BlastSearchDialog);
    } // setupUi

    void retranslateUi(QDialog *BlastSearchDialog)
    {
        BlastSearchDialog->setWindowTitle(QApplication::translate("BlastSearchDialog", "BLAST search", nullptr));
        step2Label->setText(QApplication::translate("BlastSearchDialog", "<html><head/><body><p><span style=\" font-weight:600;\">Step 2: </span>enter BLAST queries</p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = blastHitsTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("BlastSearchDialog", "Query name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = blastHitsTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("BlastSearchDialog", "Node name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = blastHitsTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QApplication::translate("BlastSearchDialog", "Percent identity", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = blastHitsTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QApplication::translate("BlastSearchDialog", "Alignment length", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = blastHitsTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem4->setText(QApplication::translate("BlastSearchDialog", "Query cover", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = blastHitsTableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem5->setText(QApplication::translate("BlastSearchDialog", "Mismatches", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = blastHitsTableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem6->setText(QApplication::translate("BlastSearchDialog", "Gap opens", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = blastHitsTableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem7->setText(QApplication::translate("BlastSearchDialog", "Query start", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = blastHitsTableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem8->setText(QApplication::translate("BlastSearchDialog", "Query end", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = blastHitsTableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem9->setText(QApplication::translate("BlastSearchDialog", "Node start", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = blastHitsTableWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem10->setText(QApplication::translate("BlastSearchDialog", "Node end", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = blastHitsTableWidget->horizontalHeaderItem(12);
        ___qtablewidgetitem11->setText(QApplication::translate("BlastSearchDialog", "E-value", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = blastHitsTableWidget->horizontalHeaderItem(13);
        ___qtablewidgetitem12->setText(QApplication::translate("BlastSearchDialog", "Bit score", nullptr));
        buildBlastDatabaseButton->setText(QApplication::translate("BlastSearchDialog", "Build BLAST database", nullptr));
        loadQueriesFromFastaButton->setText(QApplication::translate("BlastSearchDialog", "Load from FASTA file", nullptr));
        enterQueryManuallyButton->setText(QApplication::translate("BlastSearchDialog", "Enter manually", nullptr));
        clearSelectedQueriesButton->setText(QApplication::translate("BlastSearchDialog", "Clear selected", nullptr));
        clearAllQueriesButton->setText(QApplication::translate("BlastSearchDialog", "Clear all", nullptr));
        step2TickLabel->setText(QString());
        step1Label->setText(QApplication::translate("BlastSearchDialog", "<html><head/><body><p><span style=\" font-weight:600;\">Step 1: </span>build BLAST database</p></body></html>", nullptr));
        step3TickLabel->setText(QString());
        step3Label->setText(QApplication::translate("BlastSearchDialog", "<html><head/><body><p><span style=\" font-weight:600;\">Step 3:</span> run BLAST search</p></body></html>", nullptr));
        hitsLabel->setText(QApplication::translate("BlastSearchDialog", "Hits:", nullptr));
        step1TickLabel->setText(QString());
        QTableWidgetItem *___qtablewidgetitem13 = blastQueriesTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("BlastSearchDialog", "Show", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = blastQueriesTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem14->setText(QApplication::translate("BlastSearchDialog", "Query name", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = blastQueriesTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem15->setText(QApplication::translate("BlastSearchDialog", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = blastQueriesTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem16->setText(QApplication::translate("BlastSearchDialog", "Length", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = blastQueriesTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem17->setText(QApplication::translate("BlastSearchDialog", "Hits", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = blastQueriesTableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem18->setText(QApplication::translate("BlastSearchDialog", "Query cover", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = blastQueriesTableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem19->setText(QApplication::translate("BlastSearchDialog", "Paths", nullptr));
        blastFiltersButton->setText(QApplication::translate("BlastSearchDialog", "Set BLAST hit filters", nullptr));
        blastHitFiltersLabel->setText(QApplication::translate("BlastSearchDialog", "Current filters: none", nullptr));
        parametersLabel->setText(QApplication::translate("BlastSearchDialog", "Command line parameters:", nullptr));
        runBlastSearchButton->setText(QApplication::translate("BlastSearchDialog", "Run BLAST search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BlastSearchDialog: public Ui_BlastSearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLASTSEARCHDIALOG_H
