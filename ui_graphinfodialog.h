/********************************************************************************
** Form generated from reading UI file 'graphinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHINFODIALOG_H
#define UI_GRAPHINFODIALOG_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "infotextwidget.h"

QT_BEGIN_NAMESPACE

class Ui_GraphInfoDialog
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_20;
    QLabel *filenameLabel;
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *edgeCountLabel;
    QLabel *label_13;
    QLabel *totalLengthNoOverlapsLabel;
    QLabel *label_10;
    QLabel *nodeCountLabel;
    QLabel *label;
    InfoTextWidget *connectedComponentsInfoText;
    QLabel *percentageDeadEndsLabel;
    QSpacerItem *verticalSpacer_5;
    InfoTextWidget *totalLengthInfoText;
    QLabel *deadEndsLabel;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *largestComponentLabel;
    InfoTextWidget *largestComponentInfoText;
    QFrame *line_2;
    QLabel *label_7;
    QLabel *label_9;
    InfoTextWidget *edgeCountInfoText;
    InfoTextWidget *percentageDeadEndsInfoText;
    QLabel *connectedComponentsLabel;
    QLabel *label_30;
    QSpacerItem *verticalSpacer_2;
    InfoTextWidget *deadEndsInfoText;
    InfoTextWidget *totalLengthNoOverlapsInfoText;
    QLabel *totalLengthLabel;
    QLabel *label_14;
    QLabel *label_8;
    QFrame *line;
    InfoTextWidget *nodeCountInfoText;
    QLabel *edgeOverlapRangeLabel;
    InfoTextWidget *edgeOverlapRangeInfoText;
    QLabel *label_4;
    QLabel *label_21;
    QLabel *orphanedLengthLabel;
    InfoTextWidget *orphanedLengthInfoText;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QLabel *upperQuartileNodeLabel;
    QLabel *label_11;
    QSpacerItem *verticalSpacer_3;
    QLabel *medianDepthLabel;
    QLabel *label_18;
    QLabel *medianNodeLabel;
    QLabel *label_16;
    QLabel *n50Label;
    QSpacerItem *verticalSpacer_6;
    InfoTextWidget *n50InfoText;
    InfoTextWidget *shortestNodeInfoText;
    InfoTextWidget *lowerQuartileNodeInfoText;
    InfoTextWidget *medianNodeInfoText;
    InfoTextWidget *upperQuartileNodeInfoText;
    InfoTextWidget *longestNodeInfoText;
    QFrame *line_4;
    InfoTextWidget *medianDepthInfoText;
    InfoTextWidget *estimatedSequenceLengthInfoText;
    QFrame *line_3;
    QLabel *label_32;
    QLabel *label_15;
    QLabel *estimatedSequenceLengthLabel;
    QLabel *label_34;
    QLabel *lowerQuartileNodeLabel;
    QLabel *longestNodeLabel;
    QLabel *label_17;
    QLabel *shortestNodeLabel;
    QLabel *label_19;
    QLabel *label_33;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QDialog *GraphInfoDialog)
    {
        if (GraphInfoDialog->objectName().isEmpty())
            GraphInfoDialog->setObjectName(QStringLiteral("GraphInfoDialog"));
        GraphInfoDialog->resize(527, 468);
        gridLayout = new QGridLayout(GraphInfoDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(GraphInfoDialog);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_20 = new QLabel(widget_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_20->setFont(font);
        label_20->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout->addWidget(label_20);

        filenameLabel = new QLabel(widget_3);
        filenameLabel->setObjectName(QStringLiteral("filenameLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(filenameLabel->sizePolicy().hasHeightForWidth());
        filenameLabel->setSizePolicy(sizePolicy1);
        filenameLabel->setWordWrap(true);
        filenameLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(filenameLabel);


        gridLayout->addWidget(widget_3, 0, 0, 1, 2);

        buttonBox = new QDialogButtonBox(GraphInfoDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);

        widget = new QWidget(GraphInfoDialog);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        edgeCountLabel = new QLabel(widget);
        edgeCountLabel->setObjectName(QStringLiteral("edgeCountLabel"));
        edgeCountLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(edgeCountLabel, 3, 2, 1, 1);

        label_13 = new QLabel(widget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font);

        gridLayout_2->addWidget(label_13, 0, 0, 1, 3);

        totalLengthNoOverlapsLabel = new QLabel(widget);
        totalLengthNoOverlapsLabel->setObjectName(QStringLiteral("totalLengthNoOverlapsLabel"));
        totalLengthNoOverlapsLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(totalLengthNoOverlapsLabel, 6, 2, 1, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 13, 1, 1, 1);

        nodeCountLabel = new QLabel(widget);
        nodeCountLabel->setObjectName(QStringLiteral("nodeCountLabel"));
        nodeCountLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(nodeCountLabel, 2, 2, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 2, 1, 1, 1);

        connectedComponentsInfoText = new InfoTextWidget(widget);
        connectedComponentsInfoText->setObjectName(QStringLiteral("connectedComponentsInfoText"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(connectedComponentsInfoText->sizePolicy().hasHeightForWidth());
        connectedComponentsInfoText->setSizePolicy(sizePolicy2);
        connectedComponentsInfoText->setMinimumSize(QSize(16, 16));
        connectedComponentsInfoText->setMaximumSize(QSize(16, 16));

        gridLayout_2->addWidget(connectedComponentsInfoText, 12, 0, 1, 1);

        percentageDeadEndsLabel = new QLabel(widget);
        percentageDeadEndsLabel->setObjectName(QStringLiteral("percentageDeadEndsLabel"));
        percentageDeadEndsLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(percentageDeadEndsLabel, 11, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 15, 1, 1, 2);

        totalLengthInfoText = new InfoTextWidget(widget);
        totalLengthInfoText->setObjectName(QStringLiteral("totalLengthInfoText"));
        sizePolicy2.setHeightForWidth(totalLengthInfoText->sizePolicy().hasHeightForWidth());
        totalLengthInfoText->setSizePolicy(sizePolicy2);
        totalLengthInfoText->setMinimumSize(QSize(16, 16));
        totalLengthInfoText->setMaximumSize(QSize(16, 16));

        gridLayout_2->addWidget(totalLengthInfoText, 5, 0, 1, 1);

        deadEndsLabel = new QLabel(widget);
        deadEndsLabel->setObjectName(QStringLiteral("deadEndsLabel"));
        deadEndsLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(deadEndsLabel, 10, 2, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 3, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 5, 1, 1, 1);

        largestComponentLabel = new QLabel(widget);
        largestComponentLabel->setObjectName(QStringLiteral("largestComponentLabel"));
        largestComponentLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(largestComponentLabel, 13, 2, 1, 1);

        largestComponentInfoText = new InfoTextWidget(widget);
        largestComponentInfoText->setObjectName(QStringLiteral("largestComponentInfoText"));
        sizePolicy2.setHeightForWidth(largestComponentInfoText->sizePolicy().hasHeightForWidth());
        largestComponentInfoText->setSizePolicy(sizePolicy2);
        largestComponentInfoText->setMinimumSize(QSize(16, 16));
        largestComponentInfoText->setMaximumSize(QSize(16, 16));

        gridLayout_2->addWidget(largestComponentInfoText, 13, 0, 1, 1);

        line_2 = new QFrame(widget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 9, 0, 1, 3);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 10, 1, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 12, 1, 1, 1);

        edgeCountInfoText = new InfoTextWidget(widget);
        edgeCountInfoText->setObjectName(QStringLiteral("edgeCountInfoText"));
        sizePolicy2.setHeightForWidth(edgeCountInfoText->sizePolicy().hasHeightForWidth());
        edgeCountInfoText->setSizePolicy(sizePolicy2);
        edgeCountInfoText->setMinimumSize(QSize(16, 16));
        edgeCountInfoText->setMaximumSize(QSize(16, 16));

        gridLayout_2->addWidget(edgeCountInfoText, 3, 0, 1, 1);

        percentageDeadEndsInfoText = new InfoTextWidget(widget);
        percentageDeadEndsInfoText->setObjectName(QStringLiteral("percentageDeadEndsInfoText"));
        sizePolicy2.setHeightForWidth(percentageDeadEndsInfoText->sizePolicy().hasHeightForWidth());
        percentageDeadEndsInfoText->setSizePolicy(sizePolicy2);
        percentageDeadEndsInfoText->setMinimumSize(QSize(16, 16));
        percentageDeadEndsInfoText->setMaximumSize(QSize(16, 16));

        gridLayout_2->addWidget(percentageDeadEndsInfoText, 11, 0, 1, 1);

        connectedComponentsLabel = new QLabel(widget);
        connectedComponentsLabel->setObjectName(QStringLiteral("connectedComponentsLabel"));
        connectedComponentsLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(connectedComponentsLabel, 12, 2, 1, 1);

        label_30 = new QLabel(widget);
        label_30->setObjectName(QStringLiteral("label_30"));

        gridLayout_2->addWidget(label_30, 6, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 7, 1, 1, 2);

        deadEndsInfoText = new InfoTextWidget(widget);
        deadEndsInfoText->setObjectName(QStringLiteral("deadEndsInfoText"));
        sizePolicy2.setHeightForWidth(deadEndsInfoText->sizePolicy().hasHeightForWidth());
        deadEndsInfoText->setSizePolicy(sizePolicy2);
        deadEndsInfoText->setMinimumSize(QSize(16, 16));
        deadEndsInfoText->setMaximumSize(QSize(16, 16));

        gridLayout_2->addWidget(deadEndsInfoText, 10, 0, 1, 1);

        totalLengthNoOverlapsInfoText = new InfoTextWidget(widget);
        totalLengthNoOverlapsInfoText->setObjectName(QStringLiteral("totalLengthNoOverlapsInfoText"));
        sizePolicy2.setHeightForWidth(totalLengthNoOverlapsInfoText->sizePolicy().hasHeightForWidth());
        totalLengthNoOverlapsInfoText->setSizePolicy(sizePolicy2);
        totalLengthNoOverlapsInfoText->setMinimumSize(QSize(16, 16));
        totalLengthNoOverlapsInfoText->setMaximumSize(QSize(16, 16));

        gridLayout_2->addWidget(totalLengthNoOverlapsInfoText, 6, 0, 1, 1);

        totalLengthLabel = new QLabel(widget);
        totalLengthLabel->setObjectName(QStringLiteral("totalLengthLabel"));
        totalLengthLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(totalLengthLabel, 5, 2, 1, 1);

        label_14 = new QLabel(widget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font);

        gridLayout_2->addWidget(label_14, 8, 0, 1, 3);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 11, 1, 1, 1);

        line = new QFrame(widget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 1, 0, 1, 3);

        nodeCountInfoText = new InfoTextWidget(widget);
        nodeCountInfoText->setObjectName(QStringLiteral("nodeCountInfoText"));
        sizePolicy2.setHeightForWidth(nodeCountInfoText->sizePolicy().hasHeightForWidth());
        nodeCountInfoText->setSizePolicy(sizePolicy2);
        nodeCountInfoText->setMinimumSize(QSize(16, 16));
        nodeCountInfoText->setMaximumSize(QSize(16, 16));

        gridLayout_2->addWidget(nodeCountInfoText, 2, 0, 1, 1);

        edgeOverlapRangeLabel = new QLabel(widget);
        edgeOverlapRangeLabel->setObjectName(QStringLiteral("edgeOverlapRangeLabel"));
        edgeOverlapRangeLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(edgeOverlapRangeLabel, 4, 2, 1, 1);

        edgeOverlapRangeInfoText = new InfoTextWidget(widget);
        edgeOverlapRangeInfoText->setObjectName(QStringLiteral("edgeOverlapRangeInfoText"));
        sizePolicy2.setHeightForWidth(edgeOverlapRangeInfoText->sizePolicy().hasHeightForWidth());
        edgeOverlapRangeInfoText->setSizePolicy(sizePolicy2);
        edgeOverlapRangeInfoText->setMinimumSize(QSize(16, 16));
        edgeOverlapRangeInfoText->setMaximumSize(QSize(16, 16));

        gridLayout_2->addWidget(edgeOverlapRangeInfoText, 4, 0, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 4, 1, 1, 1);

        label_21 = new QLabel(widget);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_2->addWidget(label_21, 14, 1, 1, 1);

        orphanedLengthLabel = new QLabel(widget);
        orphanedLengthLabel->setObjectName(QStringLiteral("orphanedLengthLabel"));
        orphanedLengthLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(orphanedLengthLabel, 14, 2, 1, 1);

        orphanedLengthInfoText = new InfoTextWidget(widget);
        orphanedLengthInfoText->setObjectName(QStringLiteral("orphanedLengthInfoText"));
        orphanedLengthInfoText->setEnabled(true);
        sizePolicy2.setHeightForWidth(orphanedLengthInfoText->sizePolicy().hasHeightForWidth());
        orphanedLengthInfoText->setSizePolicy(sizePolicy2);
        orphanedLengthInfoText->setMinimumSize(QSize(16, 16));
        orphanedLengthInfoText->setMaximumSize(QSize(16, 16));

        gridLayout_2->addWidget(orphanedLengthInfoText, 14, 0, 1, 1);


        gridLayout->addWidget(widget, 1, 0, 1, 1);

        widget_2 = new QWidget(GraphInfoDialog);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        upperQuartileNodeLabel = new QLabel(widget_2);
        upperQuartileNodeLabel->setObjectName(QStringLiteral("upperQuartileNodeLabel"));
        upperQuartileNodeLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(upperQuartileNodeLabel, 6, 3, 1, 1);

        label_11 = new QLabel(widget_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_3->addWidget(label_11, 2, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_3, 8, 2, 1, 2);

        medianDepthLabel = new QLabel(widget_2);
        medianDepthLabel->setObjectName(QStringLiteral("medianDepthLabel"));
        medianDepthLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(medianDepthLabel, 11, 3, 1, 1);

        label_18 = new QLabel(widget_2);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_3->addWidget(label_18, 6, 2, 1, 1);

        medianNodeLabel = new QLabel(widget_2);
        medianNodeLabel->setObjectName(QStringLiteral("medianNodeLabel"));
        medianNodeLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(medianNodeLabel, 5, 3, 1, 1);

        label_16 = new QLabel(widget_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_3->addWidget(label_16, 4, 2, 1, 1);

        n50Label = new QLabel(widget_2);
        n50Label->setObjectName(QStringLiteral("n50Label"));
        n50Label->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(n50Label, 2, 3, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_6, 13, 2, 1, 1);

        n50InfoText = new InfoTextWidget(widget_2);
        n50InfoText->setObjectName(QStringLiteral("n50InfoText"));
        sizePolicy2.setHeightForWidth(n50InfoText->sizePolicy().hasHeightForWidth());
        n50InfoText->setSizePolicy(sizePolicy2);
        n50InfoText->setMinimumSize(QSize(16, 16));
        n50InfoText->setMaximumSize(QSize(16, 16));

        gridLayout_3->addWidget(n50InfoText, 2, 1, 1, 1);

        shortestNodeInfoText = new InfoTextWidget(widget_2);
        shortestNodeInfoText->setObjectName(QStringLiteral("shortestNodeInfoText"));
        sizePolicy2.setHeightForWidth(shortestNodeInfoText->sizePolicy().hasHeightForWidth());
        shortestNodeInfoText->setSizePolicy(sizePolicy2);
        shortestNodeInfoText->setMinimumSize(QSize(16, 16));
        shortestNodeInfoText->setMaximumSize(QSize(16, 16));

        gridLayout_3->addWidget(shortestNodeInfoText, 3, 1, 1, 1);

        lowerQuartileNodeInfoText = new InfoTextWidget(widget_2);
        lowerQuartileNodeInfoText->setObjectName(QStringLiteral("lowerQuartileNodeInfoText"));
        sizePolicy2.setHeightForWidth(lowerQuartileNodeInfoText->sizePolicy().hasHeightForWidth());
        lowerQuartileNodeInfoText->setSizePolicy(sizePolicy2);
        lowerQuartileNodeInfoText->setMinimumSize(QSize(16, 16));
        lowerQuartileNodeInfoText->setMaximumSize(QSize(16, 16));

        gridLayout_3->addWidget(lowerQuartileNodeInfoText, 4, 1, 1, 1);

        medianNodeInfoText = new InfoTextWidget(widget_2);
        medianNodeInfoText->setObjectName(QStringLiteral("medianNodeInfoText"));
        sizePolicy2.setHeightForWidth(medianNodeInfoText->sizePolicy().hasHeightForWidth());
        medianNodeInfoText->setSizePolicy(sizePolicy2);
        medianNodeInfoText->setMinimumSize(QSize(16, 16));
        medianNodeInfoText->setMaximumSize(QSize(16, 16));

        gridLayout_3->addWidget(medianNodeInfoText, 5, 1, 1, 1);

        upperQuartileNodeInfoText = new InfoTextWidget(widget_2);
        upperQuartileNodeInfoText->setObjectName(QStringLiteral("upperQuartileNodeInfoText"));
        sizePolicy2.setHeightForWidth(upperQuartileNodeInfoText->sizePolicy().hasHeightForWidth());
        upperQuartileNodeInfoText->setSizePolicy(sizePolicy2);
        upperQuartileNodeInfoText->setMinimumSize(QSize(16, 16));
        upperQuartileNodeInfoText->setMaximumSize(QSize(16, 16));

        gridLayout_3->addWidget(upperQuartileNodeInfoText, 6, 1, 1, 1);

        longestNodeInfoText = new InfoTextWidget(widget_2);
        longestNodeInfoText->setObjectName(QStringLiteral("longestNodeInfoText"));
        sizePolicy2.setHeightForWidth(longestNodeInfoText->sizePolicy().hasHeightForWidth());
        longestNodeInfoText->setSizePolicy(sizePolicy2);
        longestNodeInfoText->setMinimumSize(QSize(16, 16));
        longestNodeInfoText->setMaximumSize(QSize(16, 16));

        gridLayout_3->addWidget(longestNodeInfoText, 7, 1, 1, 1);

        line_4 = new QFrame(widget_2);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_4, 10, 1, 1, 3);

        medianDepthInfoText = new InfoTextWidget(widget_2);
        medianDepthInfoText->setObjectName(QStringLiteral("medianDepthInfoText"));
        sizePolicy2.setHeightForWidth(medianDepthInfoText->sizePolicy().hasHeightForWidth());
        medianDepthInfoText->setSizePolicy(sizePolicy2);
        medianDepthInfoText->setMinimumSize(QSize(16, 16));
        medianDepthInfoText->setMaximumSize(QSize(16, 16));

        gridLayout_3->addWidget(medianDepthInfoText, 11, 1, 1, 1);

        estimatedSequenceLengthInfoText = new InfoTextWidget(widget_2);
        estimatedSequenceLengthInfoText->setObjectName(QStringLiteral("estimatedSequenceLengthInfoText"));
        sizePolicy2.setHeightForWidth(estimatedSequenceLengthInfoText->sizePolicy().hasHeightForWidth());
        estimatedSequenceLengthInfoText->setSizePolicy(sizePolicy2);
        estimatedSequenceLengthInfoText->setMinimumSize(QSize(16, 16));
        estimatedSequenceLengthInfoText->setMaximumSize(QSize(16, 16));

        gridLayout_3->addWidget(estimatedSequenceLengthInfoText, 12, 1, 1, 1);

        line_3 = new QFrame(widget_2);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_3, 1, 1, 1, 3);

        label_32 = new QLabel(widget_2);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setFont(font);

        gridLayout_3->addWidget(label_32, 9, 1, 1, 2);

        label_15 = new QLabel(widget_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font);

        gridLayout_3->addWidget(label_15, 0, 1, 1, 2);

        estimatedSequenceLengthLabel = new QLabel(widget_2);
        estimatedSequenceLengthLabel->setObjectName(QStringLiteral("estimatedSequenceLengthLabel"));
        estimatedSequenceLengthLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(estimatedSequenceLengthLabel, 12, 3, 1, 1);

        label_34 = new QLabel(widget_2);
        label_34->setObjectName(QStringLiteral("label_34"));

        gridLayout_3->addWidget(label_34, 12, 2, 1, 1);

        lowerQuartileNodeLabel = new QLabel(widget_2);
        lowerQuartileNodeLabel->setObjectName(QStringLiteral("lowerQuartileNodeLabel"));
        lowerQuartileNodeLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(lowerQuartileNodeLabel, 4, 3, 1, 1);

        longestNodeLabel = new QLabel(widget_2);
        longestNodeLabel->setObjectName(QStringLiteral("longestNodeLabel"));
        longestNodeLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(longestNodeLabel, 7, 3, 1, 1);

        label_17 = new QLabel(widget_2);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_3->addWidget(label_17, 5, 2, 1, 1);

        shortestNodeLabel = new QLabel(widget_2);
        shortestNodeLabel->setObjectName(QStringLiteral("shortestNodeLabel"));
        shortestNodeLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(shortestNodeLabel, 3, 3, 1, 1);

        label_19 = new QLabel(widget_2);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_3->addWidget(label_19, 7, 2, 1, 1);

        label_33 = new QLabel(widget_2);
        label_33->setObjectName(QStringLiteral("label_33"));

        gridLayout_3->addWidget(label_33, 11, 2, 1, 1);

        label_12 = new QLabel(widget_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_3->addWidget(label_12, 3, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 9, 0, 1, 1);


        gridLayout->addWidget(widget_2, 1, 1, 1, 1);


        retranslateUi(GraphInfoDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GraphInfoDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GraphInfoDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GraphInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *GraphInfoDialog)
    {
        GraphInfoDialog->setWindowTitle(QApplication::translate("GraphInfoDialog", "Graph information", nullptr));
        label_20->setText(QApplication::translate("GraphInfoDialog", "File name:", nullptr));
        filenameLabel->setText(QApplication::translate("GraphInfoDialog", "filename", nullptr));
        edgeCountLabel->setText(QApplication::translate("GraphInfoDialog", "0", nullptr));
        label_13->setText(QApplication::translate("GraphInfoDialog", "Graph size", nullptr));
        totalLengthNoOverlapsLabel->setText(QApplication::translate("GraphInfoDialog", "0", nullptr));
        label_10->setText(QApplication::translate("GraphInfoDialog", "Largest component:", nullptr));
        nodeCountLabel->setText(QApplication::translate("GraphInfoDialog", "0", nullptr));
        label->setText(QApplication::translate("GraphInfoDialog", "Node count:", nullptr));
        percentageDeadEndsLabel->setText(QApplication::translate("GraphInfoDialog", "0", nullptr));
        deadEndsLabel->setText(QApplication::translate("GraphInfoDialog", "0", nullptr));
        label_2->setText(QApplication::translate("GraphInfoDialog", "Edge count:", nullptr));
        label_3->setText(QApplication::translate("GraphInfoDialog", "Total length:", nullptr));
        largestComponentLabel->setText(QApplication::translate("GraphInfoDialog", "0", nullptr));
        label_7->setText(QApplication::translate("GraphInfoDialog", "Dead ends:", nullptr));
        label_9->setText(QApplication::translate("GraphInfoDialog", "Connected components:", nullptr));
        connectedComponentsLabel->setText(QApplication::translate("GraphInfoDialog", "0", nullptr));
        label_30->setText(QApplication::translate("GraphInfoDialog", "Total length (no overlaps):", nullptr));
        totalLengthLabel->setText(QApplication::translate("GraphInfoDialog", "0", nullptr));
        label_14->setText(QApplication::translate("GraphInfoDialog", "Graph connectivity", nullptr));
        label_8->setText(QApplication::translate("GraphInfoDialog", "Percentage dead ends:", nullptr));
        edgeOverlapRangeLabel->setText(QApplication::translate("GraphInfoDialog", "0", nullptr));
        label_4->setText(QApplication::translate("GraphInfoDialog", "Edge overlaps:", nullptr));
        label_21->setText(QApplication::translate("GraphInfoDialog", "Total length orphaned nodes:", nullptr));
        orphanedLengthLabel->setText(QApplication::translate("GraphInfoDialog", "0", nullptr));
        upperQuartileNodeLabel->setText(QApplication::translate("GraphInfoDialog", "0", nullptr));
        label_11->setText(QApplication::translate("GraphInfoDialog", "N50:", nullptr));
        medianDepthLabel->setText(QApplication::translate("GraphInfoDialog", "0", nullptr));
        label_18->setText(QApplication::translate("GraphInfoDialog", "Upper quartile node:", nullptr));
        medianNodeLabel->setText(QApplication::translate("GraphInfoDialog", "0", nullptr));
        label_16->setText(QApplication::translate("GraphInfoDialog", "Lower quartile node:", nullptr));
        n50Label->setText(QApplication::translate("GraphInfoDialog", "0", nullptr));
        label_32->setText(QApplication::translate("GraphInfoDialog", "Depth", nullptr));
        label_15->setText(QApplication::translate("GraphInfoDialog", "Node sizes", nullptr));
        estimatedSequenceLengthLabel->setText(QApplication::translate("GraphInfoDialog", "0", nullptr));
        label_34->setText(QApplication::translate("GraphInfoDialog", "Estimated sequence length:", nullptr));
        lowerQuartileNodeLabel->setText(QApplication::translate("GraphInfoDialog", "0", nullptr));
        longestNodeLabel->setText(QApplication::translate("GraphInfoDialog", "0", nullptr));
        label_17->setText(QApplication::translate("GraphInfoDialog", "Median node:", nullptr));
        shortestNodeLabel->setText(QApplication::translate("GraphInfoDialog", "0", nullptr));
        label_19->setText(QApplication::translate("GraphInfoDialog", "Longest node:", nullptr));
        label_33->setText(QApplication::translate("GraphInfoDialog", "Median depth:", nullptr));
        label_12->setText(QApplication::translate("GraphInfoDialog", "Shortest node:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphInfoDialog: public Ui_GraphInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHINFODIALOG_H
