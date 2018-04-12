/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "colourbutton.h"
#include "infotextwidget.h"
#include "nodewidthvisualaid.h"
#include "verticallabel.h"
#include "verticalscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    VerticalScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QLabel *graphSizeHeadingLabel;
    QLabel *graphLayoutDescriptionLabel_2;
    QFrame *line_12;
    QWidget *widget_24;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_28;
    InfoTextWidget *nodeLengthPerMegabaseInfoText;
    QLabel *label_12;
    QWidget *widget_10;
    QGridLayout *gridLayout_17;
    QRadioButton *nodeLengthPerMegabaseAutoRadioButton;
    QRadioButton *nodeLengthPerMegabaseManualRadioButton;
    QLabel *nodeLengthPerMegabaseAutoLabel;
    QDoubleSpinBox *nodeLengthPerMegabaseManualSpinBox;
    QSpacerItem *horizontalSpacer_27;
    QWidget *widget_25;
    QGridLayout *gridLayout_18;
    QDoubleSpinBox *doubleModeNodeSeparationSpinBox;
    InfoTextWidget *minimumNodeLengthInfoText;
    QLabel *label_25;
    QDoubleSpinBox *minimumNodeLengthSpinBox;
    QDoubleSpinBox *edgeLengthSpinBox;
    QLabel *label_33;
    QSpacerItem *horizontalSpacer_29;
    QSpacerItem *horizontalSpacer_30;
    QLabel *label_31;
    InfoTextWidget *doubleModeNodeSeparationInfoText;
    InfoTextWidget *edgeLengthInfoText;
    InfoTextWidget *edgeWidthInfoText;
    QLabel *label_5;
    QDoubleSpinBox *edgeWidthSpinBox;
    QSpacerItem *verticalSpacer_13;
    QLabel *graphLayoutQualityHeadingLabel;
    QLabel *graphLayoutDescriptionLabel;
    QFrame *line_3;
    QWidget *widget_16;
    QGridLayout *gridLayout_10;
    QLabel *label_8;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *linearLayoutOnRadioButton;
    QRadioButton *linearLayoutOffRadioButton;
    InfoTextWidget *linearLayoutInfoText;
    QLabel *label_9;
    QDoubleSpinBox *nodeSegmentLengthSpinBox;
    QLabel *label_3;
    InfoTextWidget *nodeSegmentLengthInfoText;
    InfoTextWidget *graphLayoutQualityInfoText;
    QSlider *graphLayoutQualitySlider;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_10;
    QDoubleSpinBox *componentSeparationSpinBox;
    InfoTextWidget *componentSeparationInfoText;
    QSpacerItem *verticalSpacer_10;
    QLabel *graphAppearanceHeadingLabel;
    QLabel *graphAppearanceDescriptionLabel;
    QFrame *line_2;
    QWidget *widget_8;
    QGridLayout *gridLayout_9;
    QLabel *label_6;
    InfoTextWidget *edgeColourInfoText;
    QLabel *label_28;
    ColourButton *outlineColourButton;
    QLabel *label_18;
    InfoTextWidget *outlineColourInfoText;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer;
    ColourButton *edgeColourButton;
    QLabel *label_27;
    InfoTextWidget *outlineThicknessInfoText;
    InfoTextWidget *selectionColourInfoText;
    ColourButton *selectionColourButton;
    QDoubleSpinBox *outlineThicknessSpinBox;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *singleNodeArrowHeadsOnRadioButton;
    QRadioButton *singleNodeArrowHeadsOffRadioButton;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *antialiasingOnRadioButton;
    QRadioButton *antialiasingOffRadioButton;
    QLabel *label_11;
    InfoTextWidget *antialiasingInfoText;
    QLabel *label_23;
    InfoTextWidget *singleNodeArrowHeadsInfoText;
    QSpacerItem *verticalSpacer_3;
    QLabel *textAppearanceHeadingLabel;
    QLabel *textAppearanceDescriptionLabel;
    QFrame *line_4;
    QWidget *widget_17;
    QGridLayout *gridLayout_3;
    InfoTextWidget *textOutlineThicknessInfoText;
    InfoTextWidget *textColourInfoText;
    QLabel *label_26;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_47;
    QLabel *label_7;
    ColourButton *textOutlineColourButton;
    InfoTextWidget *textOutlineColourInfoText;
    QDoubleSpinBox *textOutlineThicknessSpinBox;
    ColourButton *textColourButton;
    QSpacerItem *horizontalSpacer_10;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_25;
    InfoTextWidget *positionTextInfoText;
    QLabel *label_48;
    QWidget *widget_15;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *positionVisibleRadioButton;
    QRadioButton *positionCentreRadioButton;
    QSpacerItem *horizontalSpacer_26;
    QSpacerItem *verticalSpacer_2;
    QLabel *nodeWidthHeadingLabel;
    QLabel *nodeWidthDescriptionLabel;
    QFrame *line_7;
    QWidget *widget_4;
    QGridLayout *gridLayout_6;
    InfoTextWidget *depthEffectOnWidthInfoText;
    InfoTextWidget *depthPowerInfoText;
    QLabel *label_4;
    QDoubleSpinBox *depthEffectOnWidthSpinBox;
    QDoubleSpinBox *depthPowerSpinBox;
    QLabel *label_36;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QFrame *frame;
    QGridLayout *gridLayout_5;
    NodeWidthVisualAid *nodeWidthVisualAid;
    QLabel *label_38;
    VerticalLabel *label_37;
    QLabel *label_40;
    QLabel *label_39;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_4;
    QLabel *randomColourSchemeHeadingLabel;
    QFrame *line_6;
    QLabel *randomColourSchemeDescriptionLabel;
    QWidget *widget_18;
    QGridLayout *gridLayout_11;
    InfoTextWidget *randomColourPositiveSaturationInfoText;
    InfoTextWidget *randomColourPositiveLightnessInfoText;
    InfoTextWidget *randomColourNegativeSaturationInfoText;
    QSlider *randomColourPositiveLightnessSlider;
    QSlider *randomColourPositiveSaturationSlider;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_34;
    QLabel *label_44;
    QLabel *label_42;
    QSlider *randomColourPositiveOpacitySlider;
    QSpinBox *randomColourPositiveLightnessSpinBox;
    QLabel *label_45;
    QSlider *randomColourNegativeSaturationSlider;
    QLabel *label_43;
    InfoTextWidget *randomColourNegativeLightnessInfoText;
    InfoTextWidget *randomColourPositiveOpacityInfoText;
    QSpinBox *randomColourNegativeSaturationSpinBox;
    QSpinBox *randomColourPositiveSaturationSpinBox;
    QSpacerItem *horizontalSpacer_11;
    QSlider *randomColourNegativeLightnessSlider;
    QSpinBox *randomColourPositiveOpacitySpinBox;
    QSpinBox *randomColourNegativeLightnessSpinBox;
    InfoTextWidget *randomColourNegativeOpacityInfoText;
    QLabel *label_46;
    QSlider *randomColourNegativeOpacitySlider;
    QSpinBox *randomColourNegativeOpacitySpinBox;
    QSpacerItem *verticalSpacer_8;
    QLabel *uniformColourSchemeHeadingLabel;
    QFrame *line_5;
    QLabel *uniformColourSchemeDescriptionLabel;
    QWidget *widget_19;
    QGridLayout *gridLayout_12;
    InfoTextWidget *uniformNodeSpecialColourInfoText;
    InfoTextWidget *uniformNegativeNodeColourInfoText;
    ColourButton *uniformNodeSpecialColourButton;
    QLabel *label_17;
    InfoTextWidget *uniformPositiveNodeColourInfoText;
    ColourButton *uniformNegativeNodeColourButton;
    QSpacerItem *horizontalSpacer_13;
    ColourButton *uniformPositiveNodeColourButton;
    QLabel *label_13;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer_5;
    QLabel *depthColourSchemeHeadingLabel;
    QFrame *line_8;
    QLabel *depthColourSchemeDescriptionLabel;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    InfoTextWidget *lowDepthColourInfoText;
    QSpacerItem *horizontalSpacer_23;
    QLabel *label_15;
    ColourButton *lowDepthColourButton;
    QSpacerItem *horizontalSpacer_24;
    InfoTextWidget *highDepthColourInfoText;
    QLabel *label_16;
    ColourButton *highDepthColourButton;
    QWidget *widget_20;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_15;
    QWidget *depthAutoManualWidget;
    QGridLayout *gridLayout_4;
    QWidget *depthAutoWidget;
    QGridLayout *gridLayout_7;
    QLabel *highDepthAutoValueLabel2;
    QLabel *lowDepthAutoValueLabel2;
    QLabel *highDepthAutoValueLabel1;
    QLabel *lowDepthAutoValueLabel1;
    QWidget *depthManualWidget;
    QGridLayout *gridLayout_8;
    QDoubleSpinBox *lowDepthValueSpinBox;
    QDoubleSpinBox *highDepthValueSpinBox;
    QLabel *highDepthValueLabel;
    QLabel *lowDepthValueLabel;
    QRadioButton *depthValueAutoRadioButton;
    QRadioButton *depthValueManualRadioButton;
    InfoTextWidget *depthAutoValuesInfoText;
    InfoTextWidget *depthManualValuesInfoText;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *verticalSpacer_6;
    QLabel *blastColourSchemeHeadingLabel;
    QFrame *line_10;
    QLabel *blastColourSchemeDescriptionLabel;
    QWidget *widget_21;
    QGridLayout *gridLayout_14;
    InfoTextWidget *noBlastHitsColourInfoText;
    ColourButton *noBlastHitsColourButton;
    QSpacerItem *horizontalSpacer_17;
    QLabel *label_32;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *verticalSpacer_7;
    QLabel *contiguityColourSchemeHeadingLabel;
    QFrame *line_9;
    QLabel *contiguityColourSchemeDescriptionLabel;
    QWidget *widget_22;
    QGridLayout *gridLayout_15;
    InfoTextWidget *contiguityStartingColourInfoText;
    InfoTextWidget *contiguousEitherStrandColourInfoText;
    InfoTextWidget *notContiguousColourInfoText;
    InfoTextWidget *maybeContiguousColourInfoText;
    ColourButton *contiguousStrandSpecificColourButton;
    QLabel *label_29;
    QSpacerItem *horizontalSpacer_19;
    InfoTextWidget *contiguitySearchDepthInfoText;
    InfoTextWidget *contiguousStrandSpecificColourInfoText;
    ColourButton *contiguityStartingColourButton;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_30;
    ColourButton *maybeContiguousColourButton;
    QLabel *label_19;
    ColourButton *notContiguousColourButton;
    QLabel *label_20;
    ColourButton *contiguousEitherStrandColourButton;
    QSpinBox *contiguitySearchDepthSpinBox;
    QSpacerItem *horizontalSpacer_20;
    QSpacerItem *verticalSpacer_11;
    QLabel *blastQueryPathsHeadingLabel;
    QFrame *line_11;
    QLabel *blastQueryPathsDescriptionLabel;
    QWidget *widget_23;
    QGridLayout *gridLayout_16;
    QDoubleSpinBox *minQueryCoveredByPathSpinBox;
    InfoTextWidget *minQueryCoveredByHitsInfoText;
    QDoubleSpinBox *minQueryCoveredByHitsSpinBox;
    QSpinBox *maxPathNodesSpinBox;
    QCheckBox *minMeanHitIdentityCheckBox;
    QCheckBox *minQueryCoveredByHitsCheckBox;
    QCheckBox *maxLengthBaseDiscrepancyCheckBox;
    QCheckBox *maxEValueProductCheckBox;
    QCheckBox *maxLengthPercentageCheckBox;
    QLabel *minQueryCoveredByPathLabel;
    QCheckBox *minLengthPercentageCheckBox;
    QCheckBox *minLengthBaseDiscrepancyCheckBox;
    QSpinBox *minLengthBaseDiscrepancySpinBox;
    QDoubleSpinBox *minLengthPercentageSpinBox;
    QSpinBox *maxLengthBaseDiscrepancySpinBox;
    QDoubleSpinBox *maxLengthPercentageSpinBox;
    InfoTextWidget *minLengthPercentageInfoText;
    InfoTextWidget *maxLengthPercentageInfoText;
    InfoTextWidget *minLengthBaseDiscrepancyInfoText;
    InfoTextWidget *maxLengthBaseDiscrepancyInfoText;
    InfoTextWidget *minMeanHitIdentityInfoText;
    InfoTextWidget *maxPathNodesInfoText;
    InfoTextWidget *maxEvalueProductInfoText;
    InfoTextWidget *minQueryCoveredByPathInfoText;
    QLabel *label_35;
    QSpacerItem *horizontalSpacer_22;
    QSpinBox *maxEValueExponentSpinBox;
    QSpacerItem *horizontalSpacer_21;
    QDoubleSpinBox *maxEValueCoefficientSpinBox;
    QDoubleSpinBox *minMeanHitIdentitySpinBox;
    QLabel *label_41;
    QSpinBox *maxHitsForQueryPathSpinBox;
    InfoTextWidget *maxHitsForQueryPathInfoText;
    QSpacerItem *verticalSpacer_12;
    QFrame *line;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *restoreDefaultsButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QStringLiteral("SettingsDialog"));
        SettingsDialog->resize(378, 673);
        verticalLayout = new QVBoxLayout(SettingsDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new VerticalScrollArea(SettingsDialog);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -62, 400, 3466));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        graphSizeHeadingLabel = new QLabel(scrollAreaWidgetContents);
        graphSizeHeadingLabel->setObjectName(QStringLiteral("graphSizeHeadingLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        graphSizeHeadingLabel->setFont(font);

        verticalLayout_3->addWidget(graphSizeHeadingLabel);

        graphLayoutDescriptionLabel_2 = new QLabel(scrollAreaWidgetContents);
        graphLayoutDescriptionLabel_2->setObjectName(QStringLiteral("graphLayoutDescriptionLabel_2"));
        graphLayoutDescriptionLabel_2->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        graphLayoutDescriptionLabel_2->setWordWrap(true);

        verticalLayout_3->addWidget(graphLayoutDescriptionLabel_2);

        line_12 = new QFrame(scrollAreaWidgetContents);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_12);

        widget_24 = new QWidget(scrollAreaWidgetContents);
        widget_24->setObjectName(QStringLiteral("widget_24"));
        horizontalLayout_7 = new QHBoxLayout(widget_24);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_28 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_28);

        nodeLengthPerMegabaseInfoText = new InfoTextWidget(widget_24);
        nodeLengthPerMegabaseInfoText->setObjectName(QStringLiteral("nodeLengthPerMegabaseInfoText"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nodeLengthPerMegabaseInfoText->sizePolicy().hasHeightForWidth());
        nodeLengthPerMegabaseInfoText->setSizePolicy(sizePolicy);
        nodeLengthPerMegabaseInfoText->setMinimumSize(QSize(16, 16));

        horizontalLayout_7->addWidget(nodeLengthPerMegabaseInfoText);

        label_12 = new QLabel(widget_24);
        label_12->setObjectName(QStringLiteral("label_12"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(label_12);

        widget_10 = new QWidget(widget_24);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        gridLayout_17 = new QGridLayout(widget_10);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        gridLayout_17->setContentsMargins(0, 0, 0, 0);
        nodeLengthPerMegabaseAutoRadioButton = new QRadioButton(widget_10);
        nodeLengthPerMegabaseAutoRadioButton->setObjectName(QStringLiteral("nodeLengthPerMegabaseAutoRadioButton"));
        nodeLengthPerMegabaseAutoRadioButton->setChecked(true);

        gridLayout_17->addWidget(nodeLengthPerMegabaseAutoRadioButton, 0, 0, 1, 1);

        nodeLengthPerMegabaseManualRadioButton = new QRadioButton(widget_10);
        nodeLengthPerMegabaseManualRadioButton->setObjectName(QStringLiteral("nodeLengthPerMegabaseManualRadioButton"));

        gridLayout_17->addWidget(nodeLengthPerMegabaseManualRadioButton, 1, 0, 1, 1);

        nodeLengthPerMegabaseAutoLabel = new QLabel(widget_10);
        nodeLengthPerMegabaseAutoLabel->setObjectName(QStringLiteral("nodeLengthPerMegabaseAutoLabel"));
        nodeLengthPerMegabaseAutoLabel->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(nodeLengthPerMegabaseAutoLabel, 0, 1, 1, 1);

        nodeLengthPerMegabaseManualSpinBox = new QDoubleSpinBox(widget_10);
        nodeLengthPerMegabaseManualSpinBox->setObjectName(QStringLiteral("nodeLengthPerMegabaseManualSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(nodeLengthPerMegabaseManualSpinBox->sizePolicy().hasHeightForWidth());
        nodeLengthPerMegabaseManualSpinBox->setSizePolicy(sizePolicy2);
        nodeLengthPerMegabaseManualSpinBox->setAlignment(Qt::AlignCenter);
        nodeLengthPerMegabaseManualSpinBox->setDecimals(0);
        nodeLengthPerMegabaseManualSpinBox->setMinimum(0);
        nodeLengthPerMegabaseManualSpinBox->setMaximum(1e+6);
        nodeLengthPerMegabaseManualSpinBox->setSingleStep(100);
        nodeLengthPerMegabaseManualSpinBox->setValue(1000);

        gridLayout_17->addWidget(nodeLengthPerMegabaseManualSpinBox, 1, 1, 1, 1);


        horizontalLayout_7->addWidget(widget_10);

        horizontalSpacer_27 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_27);


        verticalLayout_3->addWidget(widget_24);

        widget_25 = new QWidget(scrollAreaWidgetContents);
        widget_25->setObjectName(QStringLiteral("widget_25"));
        gridLayout_18 = new QGridLayout(widget_25);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        gridLayout_18->setContentsMargins(0, 0, 0, 0);
        doubleModeNodeSeparationSpinBox = new QDoubleSpinBox(widget_25);
        doubleModeNodeSeparationSpinBox->setObjectName(QStringLiteral("doubleModeNodeSeparationSpinBox"));
        sizePolicy2.setHeightForWidth(doubleModeNodeSeparationSpinBox->sizePolicy().hasHeightForWidth());
        doubleModeNodeSeparationSpinBox->setSizePolicy(sizePolicy2);
        doubleModeNodeSeparationSpinBox->setAlignment(Qt::AlignCenter);
        doubleModeNodeSeparationSpinBox->setDecimals(1);
        doubleModeNodeSeparationSpinBox->setMaximum(100);
        doubleModeNodeSeparationSpinBox->setSingleStep(0.5);

        gridLayout_18->addWidget(doubleModeNodeSeparationSpinBox, 3, 6, 1, 1);

        minimumNodeLengthInfoText = new InfoTextWidget(widget_25);
        minimumNodeLengthInfoText->setObjectName(QStringLiteral("minimumNodeLengthInfoText"));
        sizePolicy.setHeightForWidth(minimumNodeLengthInfoText->sizePolicy().hasHeightForWidth());
        minimumNodeLengthInfoText->setSizePolicy(sizePolicy);
        minimumNodeLengthInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_18->addWidget(minimumNodeLengthInfoText, 0, 4, 1, 1);

        label_25 = new QLabel(widget_25);
        label_25->setObjectName(QStringLiteral("label_25"));
        sizePolicy1.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy1);

        gridLayout_18->addWidget(label_25, 0, 5, 1, 1);

        minimumNodeLengthSpinBox = new QDoubleSpinBox(widget_25);
        minimumNodeLengthSpinBox->setObjectName(QStringLiteral("minimumNodeLengthSpinBox"));
        sizePolicy2.setHeightForWidth(minimumNodeLengthSpinBox->sizePolicy().hasHeightForWidth());
        minimumNodeLengthSpinBox->setSizePolicy(sizePolicy2);
        minimumNodeLengthSpinBox->setAlignment(Qt::AlignCenter);
        minimumNodeLengthSpinBox->setDecimals(1);
        minimumNodeLengthSpinBox->setMinimum(1);
        minimumNodeLengthSpinBox->setMaximum(1000);
        minimumNodeLengthSpinBox->setSingleStep(1);

        gridLayout_18->addWidget(minimumNodeLengthSpinBox, 0, 6, 1, 1);

        edgeLengthSpinBox = new QDoubleSpinBox(widget_25);
        edgeLengthSpinBox->setObjectName(QStringLiteral("edgeLengthSpinBox"));
        sizePolicy2.setHeightForWidth(edgeLengthSpinBox->sizePolicy().hasHeightForWidth());
        edgeLengthSpinBox->setSizePolicy(sizePolicy2);
        edgeLengthSpinBox->setAlignment(Qt::AlignCenter);
        edgeLengthSpinBox->setDecimals(1);
        edgeLengthSpinBox->setMinimum(0.1);
        edgeLengthSpinBox->setMaximum(100);
        edgeLengthSpinBox->setSingleStep(1);

        gridLayout_18->addWidget(edgeLengthSpinBox, 1, 6, 1, 1);

        label_33 = new QLabel(widget_25);
        label_33->setObjectName(QStringLiteral("label_33"));
        sizePolicy1.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy1);

        gridLayout_18->addWidget(label_33, 3, 5, 1, 1);

        horizontalSpacer_29 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_18->addItem(horizontalSpacer_29, 0, 7, 1, 1);

        horizontalSpacer_30 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_18->addItem(horizontalSpacer_30, 0, 3, 1, 1);

        label_31 = new QLabel(widget_25);
        label_31->setObjectName(QStringLiteral("label_31"));
        sizePolicy1.setHeightForWidth(label_31->sizePolicy().hasHeightForWidth());
        label_31->setSizePolicy(sizePolicy1);

        gridLayout_18->addWidget(label_31, 1, 5, 1, 1);

        doubleModeNodeSeparationInfoText = new InfoTextWidget(widget_25);
        doubleModeNodeSeparationInfoText->setObjectName(QStringLiteral("doubleModeNodeSeparationInfoText"));
        sizePolicy.setHeightForWidth(doubleModeNodeSeparationInfoText->sizePolicy().hasHeightForWidth());
        doubleModeNodeSeparationInfoText->setSizePolicy(sizePolicy);
        doubleModeNodeSeparationInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_18->addWidget(doubleModeNodeSeparationInfoText, 3, 4, 1, 1);

        edgeLengthInfoText = new InfoTextWidget(widget_25);
        edgeLengthInfoText->setObjectName(QStringLiteral("edgeLengthInfoText"));
        sizePolicy.setHeightForWidth(edgeLengthInfoText->sizePolicy().hasHeightForWidth());
        edgeLengthInfoText->setSizePolicy(sizePolicy);
        edgeLengthInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_18->addWidget(edgeLengthInfoText, 1, 4, 1, 1);

        edgeWidthInfoText = new InfoTextWidget(widget_25);
        edgeWidthInfoText->setObjectName(QStringLiteral("edgeWidthInfoText"));
        sizePolicy.setHeightForWidth(edgeWidthInfoText->sizePolicy().hasHeightForWidth());
        edgeWidthInfoText->setSizePolicy(sizePolicy);
        edgeWidthInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_18->addWidget(edgeWidthInfoText, 2, 4, 1, 1);

        label_5 = new QLabel(widget_25);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        gridLayout_18->addWidget(label_5, 2, 5, 1, 1);

        edgeWidthSpinBox = new QDoubleSpinBox(widget_25);
        edgeWidthSpinBox->setObjectName(QStringLiteral("edgeWidthSpinBox"));
        sizePolicy2.setHeightForWidth(edgeWidthSpinBox->sizePolicy().hasHeightForWidth());
        edgeWidthSpinBox->setSizePolicy(sizePolicy2);
        edgeWidthSpinBox->setAlignment(Qt::AlignCenter);
        edgeWidthSpinBox->setDecimals(1);
        edgeWidthSpinBox->setMinimum(0.1);
        edgeWidthSpinBox->setMaximum(100);
        edgeWidthSpinBox->setSingleStep(0.5);

        gridLayout_18->addWidget(edgeWidthSpinBox, 2, 6, 1, 1);


        verticalLayout_3->addWidget(widget_25);

        verticalSpacer_13 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_13);

        graphLayoutQualityHeadingLabel = new QLabel(scrollAreaWidgetContents);
        graphLayoutQualityHeadingLabel->setObjectName(QStringLiteral("graphLayoutQualityHeadingLabel"));
        graphLayoutQualityHeadingLabel->setFont(font);

        verticalLayout_3->addWidget(graphLayoutQualityHeadingLabel);

        graphLayoutDescriptionLabel = new QLabel(scrollAreaWidgetContents);
        graphLayoutDescriptionLabel->setObjectName(QStringLiteral("graphLayoutDescriptionLabel"));
        graphLayoutDescriptionLabel->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        graphLayoutDescriptionLabel->setWordWrap(true);

        verticalLayout_3->addWidget(graphLayoutDescriptionLabel);

        line_3 = new QFrame(scrollAreaWidgetContents);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_3);

        widget_16 = new QWidget(scrollAreaWidgetContents);
        widget_16->setObjectName(QStringLiteral("widget_16"));
        gridLayout_10 = new QGridLayout(widget_16);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget_16);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);

        gridLayout_10->addWidget(label_8, 2, 3, 1, 1);

        widget_6 = new QWidget(widget_16);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        sizePolicy1.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy1);
        horizontalLayout_8 = new QHBoxLayout(widget_6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        linearLayoutOnRadioButton = new QRadioButton(widget_6);
        linearLayoutOnRadioButton->setObjectName(QStringLiteral("linearLayoutOnRadioButton"));
        linearLayoutOnRadioButton->setChecked(true);

        horizontalLayout_8->addWidget(linearLayoutOnRadioButton);

        linearLayoutOffRadioButton = new QRadioButton(widget_6);
        linearLayoutOffRadioButton->setObjectName(QStringLiteral("linearLayoutOffRadioButton"));

        horizontalLayout_8->addWidget(linearLayoutOffRadioButton);


        gridLayout_10->addWidget(widget_6, 2, 4, 1, 1);

        linearLayoutInfoText = new InfoTextWidget(widget_16);
        linearLayoutInfoText->setObjectName(QStringLiteral("linearLayoutInfoText"));
        sizePolicy.setHeightForWidth(linearLayoutInfoText->sizePolicy().hasHeightForWidth());
        linearLayoutInfoText->setSizePolicy(sizePolicy);
        linearLayoutInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_10->addWidget(linearLayoutInfoText, 2, 2, 1, 1);

        label_9 = new QLabel(widget_16);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);

        gridLayout_10->addWidget(label_9, 0, 3, 1, 1);

        nodeSegmentLengthSpinBox = new QDoubleSpinBox(widget_16);
        nodeSegmentLengthSpinBox->setObjectName(QStringLiteral("nodeSegmentLengthSpinBox"));
        sizePolicy2.setHeightForWidth(nodeSegmentLengthSpinBox->sizePolicy().hasHeightForWidth());
        nodeSegmentLengthSpinBox->setSizePolicy(sizePolicy2);
        nodeSegmentLengthSpinBox->setAlignment(Qt::AlignCenter);
        nodeSegmentLengthSpinBox->setDecimals(1);
        nodeSegmentLengthSpinBox->setMinimum(1);
        nodeSegmentLengthSpinBox->setMaximum(1000);
        nodeSegmentLengthSpinBox->setSingleStep(1);

        gridLayout_10->addWidget(nodeSegmentLengthSpinBox, 0, 4, 1, 1);

        label_3 = new QLabel(widget_16);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout_10->addWidget(label_3, 1, 3, 1, 1);

        nodeSegmentLengthInfoText = new InfoTextWidget(widget_16);
        nodeSegmentLengthInfoText->setObjectName(QStringLiteral("nodeSegmentLengthInfoText"));
        sizePolicy.setHeightForWidth(nodeSegmentLengthInfoText->sizePolicy().hasHeightForWidth());
        nodeSegmentLengthInfoText->setSizePolicy(sizePolicy);
        nodeSegmentLengthInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_10->addWidget(nodeSegmentLengthInfoText, 0, 2, 1, 1);

        graphLayoutQualityInfoText = new InfoTextWidget(widget_16);
        graphLayoutQualityInfoText->setObjectName(QStringLiteral("graphLayoutQualityInfoText"));
        sizePolicy.setHeightForWidth(graphLayoutQualityInfoText->sizePolicy().hasHeightForWidth());
        graphLayoutQualityInfoText->setSizePolicy(sizePolicy);
        graphLayoutQualityInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_10->addWidget(graphLayoutQualityInfoText, 1, 2, 1, 1);

        graphLayoutQualitySlider = new QSlider(widget_16);
        graphLayoutQualitySlider->setObjectName(QStringLiteral("graphLayoutQualitySlider"));
        sizePolicy2.setHeightForWidth(graphLayoutQualitySlider->sizePolicy().hasHeightForWidth());
        graphLayoutQualitySlider->setSizePolicy(sizePolicy2);
        graphLayoutQualitySlider->setMaximum(4);
        graphLayoutQualitySlider->setPageStep(1);
        graphLayoutQualitySlider->setOrientation(Qt::Horizontal);
        graphLayoutQualitySlider->setTickPosition(QSlider::TicksBelow);

        gridLayout_10->addWidget(graphLayoutQualitySlider, 1, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_2, 0, 5, 1, 1);

        label_10 = new QLabel(widget_16);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);

        gridLayout_10->addWidget(label_10, 3, 3, 1, 1);

        componentSeparationSpinBox = new QDoubleSpinBox(widget_16);
        componentSeparationSpinBox->setObjectName(QStringLiteral("componentSeparationSpinBox"));
        sizePolicy2.setHeightForWidth(componentSeparationSpinBox->sizePolicy().hasHeightForWidth());
        componentSeparationSpinBox->setSizePolicy(sizePolicy2);
        componentSeparationSpinBox->setAlignment(Qt::AlignCenter);
        componentSeparationSpinBox->setDecimals(1);
        componentSeparationSpinBox->setMinimum(1);
        componentSeparationSpinBox->setMaximum(1000);
        componentSeparationSpinBox->setSingleStep(1);

        gridLayout_10->addWidget(componentSeparationSpinBox, 3, 4, 1, 1);

        componentSeparationInfoText = new InfoTextWidget(widget_16);
        componentSeparationInfoText->setObjectName(QStringLiteral("componentSeparationInfoText"));
        sizePolicy.setHeightForWidth(componentSeparationInfoText->sizePolicy().hasHeightForWidth());
        componentSeparationInfoText->setSizePolicy(sizePolicy);
        componentSeparationInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_10->addWidget(componentSeparationInfoText, 3, 2, 1, 1);


        verticalLayout_3->addWidget(widget_16);

        verticalSpacer_10 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_10);

        graphAppearanceHeadingLabel = new QLabel(scrollAreaWidgetContents);
        graphAppearanceHeadingLabel->setObjectName(QStringLiteral("graphAppearanceHeadingLabel"));
        graphAppearanceHeadingLabel->setFont(font);

        verticalLayout_3->addWidget(graphAppearanceHeadingLabel);

        graphAppearanceDescriptionLabel = new QLabel(scrollAreaWidgetContents);
        graphAppearanceDescriptionLabel->setObjectName(QStringLiteral("graphAppearanceDescriptionLabel"));
        graphAppearanceDescriptionLabel->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        graphAppearanceDescriptionLabel->setWordWrap(true);

        verticalLayout_3->addWidget(graphAppearanceDescriptionLabel);

        line_2 = new QFrame(scrollAreaWidgetContents);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        widget_8 = new QWidget(scrollAreaWidgetContents);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        gridLayout_9 = new QGridLayout(widget_8);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget_8);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        gridLayout_9->addWidget(label_6, 4, 3, 1, 1);

        edgeColourInfoText = new InfoTextWidget(widget_8);
        edgeColourInfoText->setObjectName(QStringLiteral("edgeColourInfoText"));
        sizePolicy.setHeightForWidth(edgeColourInfoText->sizePolicy().hasHeightForWidth());
        edgeColourInfoText->setSizePolicy(sizePolicy);
        edgeColourInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_9->addWidget(edgeColourInfoText, 1, 1, 1, 1);

        label_28 = new QLabel(widget_8);
        label_28->setObjectName(QStringLiteral("label_28"));
        sizePolicy1.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy1);

        gridLayout_9->addWidget(label_28, 1, 3, 1, 1);

        outlineColourButton = new ColourButton(widget_8);
        outlineColourButton->setObjectName(QStringLiteral("outlineColourButton"));
        sizePolicy2.setHeightForWidth(outlineColourButton->sizePolicy().hasHeightForWidth());
        outlineColourButton->setSizePolicy(sizePolicy2);

        gridLayout_9->addWidget(outlineColourButton, 3, 4, 1, 1);

        label_18 = new QLabel(widget_8);
        label_18->setObjectName(QStringLiteral("label_18"));
        sizePolicy1.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy1);

        gridLayout_9->addWidget(label_18, 5, 3, 1, 1);

        outlineColourInfoText = new InfoTextWidget(widget_8);
        outlineColourInfoText->setObjectName(QStringLiteral("outlineColourInfoText"));
        sizePolicy.setHeightForWidth(outlineColourInfoText->sizePolicy().hasHeightForWidth());
        outlineColourInfoText->setSizePolicy(sizePolicy);
        outlineColourInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_9->addWidget(outlineColourInfoText, 3, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer, 1, 5, 1, 1);

        edgeColourButton = new ColourButton(widget_8);
        edgeColourButton->setObjectName(QStringLiteral("edgeColourButton"));
        sizePolicy2.setHeightForWidth(edgeColourButton->sizePolicy().hasHeightForWidth());
        edgeColourButton->setSizePolicy(sizePolicy2);

        gridLayout_9->addWidget(edgeColourButton, 1, 4, 1, 1);

        label_27 = new QLabel(widget_8);
        label_27->setObjectName(QStringLiteral("label_27"));
        sizePolicy1.setHeightForWidth(label_27->sizePolicy().hasHeightForWidth());
        label_27->setSizePolicy(sizePolicy1);

        gridLayout_9->addWidget(label_27, 3, 3, 1, 1);

        outlineThicknessInfoText = new InfoTextWidget(widget_8);
        outlineThicknessInfoText->setObjectName(QStringLiteral("outlineThicknessInfoText"));
        sizePolicy.setHeightForWidth(outlineThicknessInfoText->sizePolicy().hasHeightForWidth());
        outlineThicknessInfoText->setSizePolicy(sizePolicy);
        outlineThicknessInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_9->addWidget(outlineThicknessInfoText, 4, 1, 1, 1);

        selectionColourInfoText = new InfoTextWidget(widget_8);
        selectionColourInfoText->setObjectName(QStringLiteral("selectionColourInfoText"));
        sizePolicy.setHeightForWidth(selectionColourInfoText->sizePolicy().hasHeightForWidth());
        selectionColourInfoText->setSizePolicy(sizePolicy);
        selectionColourInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_9->addWidget(selectionColourInfoText, 5, 1, 1, 1);

        selectionColourButton = new ColourButton(widget_8);
        selectionColourButton->setObjectName(QStringLiteral("selectionColourButton"));
        sizePolicy2.setHeightForWidth(selectionColourButton->sizePolicy().hasHeightForWidth());
        selectionColourButton->setSizePolicy(sizePolicy2);

        gridLayout_9->addWidget(selectionColourButton, 5, 4, 1, 1);

        outlineThicknessSpinBox = new QDoubleSpinBox(widget_8);
        outlineThicknessSpinBox->setObjectName(QStringLiteral("outlineThicknessSpinBox"));
        sizePolicy2.setHeightForWidth(outlineThicknessSpinBox->sizePolicy().hasHeightForWidth());
        outlineThicknessSpinBox->setSizePolicy(sizePolicy2);
        outlineThicknessSpinBox->setAlignment(Qt::AlignCenter);
        outlineThicknessSpinBox->setMaximum(1000);
        outlineThicknessSpinBox->setSingleStep(0.05);

        gridLayout_9->addWidget(outlineThicknessSpinBox, 4, 4, 1, 1);

        widget_11 = new QWidget(widget_8);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        sizePolicy1.setHeightForWidth(widget_11->sizePolicy().hasHeightForWidth());
        widget_11->setSizePolicy(sizePolicy1);
        horizontalLayout_9 = new QHBoxLayout(widget_11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        singleNodeArrowHeadsOnRadioButton = new QRadioButton(widget_11);
        singleNodeArrowHeadsOnRadioButton->setObjectName(QStringLiteral("singleNodeArrowHeadsOnRadioButton"));
        singleNodeArrowHeadsOnRadioButton->setChecked(false);

        horizontalLayout_9->addWidget(singleNodeArrowHeadsOnRadioButton);

        singleNodeArrowHeadsOffRadioButton = new QRadioButton(widget_11);
        singleNodeArrowHeadsOffRadioButton->setObjectName(QStringLiteral("singleNodeArrowHeadsOffRadioButton"));
        singleNodeArrowHeadsOffRadioButton->setChecked(true);

        horizontalLayout_9->addWidget(singleNodeArrowHeadsOffRadioButton);


        gridLayout_9->addWidget(widget_11, 7, 4, 1, 1);

        widget_3 = new QWidget(widget_8);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        antialiasingOnRadioButton = new QRadioButton(widget_3);
        antialiasingOnRadioButton->setObjectName(QStringLiteral("antialiasingOnRadioButton"));
        antialiasingOnRadioButton->setChecked(true);

        horizontalLayout_2->addWidget(antialiasingOnRadioButton);

        antialiasingOffRadioButton = new QRadioButton(widget_3);
        antialiasingOffRadioButton->setObjectName(QStringLiteral("antialiasingOffRadioButton"));

        horizontalLayout_2->addWidget(antialiasingOffRadioButton);


        gridLayout_9->addWidget(widget_3, 6, 4, 1, 1);

        label_11 = new QLabel(widget_8);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);

        gridLayout_9->addWidget(label_11, 6, 3, 1, 1);

        antialiasingInfoText = new InfoTextWidget(widget_8);
        antialiasingInfoText->setObjectName(QStringLiteral("antialiasingInfoText"));
        sizePolicy.setHeightForWidth(antialiasingInfoText->sizePolicy().hasHeightForWidth());
        antialiasingInfoText->setSizePolicy(sizePolicy);
        antialiasingInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_9->addWidget(antialiasingInfoText, 6, 1, 1, 1);

        label_23 = new QLabel(widget_8);
        label_23->setObjectName(QStringLiteral("label_23"));
        sizePolicy1.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy1);

        gridLayout_9->addWidget(label_23, 7, 3, 1, 1);

        singleNodeArrowHeadsInfoText = new InfoTextWidget(widget_8);
        singleNodeArrowHeadsInfoText->setObjectName(QStringLiteral("singleNodeArrowHeadsInfoText"));
        sizePolicy.setHeightForWidth(singleNodeArrowHeadsInfoText->sizePolicy().hasHeightForWidth());
        singleNodeArrowHeadsInfoText->setSizePolicy(sizePolicy);
        singleNodeArrowHeadsInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_9->addWidget(singleNodeArrowHeadsInfoText, 7, 1, 1, 1);


        verticalLayout_3->addWidget(widget_8);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        textAppearanceHeadingLabel = new QLabel(scrollAreaWidgetContents);
        textAppearanceHeadingLabel->setObjectName(QStringLiteral("textAppearanceHeadingLabel"));
        textAppearanceHeadingLabel->setFont(font);

        verticalLayout_3->addWidget(textAppearanceHeadingLabel);

        textAppearanceDescriptionLabel = new QLabel(scrollAreaWidgetContents);
        textAppearanceDescriptionLabel->setObjectName(QStringLiteral("textAppearanceDescriptionLabel"));
        textAppearanceDescriptionLabel->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        textAppearanceDescriptionLabel->setWordWrap(true);

        verticalLayout_3->addWidget(textAppearanceDescriptionLabel);

        line_4 = new QFrame(scrollAreaWidgetContents);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_4);

        widget_17 = new QWidget(scrollAreaWidgetContents);
        widget_17->setObjectName(QStringLiteral("widget_17"));
        gridLayout_3 = new QGridLayout(widget_17);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        textOutlineThicknessInfoText = new InfoTextWidget(widget_17);
        textOutlineThicknessInfoText->setObjectName(QStringLiteral("textOutlineThicknessInfoText"));
        sizePolicy.setHeightForWidth(textOutlineThicknessInfoText->sizePolicy().hasHeightForWidth());
        textOutlineThicknessInfoText->setSizePolicy(sizePolicy);
        textOutlineThicknessInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_3->addWidget(textOutlineThicknessInfoText, 1, 1, 1, 1);

        textColourInfoText = new InfoTextWidget(widget_17);
        textColourInfoText->setObjectName(QStringLiteral("textColourInfoText"));
        sizePolicy.setHeightForWidth(textColourInfoText->sizePolicy().hasHeightForWidth());
        textColourInfoText->setSizePolicy(sizePolicy);
        textColourInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_3->addWidget(textColourInfoText, 0, 1, 1, 1);

        label_26 = new QLabel(widget_17);
        label_26->setObjectName(QStringLiteral("label_26"));
        sizePolicy1.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_26, 0, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 1, 4, 1, 1);

        label_47 = new QLabel(widget_17);
        label_47->setObjectName(QStringLiteral("label_47"));
        sizePolicy1.setHeightForWidth(label_47->sizePolicy().hasHeightForWidth());
        label_47->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_47, 2, 2, 1, 1);

        label_7 = new QLabel(widget_17);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_7, 1, 2, 1, 1);

        textOutlineColourButton = new ColourButton(widget_17);
        textOutlineColourButton->setObjectName(QStringLiteral("textOutlineColourButton"));
        sizePolicy2.setHeightForWidth(textOutlineColourButton->sizePolicy().hasHeightForWidth());
        textOutlineColourButton->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(textOutlineColourButton, 2, 3, 1, 1);

        textOutlineColourInfoText = new InfoTextWidget(widget_17);
        textOutlineColourInfoText->setObjectName(QStringLiteral("textOutlineColourInfoText"));
        sizePolicy.setHeightForWidth(textOutlineColourInfoText->sizePolicy().hasHeightForWidth());
        textOutlineColourInfoText->setSizePolicy(sizePolicy);
        textOutlineColourInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_3->addWidget(textOutlineColourInfoText, 2, 1, 1, 1);

        textOutlineThicknessSpinBox = new QDoubleSpinBox(widget_17);
        textOutlineThicknessSpinBox->setObjectName(QStringLiteral("textOutlineThicknessSpinBox"));
        sizePolicy2.setHeightForWidth(textOutlineThicknessSpinBox->sizePolicy().hasHeightForWidth());
        textOutlineThicknessSpinBox->setSizePolicy(sizePolicy2);
        textOutlineThicknessSpinBox->setAlignment(Qt::AlignCenter);
        textOutlineThicknessSpinBox->setMaximum(2);
        textOutlineThicknessSpinBox->setSingleStep(0.1);

        gridLayout_3->addWidget(textOutlineThicknessSpinBox, 1, 3, 1, 1);

        textColourButton = new ColourButton(widget_17);
        textColourButton->setObjectName(QStringLiteral("textColourButton"));
        sizePolicy2.setHeightForWidth(textColourButton->sizePolicy().hasHeightForWidth());
        textColourButton->setSizePolicy(sizePolicy2);
        textColourButton->setMinimumSize(QSize(100, 0));

        gridLayout_3->addWidget(textColourButton, 0, 3, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_10, 1, 0, 1, 1);


        verticalLayout_3->addWidget(widget_17);

        widget_9 = new QWidget(scrollAreaWidgetContents);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        horizontalLayout_6 = new QHBoxLayout(widget_9);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_25 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_25);

        positionTextInfoText = new InfoTextWidget(widget_9);
        positionTextInfoText->setObjectName(QStringLiteral("positionTextInfoText"));
        sizePolicy.setHeightForWidth(positionTextInfoText->sizePolicy().hasHeightForWidth());
        positionTextInfoText->setSizePolicy(sizePolicy);
        positionTextInfoText->setMinimumSize(QSize(16, 16));

        horizontalLayout_6->addWidget(positionTextInfoText);

        label_48 = new QLabel(widget_9);
        label_48->setObjectName(QStringLiteral("label_48"));
        sizePolicy1.setHeightForWidth(label_48->sizePolicy().hasHeightForWidth());
        label_48->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(label_48);

        widget_15 = new QWidget(widget_9);
        widget_15->setObjectName(QStringLiteral("widget_15"));
        verticalLayout_2 = new QVBoxLayout(widget_15);
#ifndef Q_OS_MAC
        verticalLayout_2->setSpacing(-1);
#endif
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        positionVisibleRadioButton = new QRadioButton(widget_15);
        positionVisibleRadioButton->setObjectName(QStringLiteral("positionVisibleRadioButton"));
        positionVisibleRadioButton->setChecked(true);

        verticalLayout_2->addWidget(positionVisibleRadioButton);

        positionCentreRadioButton = new QRadioButton(widget_15);
        positionCentreRadioButton->setObjectName(QStringLiteral("positionCentreRadioButton"));

        verticalLayout_2->addWidget(positionCentreRadioButton);


        horizontalLayout_6->addWidget(widget_15);

        horizontalSpacer_26 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_26);


        verticalLayout_3->addWidget(widget_9);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        nodeWidthHeadingLabel = new QLabel(scrollAreaWidgetContents);
        nodeWidthHeadingLabel->setObjectName(QStringLiteral("nodeWidthHeadingLabel"));
        nodeWidthHeadingLabel->setFont(font);

        verticalLayout_3->addWidget(nodeWidthHeadingLabel);

        nodeWidthDescriptionLabel = new QLabel(scrollAreaWidgetContents);
        nodeWidthDescriptionLabel->setObjectName(QStringLiteral("nodeWidthDescriptionLabel"));
        nodeWidthDescriptionLabel->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        nodeWidthDescriptionLabel->setWordWrap(true);

        verticalLayout_3->addWidget(nodeWidthDescriptionLabel);

        line_7 = new QFrame(scrollAreaWidgetContents);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_7);

        widget_4 = new QWidget(scrollAreaWidgetContents);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        gridLayout_6 = new QGridLayout(widget_4);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        depthEffectOnWidthInfoText = new InfoTextWidget(widget_4);
        depthEffectOnWidthInfoText->setObjectName(QStringLiteral("depthEffectOnWidthInfoText"));
        sizePolicy.setHeightForWidth(depthEffectOnWidthInfoText->sizePolicy().hasHeightForWidth());
        depthEffectOnWidthInfoText->setSizePolicy(sizePolicy);
        depthEffectOnWidthInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_6->addWidget(depthEffectOnWidthInfoText, 0, 2, 1, 1);

        depthPowerInfoText = new InfoTextWidget(widget_4);
        depthPowerInfoText->setObjectName(QStringLiteral("depthPowerInfoText"));
        sizePolicy.setHeightForWidth(depthPowerInfoText->sizePolicy().hasHeightForWidth());
        depthPowerInfoText->setSizePolicy(sizePolicy);
        depthPowerInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_6->addWidget(depthPowerInfoText, 1, 2, 1, 1);

        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        gridLayout_6->addWidget(label_4, 0, 3, 1, 1);

        depthEffectOnWidthSpinBox = new QDoubleSpinBox(widget_4);
        depthEffectOnWidthSpinBox->setObjectName(QStringLiteral("depthEffectOnWidthSpinBox"));
        sizePolicy2.setHeightForWidth(depthEffectOnWidthSpinBox->sizePolicy().hasHeightForWidth());
        depthEffectOnWidthSpinBox->setSizePolicy(sizePolicy2);
        depthEffectOnWidthSpinBox->setAlignment(Qt::AlignCenter);
        depthEffectOnWidthSpinBox->setDecimals(0);
        depthEffectOnWidthSpinBox->setMinimum(0);
        depthEffectOnWidthSpinBox->setMaximum(100);
        depthEffectOnWidthSpinBox->setSingleStep(5);

        gridLayout_6->addWidget(depthEffectOnWidthSpinBox, 0, 4, 1, 1);

        depthPowerSpinBox = new QDoubleSpinBox(widget_4);
        depthPowerSpinBox->setObjectName(QStringLiteral("depthPowerSpinBox"));
        sizePolicy2.setHeightForWidth(depthPowerSpinBox->sizePolicy().hasHeightForWidth());
        depthPowerSpinBox->setSizePolicy(sizePolicy2);
        depthPowerSpinBox->setAlignment(Qt::AlignCenter);
        depthPowerSpinBox->setMinimum(0.1);
        depthPowerSpinBox->setMaximum(1);
        depthPowerSpinBox->setSingleStep(0.05);

        gridLayout_6->addWidget(depthPowerSpinBox, 1, 4, 1, 1);

        label_36 = new QLabel(widget_4);
        label_36->setObjectName(QStringLiteral("label_36"));
        sizePolicy1.setHeightForWidth(label_36->sizePolicy().hasHeightForWidth());
        label_36->setSizePolicy(sizePolicy1);

        gridLayout_6->addWidget(label_36, 1, 3, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_9, 1, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_5, 1, 6, 1, 1);

        widget_7 = new QWidget(widget_4);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        horizontalLayout_3 = new QHBoxLayout(widget_7);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        frame = new QFrame(widget_7);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        nodeWidthVisualAid = new NodeWidthVisualAid(frame);
        nodeWidthVisualAid->setObjectName(QStringLiteral("nodeWidthVisualAid"));
        sizePolicy.setHeightForWidth(nodeWidthVisualAid->sizePolicy().hasHeightForWidth());
        nodeWidthVisualAid->setSizePolicy(sizePolicy);
        nodeWidthVisualAid->setMinimumSize(QSize(80, 80));

        gridLayout_5->addWidget(nodeWidthVisualAid, 0, 3, 1, 1);

        label_38 = new QLabel(frame);
        label_38->setObjectName(QStringLiteral("label_38"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_38->sizePolicy().hasHeightForWidth());
        label_38->setSizePolicy(sizePolicy3);
        label_38->setMinimumSize(QSize(5, 0));
        label_38->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255)"));

        gridLayout_5->addWidget(label_38, 0, 2, 1, 1);

        label_37 = new VerticalLabel(frame);
        label_37->setObjectName(QStringLiteral("label_37"));
        sizePolicy1.setHeightForWidth(label_37->sizePolicy().hasHeightForWidth());
        label_37->setSizePolicy(sizePolicy1);
        label_37->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255)"));
        label_37->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_37, 0, 1, 1, 1);

        label_40 = new QLabel(frame);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255)"));

        gridLayout_5->addWidget(label_40, 1, 1, 1, 2);

        label_39 = new QLabel(frame);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255)"));
        label_39->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_39, 1, 3, 1, 1);


        horizontalLayout_3->addWidget(frame);

        horizontalSpacer_6 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        gridLayout_6->addWidget(widget_7, 2, 3, 1, 2);


        verticalLayout_3->addWidget(widget_4);

        verticalSpacer_4 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);

        randomColourSchemeHeadingLabel = new QLabel(scrollAreaWidgetContents);
        randomColourSchemeHeadingLabel->setObjectName(QStringLiteral("randomColourSchemeHeadingLabel"));
        randomColourSchemeHeadingLabel->setFont(font);

        verticalLayout_3->addWidget(randomColourSchemeHeadingLabel);

        line_6 = new QFrame(scrollAreaWidgetContents);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_6);

        randomColourSchemeDescriptionLabel = new QLabel(scrollAreaWidgetContents);
        randomColourSchemeDescriptionLabel->setObjectName(QStringLiteral("randomColourSchemeDescriptionLabel"));
        randomColourSchemeDescriptionLabel->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        randomColourSchemeDescriptionLabel->setWordWrap(true);

        verticalLayout_3->addWidget(randomColourSchemeDescriptionLabel);

        widget_18 = new QWidget(scrollAreaWidgetContents);
        widget_18->setObjectName(QStringLiteral("widget_18"));
        gridLayout_11 = new QGridLayout(widget_18);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        randomColourPositiveSaturationInfoText = new InfoTextWidget(widget_18);
        randomColourPositiveSaturationInfoText->setObjectName(QStringLiteral("randomColourPositiveSaturationInfoText"));
        sizePolicy.setHeightForWidth(randomColourPositiveSaturationInfoText->sizePolicy().hasHeightForWidth());
        randomColourPositiveSaturationInfoText->setSizePolicy(sizePolicy);
        randomColourPositiveSaturationInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_11->addWidget(randomColourPositiveSaturationInfoText, 0, 1, 1, 1);

        randomColourPositiveLightnessInfoText = new InfoTextWidget(widget_18);
        randomColourPositiveLightnessInfoText->setObjectName(QStringLiteral("randomColourPositiveLightnessInfoText"));
        sizePolicy.setHeightForWidth(randomColourPositiveLightnessInfoText->sizePolicy().hasHeightForWidth());
        randomColourPositiveLightnessInfoText->setSizePolicy(sizePolicy);
        randomColourPositiveLightnessInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_11->addWidget(randomColourPositiveLightnessInfoText, 2, 1, 1, 1);

        randomColourNegativeSaturationInfoText = new InfoTextWidget(widget_18);
        randomColourNegativeSaturationInfoText->setObjectName(QStringLiteral("randomColourNegativeSaturationInfoText"));
        sizePolicy.setHeightForWidth(randomColourNegativeSaturationInfoText->sizePolicy().hasHeightForWidth());
        randomColourNegativeSaturationInfoText->setSizePolicy(sizePolicy);
        randomColourNegativeSaturationInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_11->addWidget(randomColourNegativeSaturationInfoText, 1, 1, 1, 1);

        randomColourPositiveLightnessSlider = new QSlider(widget_18);
        randomColourPositiveLightnessSlider->setObjectName(QStringLiteral("randomColourPositiveLightnessSlider"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(randomColourPositiveLightnessSlider->sizePolicy().hasHeightForWidth());
        randomColourPositiveLightnessSlider->setSizePolicy(sizePolicy4);
        randomColourPositiveLightnessSlider->setMaximum(255);
        randomColourPositiveLightnessSlider->setOrientation(Qt::Horizontal);

        gridLayout_11->addWidget(randomColourPositiveLightnessSlider, 2, 3, 1, 1);

        randomColourPositiveSaturationSlider = new QSlider(widget_18);
        randomColourPositiveSaturationSlider->setObjectName(QStringLiteral("randomColourPositiveSaturationSlider"));
        sizePolicy4.setHeightForWidth(randomColourPositiveSaturationSlider->sizePolicy().hasHeightForWidth());
        randomColourPositiveSaturationSlider->setSizePolicy(sizePolicy4);
        randomColourPositiveSaturationSlider->setMaximum(255);
        randomColourPositiveSaturationSlider->setOrientation(Qt::Horizontal);

        gridLayout_11->addWidget(randomColourPositiveSaturationSlider, 0, 3, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_12, 0, 5, 1, 1);

        label_34 = new QLabel(widget_18);
        label_34->setObjectName(QStringLiteral("label_34"));
        sizePolicy1.setHeightForWidth(label_34->sizePolicy().hasHeightForWidth());
        label_34->setSizePolicy(sizePolicy1);

        gridLayout_11->addWidget(label_34, 4, 2, 1, 1);

        label_44 = new QLabel(widget_18);
        label_44->setObjectName(QStringLiteral("label_44"));
        sizePolicy1.setHeightForWidth(label_44->sizePolicy().hasHeightForWidth());
        label_44->setSizePolicy(sizePolicy1);

        gridLayout_11->addWidget(label_44, 2, 2, 1, 1);

        label_42 = new QLabel(widget_18);
        label_42->setObjectName(QStringLiteral("label_42"));
        sizePolicy1.setHeightForWidth(label_42->sizePolicy().hasHeightForWidth());
        label_42->setSizePolicy(sizePolicy1);

        gridLayout_11->addWidget(label_42, 0, 2, 1, 1);

        randomColourPositiveOpacitySlider = new QSlider(widget_18);
        randomColourPositiveOpacitySlider->setObjectName(QStringLiteral("randomColourPositiveOpacitySlider"));
        sizePolicy4.setHeightForWidth(randomColourPositiveOpacitySlider->sizePolicy().hasHeightForWidth());
        randomColourPositiveOpacitySlider->setSizePolicy(sizePolicy4);
        randomColourPositiveOpacitySlider->setMaximum(255);
        randomColourPositiveOpacitySlider->setOrientation(Qt::Horizontal);

        gridLayout_11->addWidget(randomColourPositiveOpacitySlider, 4, 3, 1, 1);

        randomColourPositiveLightnessSpinBox = new QSpinBox(widget_18);
        randomColourPositiveLightnessSpinBox->setObjectName(QStringLiteral("randomColourPositiveLightnessSpinBox"));
        randomColourPositiveLightnessSpinBox->setAlignment(Qt::AlignCenter);
        randomColourPositiveLightnessSpinBox->setMaximum(255);

        gridLayout_11->addWidget(randomColourPositiveLightnessSpinBox, 2, 4, 1, 1);

        label_45 = new QLabel(widget_18);
        label_45->setObjectName(QStringLiteral("label_45"));
        sizePolicy1.setHeightForWidth(label_45->sizePolicy().hasHeightForWidth());
        label_45->setSizePolicy(sizePolicy1);

        gridLayout_11->addWidget(label_45, 3, 2, 1, 1);

        randomColourNegativeSaturationSlider = new QSlider(widget_18);
        randomColourNegativeSaturationSlider->setObjectName(QStringLiteral("randomColourNegativeSaturationSlider"));
        sizePolicy4.setHeightForWidth(randomColourNegativeSaturationSlider->sizePolicy().hasHeightForWidth());
        randomColourNegativeSaturationSlider->setSizePolicy(sizePolicy4);
        randomColourNegativeSaturationSlider->setMaximum(255);
        randomColourNegativeSaturationSlider->setOrientation(Qt::Horizontal);

        gridLayout_11->addWidget(randomColourNegativeSaturationSlider, 1, 3, 1, 1);

        label_43 = new QLabel(widget_18);
        label_43->setObjectName(QStringLiteral("label_43"));
        sizePolicy1.setHeightForWidth(label_43->sizePolicy().hasHeightForWidth());
        label_43->setSizePolicy(sizePolicy1);

        gridLayout_11->addWidget(label_43, 1, 2, 1, 1);

        randomColourNegativeLightnessInfoText = new InfoTextWidget(widget_18);
        randomColourNegativeLightnessInfoText->setObjectName(QStringLiteral("randomColourNegativeLightnessInfoText"));
        sizePolicy.setHeightForWidth(randomColourNegativeLightnessInfoText->sizePolicy().hasHeightForWidth());
        randomColourNegativeLightnessInfoText->setSizePolicy(sizePolicy);
        randomColourNegativeLightnessInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_11->addWidget(randomColourNegativeLightnessInfoText, 3, 1, 1, 1);

        randomColourPositiveOpacityInfoText = new InfoTextWidget(widget_18);
        randomColourPositiveOpacityInfoText->setObjectName(QStringLiteral("randomColourPositiveOpacityInfoText"));
        sizePolicy.setHeightForWidth(randomColourPositiveOpacityInfoText->sizePolicy().hasHeightForWidth());
        randomColourPositiveOpacityInfoText->setSizePolicy(sizePolicy);
        randomColourPositiveOpacityInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_11->addWidget(randomColourPositiveOpacityInfoText, 4, 1, 1, 1);

        randomColourNegativeSaturationSpinBox = new QSpinBox(widget_18);
        randomColourNegativeSaturationSpinBox->setObjectName(QStringLiteral("randomColourNegativeSaturationSpinBox"));
        randomColourNegativeSaturationSpinBox->setAlignment(Qt::AlignCenter);
        randomColourNegativeSaturationSpinBox->setMaximum(255);

        gridLayout_11->addWidget(randomColourNegativeSaturationSpinBox, 1, 4, 1, 1);

        randomColourPositiveSaturationSpinBox = new QSpinBox(widget_18);
        randomColourPositiveSaturationSpinBox->setObjectName(QStringLiteral("randomColourPositiveSaturationSpinBox"));
        randomColourPositiveSaturationSpinBox->setAlignment(Qt::AlignCenter);
        randomColourPositiveSaturationSpinBox->setMaximum(255);

        gridLayout_11->addWidget(randomColourPositiveSaturationSpinBox, 0, 4, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_11, 0, 0, 1, 1);

        randomColourNegativeLightnessSlider = new QSlider(widget_18);
        randomColourNegativeLightnessSlider->setObjectName(QStringLiteral("randomColourNegativeLightnessSlider"));
        sizePolicy4.setHeightForWidth(randomColourNegativeLightnessSlider->sizePolicy().hasHeightForWidth());
        randomColourNegativeLightnessSlider->setSizePolicy(sizePolicy4);
        randomColourNegativeLightnessSlider->setMaximum(255);
        randomColourNegativeLightnessSlider->setOrientation(Qt::Horizontal);

        gridLayout_11->addWidget(randomColourNegativeLightnessSlider, 3, 3, 1, 1);

        randomColourPositiveOpacitySpinBox = new QSpinBox(widget_18);
        randomColourPositiveOpacitySpinBox->setObjectName(QStringLiteral("randomColourPositiveOpacitySpinBox"));
        randomColourPositiveOpacitySpinBox->setAlignment(Qt::AlignCenter);
        randomColourPositiveOpacitySpinBox->setMaximum(255);

        gridLayout_11->addWidget(randomColourPositiveOpacitySpinBox, 4, 4, 1, 1);

        randomColourNegativeLightnessSpinBox = new QSpinBox(widget_18);
        randomColourNegativeLightnessSpinBox->setObjectName(QStringLiteral("randomColourNegativeLightnessSpinBox"));
        randomColourNegativeLightnessSpinBox->setAlignment(Qt::AlignCenter);
        randomColourNegativeLightnessSpinBox->setMaximum(255);

        gridLayout_11->addWidget(randomColourNegativeLightnessSpinBox, 3, 4, 1, 1);

        randomColourNegativeOpacityInfoText = new InfoTextWidget(widget_18);
        randomColourNegativeOpacityInfoText->setObjectName(QStringLiteral("randomColourNegativeOpacityInfoText"));
        sizePolicy.setHeightForWidth(randomColourNegativeOpacityInfoText->sizePolicy().hasHeightForWidth());
        randomColourNegativeOpacityInfoText->setSizePolicy(sizePolicy);
        randomColourNegativeOpacityInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_11->addWidget(randomColourNegativeOpacityInfoText, 5, 1, 1, 1);

        label_46 = new QLabel(widget_18);
        label_46->setObjectName(QStringLiteral("label_46"));
        sizePolicy1.setHeightForWidth(label_46->sizePolicy().hasHeightForWidth());
        label_46->setSizePolicy(sizePolicy1);

        gridLayout_11->addWidget(label_46, 5, 2, 1, 1);

        randomColourNegativeOpacitySlider = new QSlider(widget_18);
        randomColourNegativeOpacitySlider->setObjectName(QStringLiteral("randomColourNegativeOpacitySlider"));
        sizePolicy4.setHeightForWidth(randomColourNegativeOpacitySlider->sizePolicy().hasHeightForWidth());
        randomColourNegativeOpacitySlider->setSizePolicy(sizePolicy4);
        randomColourNegativeOpacitySlider->setMaximum(255);
        randomColourNegativeOpacitySlider->setOrientation(Qt::Horizontal);

        gridLayout_11->addWidget(randomColourNegativeOpacitySlider, 5, 3, 1, 1);

        randomColourNegativeOpacitySpinBox = new QSpinBox(widget_18);
        randomColourNegativeOpacitySpinBox->setObjectName(QStringLiteral("randomColourNegativeOpacitySpinBox"));
        randomColourNegativeOpacitySpinBox->setAlignment(Qt::AlignCenter);
        randomColourNegativeOpacitySpinBox->setMaximum(255);

        gridLayout_11->addWidget(randomColourNegativeOpacitySpinBox, 5, 4, 1, 1);


        verticalLayout_3->addWidget(widget_18);

        verticalSpacer_8 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_8);

        uniformColourSchemeHeadingLabel = new QLabel(scrollAreaWidgetContents);
        uniformColourSchemeHeadingLabel->setObjectName(QStringLiteral("uniformColourSchemeHeadingLabel"));
        uniformColourSchemeHeadingLabel->setFont(font);

        verticalLayout_3->addWidget(uniformColourSchemeHeadingLabel);

        line_5 = new QFrame(scrollAreaWidgetContents);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_5);

        uniformColourSchemeDescriptionLabel = new QLabel(scrollAreaWidgetContents);
        uniformColourSchemeDescriptionLabel->setObjectName(QStringLiteral("uniformColourSchemeDescriptionLabel"));
        uniformColourSchemeDescriptionLabel->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        uniformColourSchemeDescriptionLabel->setWordWrap(true);

        verticalLayout_3->addWidget(uniformColourSchemeDescriptionLabel);

        widget_19 = new QWidget(scrollAreaWidgetContents);
        widget_19->setObjectName(QStringLiteral("widget_19"));
        gridLayout_12 = new QGridLayout(widget_19);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        uniformNodeSpecialColourInfoText = new InfoTextWidget(widget_19);
        uniformNodeSpecialColourInfoText->setObjectName(QStringLiteral("uniformNodeSpecialColourInfoText"));
        sizePolicy.setHeightForWidth(uniformNodeSpecialColourInfoText->sizePolicy().hasHeightForWidth());
        uniformNodeSpecialColourInfoText->setSizePolicy(sizePolicy);
        uniformNodeSpecialColourInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_12->addWidget(uniformNodeSpecialColourInfoText, 2, 1, 1, 1);

        uniformNegativeNodeColourInfoText = new InfoTextWidget(widget_19);
        uniformNegativeNodeColourInfoText->setObjectName(QStringLiteral("uniformNegativeNodeColourInfoText"));
        sizePolicy.setHeightForWidth(uniformNegativeNodeColourInfoText->sizePolicy().hasHeightForWidth());
        uniformNegativeNodeColourInfoText->setSizePolicy(sizePolicy);
        uniformNegativeNodeColourInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_12->addWidget(uniformNegativeNodeColourInfoText, 1, 1, 1, 1);

        uniformNodeSpecialColourButton = new ColourButton(widget_19);
        uniformNodeSpecialColourButton->setObjectName(QStringLiteral("uniformNodeSpecialColourButton"));

        gridLayout_12->addWidget(uniformNodeSpecialColourButton, 2, 3, 1, 1);

        label_17 = new QLabel(widget_19);
        label_17->setObjectName(QStringLiteral("label_17"));
        sizePolicy1.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy1);

        gridLayout_12->addWidget(label_17, 1, 2, 1, 1);

        uniformPositiveNodeColourInfoText = new InfoTextWidget(widget_19);
        uniformPositiveNodeColourInfoText->setObjectName(QStringLiteral("uniformPositiveNodeColourInfoText"));
        sizePolicy.setHeightForWidth(uniformPositiveNodeColourInfoText->sizePolicy().hasHeightForWidth());
        uniformPositiveNodeColourInfoText->setSizePolicy(sizePolicy);
        uniformPositiveNodeColourInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_12->addWidget(uniformPositiveNodeColourInfoText, 0, 1, 1, 1);

        uniformNegativeNodeColourButton = new ColourButton(widget_19);
        uniformNegativeNodeColourButton->setObjectName(QStringLiteral("uniformNegativeNodeColourButton"));

        gridLayout_12->addWidget(uniformNegativeNodeColourButton, 1, 3, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_13, 0, 0, 1, 1);

        uniformPositiveNodeColourButton = new ColourButton(widget_19);
        uniformPositiveNodeColourButton->setObjectName(QStringLiteral("uniformPositiveNodeColourButton"));
        uniformPositiveNodeColourButton->setMinimumSize(QSize(100, 0));

        gridLayout_12->addWidget(uniformPositiveNodeColourButton, 0, 3, 1, 1);

        label_13 = new QLabel(widget_19);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);

        gridLayout_12->addWidget(label_13, 0, 2, 1, 1);

        label_14 = new QLabel(widget_19);
        label_14->setObjectName(QStringLiteral("label_14"));
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);

        gridLayout_12->addWidget(label_14, 2, 2, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_14, 0, 4, 1, 1);


        verticalLayout_3->addWidget(widget_19);

        verticalSpacer_5 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_5);

        depthColourSchemeHeadingLabel = new QLabel(scrollAreaWidgetContents);
        depthColourSchemeHeadingLabel->setObjectName(QStringLiteral("depthColourSchemeHeadingLabel"));
        depthColourSchemeHeadingLabel->setFont(font);

        verticalLayout_3->addWidget(depthColourSchemeHeadingLabel);

        line_8 = new QFrame(scrollAreaWidgetContents);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_8);

        depthColourSchemeDescriptionLabel = new QLabel(scrollAreaWidgetContents);
        depthColourSchemeDescriptionLabel->setObjectName(QStringLiteral("depthColourSchemeDescriptionLabel"));
        depthColourSchemeDescriptionLabel->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        depthColourSchemeDescriptionLabel->setWordWrap(true);

        verticalLayout_3->addWidget(depthColourSchemeDescriptionLabel);

        widget_5 = new QWidget(scrollAreaWidgetContents);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        sizePolicy1.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy1);
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);

        verticalLayout_3->addWidget(widget_5);

        widget = new QWidget(scrollAreaWidgetContents);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lowDepthColourInfoText = new InfoTextWidget(widget);
        lowDepthColourInfoText->setObjectName(QStringLiteral("lowDepthColourInfoText"));
        sizePolicy.setHeightForWidth(lowDepthColourInfoText->sizePolicy().hasHeightForWidth());
        lowDepthColourInfoText->setSizePolicy(sizePolicy);
        lowDepthColourInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_2->addWidget(lowDepthColourInfoText, 0, 1, 1, 1);

        horizontalSpacer_23 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_23, 0, 0, 1, 1);

        label_15 = new QLabel(widget);
        label_15->setObjectName(QStringLiteral("label_15"));
        sizePolicy1.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_15, 0, 2, 1, 1);

        lowDepthColourButton = new ColourButton(widget);
        lowDepthColourButton->setObjectName(QStringLiteral("lowDepthColourButton"));
        lowDepthColourButton->setMinimumSize(QSize(100, 0));

        gridLayout_2->addWidget(lowDepthColourButton, 0, 3, 1, 1);

        horizontalSpacer_24 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_24, 0, 4, 1, 1);

        highDepthColourInfoText = new InfoTextWidget(widget);
        highDepthColourInfoText->setObjectName(QStringLiteral("highDepthColourInfoText"));
        sizePolicy.setHeightForWidth(highDepthColourInfoText->sizePolicy().hasHeightForWidth());
        highDepthColourInfoText->setSizePolicy(sizePolicy);
        highDepthColourInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_2->addWidget(highDepthColourInfoText, 1, 1, 1, 1);

        label_16 = new QLabel(widget);
        label_16->setObjectName(QStringLiteral("label_16"));
        sizePolicy1.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_16, 1, 2, 1, 1);

        highDepthColourButton = new ColourButton(widget);
        highDepthColourButton->setObjectName(QStringLiteral("highDepthColourButton"));

        gridLayout_2->addWidget(highDepthColourButton, 1, 3, 1, 1);


        verticalLayout_3->addWidget(widget);

        widget_20 = new QWidget(scrollAreaWidgetContents);
        widget_20->setObjectName(QStringLiteral("widget_20"));
        horizontalLayout_4 = new QHBoxLayout(widget_20);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_15 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_15);

        depthAutoManualWidget = new QWidget(widget_20);
        depthAutoManualWidget->setObjectName(QStringLiteral("depthAutoManualWidget"));
        gridLayout_4 = new QGridLayout(depthAutoManualWidget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        depthAutoWidget = new QWidget(depthAutoManualWidget);
        depthAutoWidget->setObjectName(QStringLiteral("depthAutoWidget"));
        gridLayout_7 = new QGridLayout(depthAutoWidget);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setVerticalSpacing(0);
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        highDepthAutoValueLabel2 = new QLabel(depthAutoWidget);
        highDepthAutoValueLabel2->setObjectName(QStringLiteral("highDepthAutoValueLabel2"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(highDepthAutoValueLabel2->sizePolicy().hasHeightForWidth());
        highDepthAutoValueLabel2->setSizePolicy(sizePolicy5);
        highDepthAutoValueLabel2->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(highDepthAutoValueLabel2, 1, 1, 1, 1);

        lowDepthAutoValueLabel2 = new QLabel(depthAutoWidget);
        lowDepthAutoValueLabel2->setObjectName(QStringLiteral("lowDepthAutoValueLabel2"));
        sizePolicy5.setHeightForWidth(lowDepthAutoValueLabel2->sizePolicy().hasHeightForWidth());
        lowDepthAutoValueLabel2->setSizePolicy(sizePolicy5);
        lowDepthAutoValueLabel2->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lowDepthAutoValueLabel2, 0, 1, 1, 1);

        highDepthAutoValueLabel1 = new QLabel(depthAutoWidget);
        highDepthAutoValueLabel1->setObjectName(QStringLiteral("highDepthAutoValueLabel1"));
        sizePolicy1.setHeightForWidth(highDepthAutoValueLabel1->sizePolicy().hasHeightForWidth());
        highDepthAutoValueLabel1->setSizePolicy(sizePolicy1);

        gridLayout_7->addWidget(highDepthAutoValueLabel1, 1, 0, 1, 1);

        lowDepthAutoValueLabel1 = new QLabel(depthAutoWidget);
        lowDepthAutoValueLabel1->setObjectName(QStringLiteral("lowDepthAutoValueLabel1"));
        sizePolicy1.setHeightForWidth(lowDepthAutoValueLabel1->sizePolicy().hasHeightForWidth());
        lowDepthAutoValueLabel1->setSizePolicy(sizePolicy1);

        gridLayout_7->addWidget(lowDepthAutoValueLabel1, 0, 0, 1, 1);


        gridLayout_4->addWidget(depthAutoWidget, 0, 2, 1, 1);

        depthManualWidget = new QWidget(depthAutoManualWidget);
        depthManualWidget->setObjectName(QStringLiteral("depthManualWidget"));
        gridLayout_8 = new QGridLayout(depthManualWidget);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setVerticalSpacing(0);
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        lowDepthValueSpinBox = new QDoubleSpinBox(depthManualWidget);
        lowDepthValueSpinBox->setObjectName(QStringLiteral("lowDepthValueSpinBox"));
        lowDepthValueSpinBox->setAlignment(Qt::AlignCenter);
        lowDepthValueSpinBox->setMaximum(1e+6);
        lowDepthValueSpinBox->setSingleStep(1);

        gridLayout_8->addWidget(lowDepthValueSpinBox, 0, 1, 1, 1);

        highDepthValueSpinBox = new QDoubleSpinBox(depthManualWidget);
        highDepthValueSpinBox->setObjectName(QStringLiteral("highDepthValueSpinBox"));
        highDepthValueSpinBox->setAlignment(Qt::AlignCenter);
        highDepthValueSpinBox->setMaximum(1e+6);
        highDepthValueSpinBox->setSingleStep(1);

        gridLayout_8->addWidget(highDepthValueSpinBox, 1, 1, 1, 1);

        highDepthValueLabel = new QLabel(depthManualWidget);
        highDepthValueLabel->setObjectName(QStringLiteral("highDepthValueLabel"));

        gridLayout_8->addWidget(highDepthValueLabel, 1, 0, 1, 1);

        lowDepthValueLabel = new QLabel(depthManualWidget);
        lowDepthValueLabel->setObjectName(QStringLiteral("lowDepthValueLabel"));

        gridLayout_8->addWidget(lowDepthValueLabel, 0, 0, 1, 1);


        gridLayout_4->addWidget(depthManualWidget, 2, 2, 1, 1);

        depthValueAutoRadioButton = new QRadioButton(depthAutoManualWidget);
        depthValueAutoRadioButton->setObjectName(QStringLiteral("depthValueAutoRadioButton"));
        depthValueAutoRadioButton->setChecked(true);

        gridLayout_4->addWidget(depthValueAutoRadioButton, 0, 1, 1, 1);

        depthValueManualRadioButton = new QRadioButton(depthAutoManualWidget);
        depthValueManualRadioButton->setObjectName(QStringLiteral("depthValueManualRadioButton"));

        gridLayout_4->addWidget(depthValueManualRadioButton, 2, 1, 1, 1);

        depthAutoValuesInfoText = new InfoTextWidget(depthAutoManualWidget);
        depthAutoValuesInfoText->setObjectName(QStringLiteral("depthAutoValuesInfoText"));
        sizePolicy.setHeightForWidth(depthAutoValuesInfoText->sizePolicy().hasHeightForWidth());
        depthAutoValuesInfoText->setSizePolicy(sizePolicy);
        depthAutoValuesInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_4->addWidget(depthAutoValuesInfoText, 0, 0, 1, 1);

        depthManualValuesInfoText = new InfoTextWidget(depthAutoManualWidget);
        depthManualValuesInfoText->setObjectName(QStringLiteral("depthManualValuesInfoText"));
        sizePolicy.setHeightForWidth(depthManualValuesInfoText->sizePolicy().hasHeightForWidth());
        depthManualValuesInfoText->setSizePolicy(sizePolicy);
        depthManualValuesInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_4->addWidget(depthManualValuesInfoText, 2, 0, 1, 1);


        horizontalLayout_4->addWidget(depthAutoManualWidget);

        horizontalSpacer_16 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_16);


        verticalLayout_3->addWidget(widget_20);

        verticalSpacer_6 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_6);

        blastColourSchemeHeadingLabel = new QLabel(scrollAreaWidgetContents);
        blastColourSchemeHeadingLabel->setObjectName(QStringLiteral("blastColourSchemeHeadingLabel"));
        blastColourSchemeHeadingLabel->setFont(font);

        verticalLayout_3->addWidget(blastColourSchemeHeadingLabel);

        line_10 = new QFrame(scrollAreaWidgetContents);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_10);

        blastColourSchemeDescriptionLabel = new QLabel(scrollAreaWidgetContents);
        blastColourSchemeDescriptionLabel->setObjectName(QStringLiteral("blastColourSchemeDescriptionLabel"));
        blastColourSchemeDescriptionLabel->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        blastColourSchemeDescriptionLabel->setWordWrap(true);

        verticalLayout_3->addWidget(blastColourSchemeDescriptionLabel);

        widget_21 = new QWidget(scrollAreaWidgetContents);
        widget_21->setObjectName(QStringLiteral("widget_21"));
        gridLayout_14 = new QGridLayout(widget_21);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        noBlastHitsColourInfoText = new InfoTextWidget(widget_21);
        noBlastHitsColourInfoText->setObjectName(QStringLiteral("noBlastHitsColourInfoText"));
        sizePolicy.setHeightForWidth(noBlastHitsColourInfoText->sizePolicy().hasHeightForWidth());
        noBlastHitsColourInfoText->setSizePolicy(sizePolicy);
        noBlastHitsColourInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_14->addWidget(noBlastHitsColourInfoText, 0, 1, 1, 1);

        noBlastHitsColourButton = new ColourButton(widget_21);
        noBlastHitsColourButton->setObjectName(QStringLiteral("noBlastHitsColourButton"));
        noBlastHitsColourButton->setMinimumSize(QSize(100, 0));

        gridLayout_14->addWidget(noBlastHitsColourButton, 0, 3, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_17, 0, 4, 1, 1);

        label_32 = new QLabel(widget_21);
        label_32->setObjectName(QStringLiteral("label_32"));
        sizePolicy1.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy1);

        gridLayout_14->addWidget(label_32, 0, 2, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_18, 0, 0, 1, 1);


        verticalLayout_3->addWidget(widget_21);

        verticalSpacer_7 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_7);

        contiguityColourSchemeHeadingLabel = new QLabel(scrollAreaWidgetContents);
        contiguityColourSchemeHeadingLabel->setObjectName(QStringLiteral("contiguityColourSchemeHeadingLabel"));
        contiguityColourSchemeHeadingLabel->setFont(font);

        verticalLayout_3->addWidget(contiguityColourSchemeHeadingLabel);

        line_9 = new QFrame(scrollAreaWidgetContents);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_9);

        contiguityColourSchemeDescriptionLabel = new QLabel(scrollAreaWidgetContents);
        contiguityColourSchemeDescriptionLabel->setObjectName(QStringLiteral("contiguityColourSchemeDescriptionLabel"));
        contiguityColourSchemeDescriptionLabel->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        contiguityColourSchemeDescriptionLabel->setWordWrap(true);

        verticalLayout_3->addWidget(contiguityColourSchemeDescriptionLabel);

        widget_22 = new QWidget(scrollAreaWidgetContents);
        widget_22->setObjectName(QStringLiteral("widget_22"));
        gridLayout_15 = new QGridLayout(widget_22);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        gridLayout_15->setContentsMargins(0, 0, 0, 0);
        contiguityStartingColourInfoText = new InfoTextWidget(widget_22);
        contiguityStartingColourInfoText->setObjectName(QStringLiteral("contiguityStartingColourInfoText"));
        sizePolicy.setHeightForWidth(contiguityStartingColourInfoText->sizePolicy().hasHeightForWidth());
        contiguityStartingColourInfoText->setSizePolicy(sizePolicy);
        contiguityStartingColourInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_15->addWidget(contiguityStartingColourInfoText, 5, 1, 1, 1);

        contiguousEitherStrandColourInfoText = new InfoTextWidget(widget_22);
        contiguousEitherStrandColourInfoText->setObjectName(QStringLiteral("contiguousEitherStrandColourInfoText"));
        sizePolicy.setHeightForWidth(contiguousEitherStrandColourInfoText->sizePolicy().hasHeightForWidth());
        contiguousEitherStrandColourInfoText->setSizePolicy(sizePolicy);
        contiguousEitherStrandColourInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_15->addWidget(contiguousEitherStrandColourInfoText, 2, 1, 1, 1);

        notContiguousColourInfoText = new InfoTextWidget(widget_22);
        notContiguousColourInfoText->setObjectName(QStringLiteral("notContiguousColourInfoText"));
        sizePolicy.setHeightForWidth(notContiguousColourInfoText->sizePolicy().hasHeightForWidth());
        notContiguousColourInfoText->setSizePolicy(sizePolicy);
        notContiguousColourInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_15->addWidget(notContiguousColourInfoText, 4, 1, 1, 1);

        maybeContiguousColourInfoText = new InfoTextWidget(widget_22);
        maybeContiguousColourInfoText->setObjectName(QStringLiteral("maybeContiguousColourInfoText"));
        sizePolicy.setHeightForWidth(maybeContiguousColourInfoText->sizePolicy().hasHeightForWidth());
        maybeContiguousColourInfoText->setSizePolicy(sizePolicy);
        maybeContiguousColourInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_15->addWidget(maybeContiguousColourInfoText, 3, 1, 1, 1);

        contiguousStrandSpecificColourButton = new ColourButton(widget_22);
        contiguousStrandSpecificColourButton->setObjectName(QStringLiteral("contiguousStrandSpecificColourButton"));
        contiguousStrandSpecificColourButton->setMinimumSize(QSize(100, 0));

        gridLayout_15->addWidget(contiguousStrandSpecificColourButton, 1, 3, 1, 1);

        label_29 = new QLabel(widget_22);
        label_29->setObjectName(QStringLiteral("label_29"));
        sizePolicy1.setHeightForWidth(label_29->sizePolicy().hasHeightForWidth());
        label_29->setSizePolicy(sizePolicy1);

        gridLayout_15->addWidget(label_29, 2, 2, 1, 1);

        horizontalSpacer_19 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer_19, 0, 0, 1, 1);

        contiguitySearchDepthInfoText = new InfoTextWidget(widget_22);
        contiguitySearchDepthInfoText->setObjectName(QStringLiteral("contiguitySearchDepthInfoText"));
        sizePolicy.setHeightForWidth(contiguitySearchDepthInfoText->sizePolicy().hasHeightForWidth());
        contiguitySearchDepthInfoText->setSizePolicy(sizePolicy);
        contiguitySearchDepthInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_15->addWidget(contiguitySearchDepthInfoText, 0, 1, 1, 1);

        contiguousStrandSpecificColourInfoText = new InfoTextWidget(widget_22);
        contiguousStrandSpecificColourInfoText->setObjectName(QStringLiteral("contiguousStrandSpecificColourInfoText"));
        sizePolicy.setHeightForWidth(contiguousStrandSpecificColourInfoText->sizePolicy().hasHeightForWidth());
        contiguousStrandSpecificColourInfoText->setSizePolicy(sizePolicy);
        contiguousStrandSpecificColourInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_15->addWidget(contiguousStrandSpecificColourInfoText, 1, 1, 1, 1);

        contiguityStartingColourButton = new ColourButton(widget_22);
        contiguityStartingColourButton->setObjectName(QStringLiteral("contiguityStartingColourButton"));

        gridLayout_15->addWidget(contiguityStartingColourButton, 5, 3, 1, 1);

        label_21 = new QLabel(widget_22);
        label_21->setObjectName(QStringLiteral("label_21"));
        sizePolicy1.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy1);

        gridLayout_15->addWidget(label_21, 4, 2, 1, 1);

        label_22 = new QLabel(widget_22);
        label_22->setObjectName(QStringLiteral("label_22"));
        sizePolicy1.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy1);

        gridLayout_15->addWidget(label_22, 1, 2, 1, 1);

        label_30 = new QLabel(widget_22);
        label_30->setObjectName(QStringLiteral("label_30"));
        sizePolicy1.setHeightForWidth(label_30->sizePolicy().hasHeightForWidth());
        label_30->setSizePolicy(sizePolicy1);

        gridLayout_15->addWidget(label_30, 0, 2, 1, 1);

        maybeContiguousColourButton = new ColourButton(widget_22);
        maybeContiguousColourButton->setObjectName(QStringLiteral("maybeContiguousColourButton"));

        gridLayout_15->addWidget(maybeContiguousColourButton, 3, 3, 1, 1);

        label_19 = new QLabel(widget_22);
        label_19->setObjectName(QStringLiteral("label_19"));
        sizePolicy1.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy1);

        gridLayout_15->addWidget(label_19, 3, 2, 1, 1);

        notContiguousColourButton = new ColourButton(widget_22);
        notContiguousColourButton->setObjectName(QStringLiteral("notContiguousColourButton"));

        gridLayout_15->addWidget(notContiguousColourButton, 4, 3, 1, 1);

        label_20 = new QLabel(widget_22);
        label_20->setObjectName(QStringLiteral("label_20"));
        sizePolicy1.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy1);

        gridLayout_15->addWidget(label_20, 5, 2, 1, 1);

        contiguousEitherStrandColourButton = new ColourButton(widget_22);
        contiguousEitherStrandColourButton->setObjectName(QStringLiteral("contiguousEitherStrandColourButton"));

        gridLayout_15->addWidget(contiguousEitherStrandColourButton, 2, 3, 1, 1);

        contiguitySearchDepthSpinBox = new QSpinBox(widget_22);
        contiguitySearchDepthSpinBox->setObjectName(QStringLiteral("contiguitySearchDepthSpinBox"));
        contiguitySearchDepthSpinBox->setAlignment(Qt::AlignCenter);
        contiguitySearchDepthSpinBox->setMinimum(1);
        contiguitySearchDepthSpinBox->setMaximum(50);

        gridLayout_15->addWidget(contiguitySearchDepthSpinBox, 0, 3, 1, 1);

        horizontalSpacer_20 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer_20, 0, 4, 1, 1);


        verticalLayout_3->addWidget(widget_22);

        verticalSpacer_11 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_11);

        blastQueryPathsHeadingLabel = new QLabel(scrollAreaWidgetContents);
        blastQueryPathsHeadingLabel->setObjectName(QStringLiteral("blastQueryPathsHeadingLabel"));
        blastQueryPathsHeadingLabel->setFont(font);

        verticalLayout_3->addWidget(blastQueryPathsHeadingLabel);

        line_11 = new QFrame(scrollAreaWidgetContents);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_11);

        blastQueryPathsDescriptionLabel = new QLabel(scrollAreaWidgetContents);
        blastQueryPathsDescriptionLabel->setObjectName(QStringLiteral("blastQueryPathsDescriptionLabel"));
        blastQueryPathsDescriptionLabel->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        blastQueryPathsDescriptionLabel->setWordWrap(true);

        verticalLayout_3->addWidget(blastQueryPathsDescriptionLabel);

        widget_23 = new QWidget(scrollAreaWidgetContents);
        widget_23->setObjectName(QStringLiteral("widget_23"));
        gridLayout_16 = new QGridLayout(widget_23);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        minQueryCoveredByPathSpinBox = new QDoubleSpinBox(widget_23);
        minQueryCoveredByPathSpinBox->setObjectName(QStringLiteral("minQueryCoveredByPathSpinBox"));
        minQueryCoveredByPathSpinBox->setAlignment(Qt::AlignCenter);
        minQueryCoveredByPathSpinBox->setDecimals(1);
        minQueryCoveredByPathSpinBox->setMinimum(30);

        gridLayout_16->addWidget(minQueryCoveredByPathSpinBox, 2, 3, 1, 2);

        minQueryCoveredByHitsInfoText = new InfoTextWidget(widget_23);
        minQueryCoveredByHitsInfoText->setObjectName(QStringLiteral("minQueryCoveredByHitsInfoText"));
        sizePolicy.setHeightForWidth(minQueryCoveredByHitsInfoText->sizePolicy().hasHeightForWidth());
        minQueryCoveredByHitsInfoText->setSizePolicy(sizePolicy);
        minQueryCoveredByHitsInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_16->addWidget(minQueryCoveredByHitsInfoText, 3, 1, 1, 1);

        minQueryCoveredByHitsSpinBox = new QDoubleSpinBox(widget_23);
        minQueryCoveredByHitsSpinBox->setObjectName(QStringLiteral("minQueryCoveredByHitsSpinBox"));
        minQueryCoveredByHitsSpinBox->setAlignment(Qt::AlignCenter);
        minQueryCoveredByHitsSpinBox->setDecimals(1);
        minQueryCoveredByHitsSpinBox->setMinimum(30);
        minQueryCoveredByHitsSpinBox->setMaximum(100);

        gridLayout_16->addWidget(minQueryCoveredByHitsSpinBox, 3, 3, 1, 2);

        maxPathNodesSpinBox = new QSpinBox(widget_23);
        maxPathNodesSpinBox->setObjectName(QStringLiteral("maxPathNodesSpinBox"));
        maxPathNodesSpinBox->setAlignment(Qt::AlignCenter);
        maxPathNodesSpinBox->setMinimum(1);
        maxPathNodesSpinBox->setMaximum(50);

        gridLayout_16->addWidget(maxPathNodesSpinBox, 1, 3, 1, 2);

        minMeanHitIdentityCheckBox = new QCheckBox(widget_23);
        minMeanHitIdentityCheckBox->setObjectName(QStringLiteral("minMeanHitIdentityCheckBox"));

        gridLayout_16->addWidget(minMeanHitIdentityCheckBox, 4, 2, 1, 1);

        minQueryCoveredByHitsCheckBox = new QCheckBox(widget_23);
        minQueryCoveredByHitsCheckBox->setObjectName(QStringLiteral("minQueryCoveredByHitsCheckBox"));

        gridLayout_16->addWidget(minQueryCoveredByHitsCheckBox, 3, 2, 1, 1);

        maxLengthBaseDiscrepancyCheckBox = new QCheckBox(widget_23);
        maxLengthBaseDiscrepancyCheckBox->setObjectName(QStringLiteral("maxLengthBaseDiscrepancyCheckBox"));

        gridLayout_16->addWidget(maxLengthBaseDiscrepancyCheckBox, 10, 2, 1, 1);

        maxEValueProductCheckBox = new QCheckBox(widget_23);
        maxEValueProductCheckBox->setObjectName(QStringLiteral("maxEValueProductCheckBox"));

        gridLayout_16->addWidget(maxEValueProductCheckBox, 6, 2, 1, 1);

        maxLengthPercentageCheckBox = new QCheckBox(widget_23);
        maxLengthPercentageCheckBox->setObjectName(QStringLiteral("maxLengthPercentageCheckBox"));

        gridLayout_16->addWidget(maxLengthPercentageCheckBox, 8, 2, 1, 1);

        minQueryCoveredByPathLabel = new QLabel(widget_23);
        minQueryCoveredByPathLabel->setObjectName(QStringLiteral("minQueryCoveredByPathLabel"));

        gridLayout_16->addWidget(minQueryCoveredByPathLabel, 2, 2, 1, 1);

        minLengthPercentageCheckBox = new QCheckBox(widget_23);
        minLengthPercentageCheckBox->setObjectName(QStringLiteral("minLengthPercentageCheckBox"));

        gridLayout_16->addWidget(minLengthPercentageCheckBox, 7, 2, 1, 1);

        minLengthBaseDiscrepancyCheckBox = new QCheckBox(widget_23);
        minLengthBaseDiscrepancyCheckBox->setObjectName(QStringLiteral("minLengthBaseDiscrepancyCheckBox"));

        gridLayout_16->addWidget(minLengthBaseDiscrepancyCheckBox, 9, 2, 1, 1);

        minLengthBaseDiscrepancySpinBox = new QSpinBox(widget_23);
        minLengthBaseDiscrepancySpinBox->setObjectName(QStringLiteral("minLengthBaseDiscrepancySpinBox"));
        minLengthBaseDiscrepancySpinBox->setAlignment(Qt::AlignCenter);
        minLengthBaseDiscrepancySpinBox->setMinimum(-1000000);
        minLengthBaseDiscrepancySpinBox->setMaximum(1000000);

        gridLayout_16->addWidget(minLengthBaseDiscrepancySpinBox, 9, 3, 1, 2);

        minLengthPercentageSpinBox = new QDoubleSpinBox(widget_23);
        minLengthPercentageSpinBox->setObjectName(QStringLiteral("minLengthPercentageSpinBox"));
        minLengthPercentageSpinBox->setAlignment(Qt::AlignCenter);
        minLengthPercentageSpinBox->setDecimals(1);
        minLengthPercentageSpinBox->setMinimum(0);
        minLengthPercentageSpinBox->setMaximum(1e+6);
        minLengthPercentageSpinBox->setValue(95);

        gridLayout_16->addWidget(minLengthPercentageSpinBox, 7, 3, 1, 2);

        maxLengthBaseDiscrepancySpinBox = new QSpinBox(widget_23);
        maxLengthBaseDiscrepancySpinBox->setObjectName(QStringLiteral("maxLengthBaseDiscrepancySpinBox"));
        maxLengthBaseDiscrepancySpinBox->setAlignment(Qt::AlignCenter);
        maxLengthBaseDiscrepancySpinBox->setMinimum(-1000000);
        maxLengthBaseDiscrepancySpinBox->setMaximum(1000000);

        gridLayout_16->addWidget(maxLengthBaseDiscrepancySpinBox, 10, 3, 1, 2);

        maxLengthPercentageSpinBox = new QDoubleSpinBox(widget_23);
        maxLengthPercentageSpinBox->setObjectName(QStringLiteral("maxLengthPercentageSpinBox"));
        maxLengthPercentageSpinBox->setAlignment(Qt::AlignCenter);
        maxLengthPercentageSpinBox->setDecimals(1);
        maxLengthPercentageSpinBox->setMaximum(1e+6);
        maxLengthPercentageSpinBox->setValue(105);

        gridLayout_16->addWidget(maxLengthPercentageSpinBox, 8, 3, 1, 2);

        minLengthPercentageInfoText = new InfoTextWidget(widget_23);
        minLengthPercentageInfoText->setObjectName(QStringLiteral("minLengthPercentageInfoText"));
        sizePolicy.setHeightForWidth(minLengthPercentageInfoText->sizePolicy().hasHeightForWidth());
        minLengthPercentageInfoText->setSizePolicy(sizePolicy);
        minLengthPercentageInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_16->addWidget(minLengthPercentageInfoText, 7, 1, 1, 1);

        maxLengthPercentageInfoText = new InfoTextWidget(widget_23);
        maxLengthPercentageInfoText->setObjectName(QStringLiteral("maxLengthPercentageInfoText"));
        sizePolicy.setHeightForWidth(maxLengthPercentageInfoText->sizePolicy().hasHeightForWidth());
        maxLengthPercentageInfoText->setSizePolicy(sizePolicy);
        maxLengthPercentageInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_16->addWidget(maxLengthPercentageInfoText, 8, 1, 1, 1);

        minLengthBaseDiscrepancyInfoText = new InfoTextWidget(widget_23);
        minLengthBaseDiscrepancyInfoText->setObjectName(QStringLiteral("minLengthBaseDiscrepancyInfoText"));
        sizePolicy.setHeightForWidth(minLengthBaseDiscrepancyInfoText->sizePolicy().hasHeightForWidth());
        minLengthBaseDiscrepancyInfoText->setSizePolicy(sizePolicy);
        minLengthBaseDiscrepancyInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_16->addWidget(minLengthBaseDiscrepancyInfoText, 9, 1, 1, 1);

        maxLengthBaseDiscrepancyInfoText = new InfoTextWidget(widget_23);
        maxLengthBaseDiscrepancyInfoText->setObjectName(QStringLiteral("maxLengthBaseDiscrepancyInfoText"));
        sizePolicy.setHeightForWidth(maxLengthBaseDiscrepancyInfoText->sizePolicy().hasHeightForWidth());
        maxLengthBaseDiscrepancyInfoText->setSizePolicy(sizePolicy);
        maxLengthBaseDiscrepancyInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_16->addWidget(maxLengthBaseDiscrepancyInfoText, 10, 1, 1, 1);

        minMeanHitIdentityInfoText = new InfoTextWidget(widget_23);
        minMeanHitIdentityInfoText->setObjectName(QStringLiteral("minMeanHitIdentityInfoText"));
        sizePolicy.setHeightForWidth(minMeanHitIdentityInfoText->sizePolicy().hasHeightForWidth());
        minMeanHitIdentityInfoText->setSizePolicy(sizePolicy);
        minMeanHitIdentityInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_16->addWidget(minMeanHitIdentityInfoText, 4, 1, 1, 1);

        maxPathNodesInfoText = new InfoTextWidget(widget_23);
        maxPathNodesInfoText->setObjectName(QStringLiteral("maxPathNodesInfoText"));
        sizePolicy.setHeightForWidth(maxPathNodesInfoText->sizePolicy().hasHeightForWidth());
        maxPathNodesInfoText->setSizePolicy(sizePolicy);
        maxPathNodesInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_16->addWidget(maxPathNodesInfoText, 1, 1, 1, 1);

        maxEvalueProductInfoText = new InfoTextWidget(widget_23);
        maxEvalueProductInfoText->setObjectName(QStringLiteral("maxEvalueProductInfoText"));
        sizePolicy.setHeightForWidth(maxEvalueProductInfoText->sizePolicy().hasHeightForWidth());
        maxEvalueProductInfoText->setSizePolicy(sizePolicy);
        maxEvalueProductInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_16->addWidget(maxEvalueProductInfoText, 6, 1, 1, 1);

        minQueryCoveredByPathInfoText = new InfoTextWidget(widget_23);
        minQueryCoveredByPathInfoText->setObjectName(QStringLiteral("minQueryCoveredByPathInfoText"));
        sizePolicy.setHeightForWidth(minQueryCoveredByPathInfoText->sizePolicy().hasHeightForWidth());
        minQueryCoveredByPathInfoText->setSizePolicy(sizePolicy);
        minQueryCoveredByPathInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_16->addWidget(minQueryCoveredByPathInfoText, 2, 1, 1, 1);

        label_35 = new QLabel(widget_23);
        label_35->setObjectName(QStringLiteral("label_35"));
        sizePolicy1.setHeightForWidth(label_35->sizePolicy().hasHeightForWidth());
        label_35->setSizePolicy(sizePolicy1);

        gridLayout_16->addWidget(label_35, 1, 2, 1, 1);

        horizontalSpacer_22 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_22, 1, 5, 1, 1);

        maxEValueExponentSpinBox = new QSpinBox(widget_23);
        maxEValueExponentSpinBox->setObjectName(QStringLiteral("maxEValueExponentSpinBox"));
        maxEValueExponentSpinBox->setAlignment(Qt::AlignCenter);
        maxEValueExponentSpinBox->setMinimum(-999);
        maxEValueExponentSpinBox->setMaximum(1);
        maxEValueExponentSpinBox->setValue(-10);

        gridLayout_16->addWidget(maxEValueExponentSpinBox, 6, 4, 1, 1);

        horizontalSpacer_21 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_21, 1, 0, 1, 1);

        maxEValueCoefficientSpinBox = new QDoubleSpinBox(widget_23);
        maxEValueCoefficientSpinBox->setObjectName(QStringLiteral("maxEValueCoefficientSpinBox"));
        maxEValueCoefficientSpinBox->setDecimals(1);
        maxEValueCoefficientSpinBox->setMaximum(9.9);

        gridLayout_16->addWidget(maxEValueCoefficientSpinBox, 6, 3, 1, 1);

        minMeanHitIdentitySpinBox = new QDoubleSpinBox(widget_23);
        minMeanHitIdentitySpinBox->setObjectName(QStringLiteral("minMeanHitIdentitySpinBox"));
        minMeanHitIdentitySpinBox->setAlignment(Qt::AlignCenter);
        minMeanHitIdentitySpinBox->setDecimals(1);
        minMeanHitIdentitySpinBox->setMaximum(100);

        gridLayout_16->addWidget(minMeanHitIdentitySpinBox, 4, 3, 1, 2);

        label_41 = new QLabel(widget_23);
        label_41->setObjectName(QStringLiteral("label_41"));
        sizePolicy1.setHeightForWidth(label_41->sizePolicy().hasHeightForWidth());
        label_41->setSizePolicy(sizePolicy1);

        gridLayout_16->addWidget(label_41, 0, 2, 1, 1);

        maxHitsForQueryPathSpinBox = new QSpinBox(widget_23);
        maxHitsForQueryPathSpinBox->setObjectName(QStringLiteral("maxHitsForQueryPathSpinBox"));
        maxHitsForQueryPathSpinBox->setAlignment(Qt::AlignCenter);
        maxHitsForQueryPathSpinBox->setMinimum(1);
        maxHitsForQueryPathSpinBox->setMaximum(50);

        gridLayout_16->addWidget(maxHitsForQueryPathSpinBox, 0, 3, 1, 2);

        maxHitsForQueryPathInfoText = new InfoTextWidget(widget_23);
        maxHitsForQueryPathInfoText->setObjectName(QStringLiteral("maxHitsForQueryPathInfoText"));
        sizePolicy.setHeightForWidth(maxHitsForQueryPathInfoText->sizePolicy().hasHeightForWidth());
        maxHitsForQueryPathInfoText->setSizePolicy(sizePolicy);
        maxHitsForQueryPathInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_16->addWidget(maxHitsForQueryPathInfoText, 0, 1, 1, 1);


        verticalLayout_3->addWidget(widget_23);

        verticalSpacer_12 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_12);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        line = new QFrame(SettingsDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        widget_2 = new QWidget(SettingsDialog);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        restoreDefaultsButton = new QPushButton(widget_2);
        restoreDefaultsButton->setObjectName(QStringLiteral("restoreDefaultsButton"));

        horizontalLayout->addWidget(restoreDefaultsButton);

        buttonBox = new QDialogButtonBox(widget_2);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addWidget(widget_2);

        QWidget::setTabOrder(scrollArea, antialiasingOnRadioButton);
        QWidget::setTabOrder(antialiasingOnRadioButton, antialiasingOffRadioButton);
        QWidget::setTabOrder(antialiasingOffRadioButton, positionVisibleRadioButton);
        QWidget::setTabOrder(positionVisibleRadioButton, positionCentreRadioButton);
        QWidget::setTabOrder(positionCentreRadioButton, depthValueAutoRadioButton);
        QWidget::setTabOrder(depthValueAutoRadioButton, restoreDefaultsButton);

        retranslateUi(SettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Settings", nullptr));
        graphSizeHeadingLabel->setText(QApplication::translate("SettingsDialog", "Graph size", nullptr));
        graphLayoutDescriptionLabel_2->setText(QApplication::translate("SettingsDialog", "<html><head/><body><p>These settings control the length and width of nodes and edges in the graph. Note that the node width control is in the main window, not here in the settings.  It is necessary to redraw the graph to see the effect of changing some of these settings.</p></body></html>", nullptr));
        label_12->setText(QApplication::translate("SettingsDialog", "Node length\n"
"per megabase:", nullptr));
        nodeLengthPerMegabaseAutoRadioButton->setText(QApplication::translate("SettingsDialog", "Auto", nullptr));
        nodeLengthPerMegabaseManualRadioButton->setText(QApplication::translate("SettingsDialog", "Manual", nullptr));
        nodeLengthPerMegabaseAutoLabel->setText(QApplication::translate("SettingsDialog", "100", nullptr));
        label_25->setText(QApplication::translate("SettingsDialog", "Minimum node length:", nullptr));
        label_33->setText(QApplication::translate("SettingsDialog", "Double mode separation:", nullptr));
        label_31->setText(QApplication::translate("SettingsDialog", "Edge length:", nullptr));
        label_5->setText(QApplication::translate("SettingsDialog", "Edge width:", nullptr));
        graphLayoutQualityHeadingLabel->setText(QApplication::translate("SettingsDialog", "Graph layout", nullptr));
        graphLayoutDescriptionLabel->setText(QApplication::translate("SettingsDialog", "These settings control how the graph nodes are positioned on the screen. It is necessary to redraw the graph to see the effect of changing these settings.", nullptr));
        label_8->setText(QApplication::translate("SettingsDialog", "Linear graph layout:", nullptr));
        linearLayoutOnRadioButton->setText(QApplication::translate("SettingsDialog", "On", nullptr));
        linearLayoutOffRadioButton->setText(QApplication::translate("SettingsDialog", "Off", nullptr));
        label_9->setText(QApplication::translate("SettingsDialog", "Node segment length:", nullptr));
        label_3->setText(QApplication::translate("SettingsDialog", "Graph layout iterations:", nullptr));
        label_10->setText(QApplication::translate("SettingsDialog", "Component separation:", nullptr));
        graphAppearanceHeadingLabel->setText(QApplication::translate("SettingsDialog", "Graph appearance", nullptr));
        graphAppearanceDescriptionLabel->setText(QApplication::translate("SettingsDialog", "These settings control other cosmetic details of the nodes and edges in the graph.", nullptr));
        label_6->setText(QApplication::translate("SettingsDialog", "Outline thickness:", nullptr));
        label_28->setText(QApplication::translate("SettingsDialog", "Edge colour:", nullptr));
        outlineColourButton->setText(QString());
        label_18->setText(QApplication::translate("SettingsDialog", "Selection colour:", nullptr));
        edgeColourButton->setText(QString());
        label_27->setText(QApplication::translate("SettingsDialog", "Outline colour:", nullptr));
        selectionColourButton->setText(QString());
        singleNodeArrowHeadsOnRadioButton->setText(QApplication::translate("SettingsDialog", "On", nullptr));
        singleNodeArrowHeadsOffRadioButton->setText(QApplication::translate("SettingsDialog", "Off", nullptr));
        antialiasingOnRadioButton->setText(QApplication::translate("SettingsDialog", "On", nullptr));
        antialiasingOffRadioButton->setText(QApplication::translate("SettingsDialog", "Off", nullptr));
        label_11->setText(QApplication::translate("SettingsDialog", "Antialiasing:", nullptr));
        label_23->setText(QApplication::translate("SettingsDialog", "Arrowheads in\n"
"single node style:", nullptr));
        textAppearanceHeadingLabel->setText(QApplication::translate("SettingsDialog", "Text appearance", nullptr));
        textAppearanceDescriptionLabel->setText(QApplication::translate("SettingsDialog", "These settings control the appearance of text labels that can be displayed on the graph. The effect of these settings is only seen when one of the node label types is selected in the main window.", nullptr));
        label_26->setText(QApplication::translate("SettingsDialog", "Text colour:", nullptr));
        label_47->setText(QApplication::translate("SettingsDialog", "Text outline colour:", nullptr));
        label_7->setText(QApplication::translate("SettingsDialog", "Text outline thickness:", nullptr));
        textOutlineColourButton->setText(QString());
        textColourButton->setText(QString());
        label_48->setText(QApplication::translate("SettingsDialog", "Position text:", nullptr));
        positionVisibleRadioButton->setText(QApplication::translate("SettingsDialog", "Over visible regions", nullptr));
        positionCentreRadioButton->setText(QApplication::translate("SettingsDialog", "On node centre", nullptr));
        nodeWidthHeadingLabel->setText(QApplication::translate("SettingsDialog", "Depth and node width", nullptr));
        nodeWidthDescriptionLabel->setText(QApplication::translate("SettingsDialog", "<html><head/><body><p>These settings control how the depth of a node affects its width. The average node width is controlled in the main Bandage window.</p></body></html>", nullptr));
        label_4->setText(QApplication::translate("SettingsDialog", "Depth effect on width:", nullptr));
        depthEffectOnWidthSpinBox->setSuffix(QApplication::translate("SettingsDialog", "%", nullptr));
        label_36->setText(QApplication::translate("SettingsDialog", "Depth effect power:", nullptr));
        label_38->setText(QString());
        label_37->setText(QApplication::translate("SettingsDialog", "Node width", nullptr));
        label_40->setText(QString());
        label_39->setText(QApplication::translate("SettingsDialog", "Depth", nullptr));
        randomColourSchemeHeadingLabel->setText(QApplication::translate("SettingsDialog", "Random colour scheme", nullptr));
        randomColourSchemeDescriptionLabel->setText(QApplication::translate("SettingsDialog", "These settings control the properties of the node colours when the 'Random colours' colour scheme is used.", nullptr));
        label_34->setText(QApplication::translate("SettingsDialog", "Positive node opacity:", nullptr));
        label_44->setText(QApplication::translate("SettingsDialog", "Positive node lightness:", nullptr));
        label_42->setText(QApplication::translate("SettingsDialog", "Positive node saturation:", nullptr));
        label_45->setText(QApplication::translate("SettingsDialog", "Negative node lightness:", nullptr));
        label_43->setText(QApplication::translate("SettingsDialog", "Negative node saturation:", nullptr));
        label_46->setText(QApplication::translate("SettingsDialog", "Negative node opacity:", nullptr));
        uniformColourSchemeHeadingLabel->setText(QApplication::translate("SettingsDialog", "Uniform colour scheme", nullptr));
        uniformColourSchemeDescriptionLabel->setText(QApplication::translate("SettingsDialog", "These settings control the node colours when the 'Uniform colours' colour scheme is used.", nullptr));
        uniformNodeSpecialColourButton->setText(QString());
        label_17->setText(QApplication::translate("SettingsDialog", "Negative nodes:", nullptr));
        uniformNegativeNodeColourButton->setText(QString());
        uniformPositiveNodeColourButton->setText(QString());
        label_13->setText(QApplication::translate("SettingsDialog", "Positive nodes:", nullptr));
        label_14->setText(QApplication::translate("SettingsDialog", "Special nodes:", nullptr));
        depthColourSchemeHeadingLabel->setText(QApplication::translate("SettingsDialog", "Depth colour scheme", nullptr));
        depthColourSchemeDescriptionLabel->setText(QApplication::translate("SettingsDialog", "These settings control the node colours when the 'Colour by depth' colour scheme is used.", nullptr));
        label_15->setText(QApplication::translate("SettingsDialog", "Low depth:", nullptr));
        lowDepthColourButton->setText(QString());
        label_16->setText(QApplication::translate("SettingsDialog", "High depth:", nullptr));
        highDepthColourButton->setText(QString());
        highDepthAutoValueLabel2->setText(QApplication::translate("SettingsDialog", "0.0", nullptr));
        lowDepthAutoValueLabel2->setText(QApplication::translate("SettingsDialog", "0.0", nullptr));
        highDepthAutoValueLabel1->setText(QApplication::translate("SettingsDialog", "High:", nullptr));
        lowDepthAutoValueLabel1->setText(QApplication::translate("SettingsDialog", "Low:", nullptr));
        highDepthValueLabel->setText(QApplication::translate("SettingsDialog", "High:", nullptr));
        lowDepthValueLabel->setText(QApplication::translate("SettingsDialog", "Low:", nullptr));
        depthValueAutoRadioButton->setText(QApplication::translate("SettingsDialog", "Auto", nullptr));
        depthValueManualRadioButton->setText(QApplication::translate("SettingsDialog", "Manual", nullptr));
        blastColourSchemeHeadingLabel->setText(QApplication::translate("SettingsDialog", "BLAST colour scheme", nullptr));
        blastColourSchemeDescriptionLabel->setText(QApplication::translate("SettingsDialog", "These settings control the node colours when either of the 'BLAST hits' colour schemes are used.", nullptr));
        noBlastHitsColourButton->setText(QString());
        label_32->setText(QApplication::translate("SettingsDialog", "No BLAST hits:", nullptr));
        contiguityColourSchemeHeadingLabel->setText(QApplication::translate("SettingsDialog", "Contiguity colour scheme", nullptr));
        contiguityColourSchemeDescriptionLabel->setText(QApplication::translate("SettingsDialog", "These settings control the node colours when the 'Colour by contiguity' colour scheme is used.", nullptr));
        contiguousStrandSpecificColourButton->setText(QString());
        label_29->setText(QApplication::translate("SettingsDialog", "Contiguous (either strand):", nullptr));
        contiguityStartingColourButton->setText(QString());
        label_21->setText(QApplication::translate("SettingsDialog", "Not contiguous:", nullptr));
        label_22->setText(QApplication::translate("SettingsDialog", "Contiguous (strand-specific):", nullptr));
        label_30->setText(QApplication::translate("SettingsDialog", "Search depth:", nullptr));
        maybeContiguousColourButton->setText(QString());
        label_19->setText(QApplication::translate("SettingsDialog", "Possibly contiguous:", nullptr));
        notContiguousColourButton->setText(QString());
        label_20->setText(QApplication::translate("SettingsDialog", "Starting:", nullptr));
        contiguousEitherStrandColourButton->setText(QString());
        blastQueryPathsHeadingLabel->setText(QApplication::translate("SettingsDialog", "BLAST query paths", nullptr));
        blastQueryPathsDescriptionLabel->setText(QApplication::translate("SettingsDialog", "These settings control how Bandage searches for query paths after conducting a BLAST search. Query paths that fail to meet these criteria will be excluded. It is necessary to rerun a BLAST search to see the effect of changing these settings.", nullptr));
        minQueryCoveredByPathSpinBox->setSuffix(QApplication::translate("SettingsDialog", "%", nullptr));
        minQueryCoveredByHitsSpinBox->setSuffix(QApplication::translate("SettingsDialog", "%", nullptr));
        minMeanHitIdentityCheckBox->setText(QApplication::translate("SettingsDialog", "Min mean hit identity:", nullptr));
        minQueryCoveredByHitsCheckBox->setText(QApplication::translate("SettingsDialog", "Min query path hit coverage:", nullptr));
        maxLengthBaseDiscrepancyCheckBox->setText(QApplication::translate("SettingsDialog", "Maximum length\n"
"discrepancy (bases):", nullptr));
        maxEValueProductCheckBox->setText(QApplication::translate("SettingsDialog", "Max e-value product:", nullptr));
        maxLengthPercentageCheckBox->setText(QApplication::translate("SettingsDialog", "Maximum path length:", nullptr));
        minQueryCoveredByPathLabel->setText(QApplication::translate("SettingsDialog", "Min query path coverage:", nullptr));
        minLengthPercentageCheckBox->setText(QApplication::translate("SettingsDialog", "Minimum path length:", nullptr));
        minLengthBaseDiscrepancyCheckBox->setText(QApplication::translate("SettingsDialog", "Minimum length\n"
"discrepancy (bases):", nullptr));
        minLengthPercentageSpinBox->setSuffix(QApplication::translate("SettingsDialog", "%", nullptr));
        maxLengthPercentageSpinBox->setSuffix(QApplication::translate("SettingsDialog", "%", nullptr));
        label_35->setText(QApplication::translate("SettingsDialog", "Max path nodes:", nullptr));
        maxEValueExponentSpinBox->setPrefix(QApplication::translate("SettingsDialog", "e", nullptr));
        minMeanHitIdentitySpinBox->setSuffix(QApplication::translate("SettingsDialog", "%", nullptr));
        label_41->setText(QApplication::translate("SettingsDialog", "Max hits for path search:", nullptr));
        restoreDefaultsButton->setText(QApplication::translate("SettingsDialog", "Restore defaults", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
