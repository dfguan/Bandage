/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "infotextwidget.h"
#include "verticalscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoad_graph;
    QAction *actionSave_image_current_view;
    QAction *actionExit;
    QAction *actionSettings;
    QAction *actionAbout;
    QAction *actionSave_image_entire_scene;
    QAction *actionControls_panel;
    QAction *actionSelection_panel;
    QAction *actionBring_selected_nodes_to_front;
    QAction *actionSelect_nodes_with_BLAST_hits;
    QAction *actionSelect_all;
    QAction *actionInvert_selection;
    QAction *actionCopy_selected_node_sequences_to_clipboard;
    QAction *actionSave_selected_node_sequences_to_FASTA;
    QAction *actionSelect_none;
    QAction *actionZoom_to_selection;
    QAction *actionSelect_possibly_contiguous_nodes;
    QAction *actionSelect_contiguous_nodes;
    QAction *actionSelect_not_contiguous_nodes;
    QAction *actionBandage_online_help;
    QAction *actionCopy_selected_node_path_to_clipboard;
    QAction *actionSave_selected_node_path_to_FASTA;
    QAction *actionSpecify_exact_path_for_copy_save;
    QAction *actionLoad_CSV;
    QAction *actionSave_entire_graph_to_FASTA;
    QAction *actionSave_entire_graph_to_FASTA_only_positive_nodes;
    QAction *actionWeb_BLAST_selected_nodes;
    QAction *actionHide_selected_nodes;
    QAction *actionRemove_selection_from_graph;
    QAction *actionDuplicate_selected_nodes;
    QAction *actionMerge_selected_nodes;
    QAction *actionMerge_all_possible_nodes;
    QAction *actionSave_entire_graph_to_GFA;
    QAction *actionSave_visible_graph_to_GFA;
    QAction *actionChange_node_name;
    QAction *actionChange_node_depth;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    VerticalScrollArea *controlsScrollArea;
    QWidget *controlsScrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QWidget *graphDetailsWidget;
    QGridLayout *gridLayout_6;
    QWidget *widget_14;
    QGridLayout *gridLayout_4;
    QLabel *label_6;
    QLabel *edgeCountLabel;
    QLabel *label_8;
    QLabel *totalLengthLabel;
    QLabel *nodeCountLabel;
    QLabel *label_2;
    QFrame *line_2;
    InfoTextWidget *graphInformationInfoText;
    QLabel *label_7;
    QPushButton *moreInfoButton;
    QSpacerItem *verticalSpacer_2;
    QWidget *graphDrawingWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QFrame *line;
    QWidget *graphDrawingWidget_2;
    QGridLayout *graphDrawingGridLayout;
    InfoTextWidget *startingNodesMatchTypeInfoText;
    InfoTextWidget *startingNodesInfoText;
    InfoTextWidget *graphScopeInfoText;
    QWidget *startingNodesMatchTypeWidget;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *startingNodesExactMatchRadioButton;
    QRadioButton *startingNodesPartialMatchRadioButton;
    InfoTextWidget *nodeDistanceInfoText;
    InfoTextWidget *nodeStyleInfoText;
    QWidget *nodeStyleWidget;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *singleNodesRadioButton;
    QRadioButton *doubleNodesRadioButton;
    QPushButton *drawGraphButton;
    QLabel *nodeStyleLabel;
    QSpinBox *nodeDistanceSpinBox;
    QLabel *startingNodesLabel;
    QLineEdit *startingNodesLineEdit;
    QComboBox *graphScopeComboBox;
    QLabel *graphScopeLabel;
    QLabel *nodeDistanceLabel;
    QLabel *startingNodesMatchTypeLabel;
    QDoubleSpinBox *minDepthSpinBox;
    InfoTextWidget *minDepthInfoText;
    InfoTextWidget *drawGraphInfoText;
    QLabel *minDepthLabel;
    InfoTextWidget *maxDepthInfoText;
    QLabel *maxDepthLabel;
    QDoubleSpinBox *maxDepthSpinBox;
    QSpacerItem *verticalSpacer_3;
    QWidget *graphDisplayWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_10;
    QFrame *line_5;
    QWidget *widget_2;
    QGridLayout *gridLayout_8;
    InfoTextWidget *nodeColourInfoText;
    InfoTextWidget *zoomInfoText;
    InfoTextWidget *contiguityInfoText;
    QDoubleSpinBox *zoomSpinBox;
    QPushButton *contiguityButton;
    QComboBox *coloursComboBox;
    QLabel *label_13;
    InfoTextWidget *nodeWidthInfoText;
    QLabel *label_15;
    QDoubleSpinBox *nodeWidthSpinBox;
    QSpacerItem *verticalSpacer_4;
    QWidget *nodeLabelsWidget;
    QVBoxLayout *verticalLayout_7;
    QLabel *nodeLabelsG;
    QFrame *line_6;
    QWidget *widget_8;
    QGridLayout *gridLayout_7;
    InfoTextWidget *nodeLabelsInfoText;
    InfoTextWidget *nodeFontInfoText;
    QPushButton *fontButton;
    QCheckBox *textOutlineCheckBox;
    QWidget *widget_13;
    QGridLayout *gridLayout_3;
    QCheckBox *nodeCustomLabelsCheckBox;
    QCheckBox *nodeNamesCheckBox;
    QCheckBox *nodeLengthsCheckBox;
    QCheckBox *nodeDepthCheckBox;
    QCheckBox *blastHitsCheckBox;
    QComboBox *csvComboBox;
    QCheckBox *csvCheckBox;
    QSpacerItem *verticalSpacer_6;
    QWidget *blastSearchWidget;
    QVBoxLayout *verticalLayout_10;
    QLabel *nodeLabelsG_2;
    QFrame *line_7;
    QWidget *widget_4;
    QGridLayout *gridLayout_5;
    InfoTextWidget *blastQueryInfoText;
    QLabel *label_4;
    InfoTextWidget *blastSearchInfoText;
    QComboBox *blastQueryComboBox;
    QPushButton *blastSearchButton;
    QSpacerItem *verticalSpacer;
    QWidget *graphicsViewWidget;
    QHBoxLayout *horizontalLayout_9;
    QWidget *widget_15;
    VerticalScrollArea *selectionScrollArea;
    QWidget *selectionScrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_14;
    QFrame *line_10;
    QWidget *nodeSelectionWidget;
    QGridLayout *gridLayout_2;
    InfoTextWidget *selectionSearchNodesMatchTypeInfoText;
    QRadioButton *selectionSearchNodesExactMatchRadioButton;
    QLabel *label_12;
    InfoTextWidget *selectionSearchInfoText;
    QLabel *label_16;
    QRadioButton *selectionSearchNodesPartialMatchRadioButton;
    QLineEdit *selectionSearchNodesLineEdit;
    QPushButton *selectNodesButton;
    QWidget *selectedNodesSpacerWidget;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *selectedNodesSpacer;
    QLabel *selectedNodesTitleLabel;
    QFrame *selectedNodesLine1;
    QPlainTextEdit *selectedNodesTextEdit;
    QLabel *selectedNodesLengthLabel;
    QLabel *selectedNodesDepthLabel;
    QFrame *selectedNodesLine2;
    QWidget *selectedNodesModificationWidget;
    QGridLayout *gridLayout;
    InfoTextWidget *setColourAndLabelInfoText;
    QPushButton *setNodeCustomLabelButton;
    QPushButton *setNodeCustomColourButton;
    QWidget *selectedEdgesSpacerWidget;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *selectedEdgesSpacer;
    QLabel *selectedEdgesTitleLabel;
    QFrame *selectedEdgesLine;
    QPlainTextEdit *selectedEdgesTextEdit;
    QSpacerItem *verticalSpacer_5;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuTools;
    QMenu *menuView;
    QMenu *menuSelection;
    QMenu *menuSelect_nodes_based_on_contiguity;
    QMenu *menuHelp;
    QMenu *menuOutput;
    QMenu *menuManipulate;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1465, 924);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionLoad_graph = new QAction(MainWindow);
        actionLoad_graph->setObjectName(QStringLiteral("actionLoad_graph"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/load-256.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoad_graph->setIcon(icon1);
        actionSave_image_current_view = new QAction(MainWindow);
        actionSave_image_current_view->setObjectName(QStringLiteral("actionSave_image_current_view"));
        actionSave_image_current_view->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/save-256.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_image_current_view->setIcon(icon2);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/exit-256.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon3);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/settings-256.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon4);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/information-256.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon5);
        actionSave_image_entire_scene = new QAction(MainWindow);
        actionSave_image_entire_scene->setObjectName(QStringLiteral("actionSave_image_entire_scene"));
        actionSave_image_entire_scene->setEnabled(true);
        actionSave_image_entire_scene->setIcon(icon2);
        actionControls_panel = new QAction(MainWindow);
        actionControls_panel->setObjectName(QStringLiteral("actionControls_panel"));
        actionControls_panel->setCheckable(true);
        actionControls_panel->setChecked(true);
        actionSelection_panel = new QAction(MainWindow);
        actionSelection_panel->setObjectName(QStringLiteral("actionSelection_panel"));
        actionSelection_panel->setCheckable(true);
        actionSelection_panel->setChecked(true);
        actionBring_selected_nodes_to_front = new QAction(MainWindow);
        actionBring_selected_nodes_to_front->setObjectName(QStringLiteral("actionBring_selected_nodes_to_front"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/bring-to-front.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBring_selected_nodes_to_front->setIcon(icon6);
        actionSelect_nodes_with_BLAST_hits = new QAction(MainWindow);
        actionSelect_nodes_with_BLAST_hits->setObjectName(QStringLiteral("actionSelect_nodes_with_BLAST_hits"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icons/BLAST.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect_nodes_with_BLAST_hits->setIcon(icon7);
        actionSelect_all = new QAction(MainWindow);
        actionSelect_all->setObjectName(QStringLiteral("actionSelect_all"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icons/select-all.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect_all->setIcon(icon8);
        actionInvert_selection = new QAction(MainWindow);
        actionInvert_selection->setObjectName(QStringLiteral("actionInvert_selection"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/icons/invert-selection.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInvert_selection->setIcon(icon9);
        actionCopy_selected_node_sequences_to_clipboard = new QAction(MainWindow);
        actionCopy_selected_node_sequences_to_clipboard->setObjectName(QStringLiteral("actionCopy_selected_node_sequences_to_clipboard"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/icons/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy_selected_node_sequences_to_clipboard->setIcon(icon10);
        actionSave_selected_node_sequences_to_FASTA = new QAction(MainWindow);
        actionSave_selected_node_sequences_to_FASTA->setObjectName(QStringLiteral("actionSave_selected_node_sequences_to_FASTA"));
        actionSave_selected_node_sequences_to_FASTA->setIcon(icon2);
        actionSelect_none = new QAction(MainWindow);
        actionSelect_none->setObjectName(QStringLiteral("actionSelect_none"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/icons/select-none.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect_none->setIcon(icon11);
        actionZoom_to_selection = new QAction(MainWindow);
        actionZoom_to_selection->setObjectName(QStringLiteral("actionZoom_to_selection"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/icons/zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_to_selection->setIcon(icon12);
        actionSelect_possibly_contiguous_nodes = new QAction(MainWindow);
        actionSelect_possibly_contiguous_nodes->setObjectName(QStringLiteral("actionSelect_possibly_contiguous_nodes"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/icons/contiguity-maybe_contiguous.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect_possibly_contiguous_nodes->setIcon(icon13);
        actionSelect_contiguous_nodes = new QAction(MainWindow);
        actionSelect_contiguous_nodes->setObjectName(QStringLiteral("actionSelect_contiguous_nodes"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/icons/contiguity-contiguous.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect_contiguous_nodes->setIcon(icon14);
        actionSelect_not_contiguous_nodes = new QAction(MainWindow);
        actionSelect_not_contiguous_nodes->setObjectName(QStringLiteral("actionSelect_not_contiguous_nodes"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/icons/contiguity-not_contiguous.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect_not_contiguous_nodes->setIcon(icon15);
        actionBandage_online_help = new QAction(MainWindow);
        actionBandage_online_help->setObjectName(QStringLiteral("actionBandage_online_help"));
        actionBandage_online_help->setIcon(icon);
        actionCopy_selected_node_path_to_clipboard = new QAction(MainWindow);
        actionCopy_selected_node_path_to_clipboard->setObjectName(QStringLiteral("actionCopy_selected_node_path_to_clipboard"));
        actionCopy_selected_node_path_to_clipboard->setIcon(icon10);
        actionSave_selected_node_path_to_FASTA = new QAction(MainWindow);
        actionSave_selected_node_path_to_FASTA->setObjectName(QStringLiteral("actionSave_selected_node_path_to_FASTA"));
        actionSave_selected_node_path_to_FASTA->setIcon(icon2);
        actionSpecify_exact_path_for_copy_save = new QAction(MainWindow);
        actionSpecify_exact_path_for_copy_save->setObjectName(QStringLiteral("actionSpecify_exact_path_for_copy_save"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/icons/specify-path.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSpecify_exact_path_for_copy_save->setIcon(icon16);
        actionLoad_CSV = new QAction(MainWindow);
        actionLoad_CSV->setObjectName(QStringLiteral("actionLoad_CSV"));
        actionLoad_CSV->setIcon(icon1);
        actionSave_entire_graph_to_FASTA = new QAction(MainWindow);
        actionSave_entire_graph_to_FASTA->setObjectName(QStringLiteral("actionSave_entire_graph_to_FASTA"));
        actionSave_entire_graph_to_FASTA->setIcon(icon2);
        actionSave_entire_graph_to_FASTA_only_positive_nodes = new QAction(MainWindow);
        actionSave_entire_graph_to_FASTA_only_positive_nodes->setObjectName(QStringLiteral("actionSave_entire_graph_to_FASTA_only_positive_nodes"));
        actionSave_entire_graph_to_FASTA_only_positive_nodes->setIcon(icon2);
        actionWeb_BLAST_selected_nodes = new QAction(MainWindow);
        actionWeb_BLAST_selected_nodes->setObjectName(QStringLiteral("actionWeb_BLAST_selected_nodes"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/icons/ncbi-256.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWeb_BLAST_selected_nodes->setIcon(icon17);
        actionHide_selected_nodes = new QAction(MainWindow);
        actionHide_selected_nodes->setObjectName(QStringLiteral("actionHide_selected_nodes"));
        actionRemove_selection_from_graph = new QAction(MainWindow);
        actionRemove_selection_from_graph->setObjectName(QStringLiteral("actionRemove_selection_from_graph"));
        actionDuplicate_selected_nodes = new QAction(MainWindow);
        actionDuplicate_selected_nodes->setObjectName(QStringLiteral("actionDuplicate_selected_nodes"));
        actionMerge_selected_nodes = new QAction(MainWindow);
        actionMerge_selected_nodes->setObjectName(QStringLiteral("actionMerge_selected_nodes"));
        actionMerge_all_possible_nodes = new QAction(MainWindow);
        actionMerge_all_possible_nodes->setObjectName(QStringLiteral("actionMerge_all_possible_nodes"));
        actionSave_entire_graph_to_GFA = new QAction(MainWindow);
        actionSave_entire_graph_to_GFA->setObjectName(QStringLiteral("actionSave_entire_graph_to_GFA"));
        actionSave_entire_graph_to_GFA->setIcon(icon2);
        actionSave_visible_graph_to_GFA = new QAction(MainWindow);
        actionSave_visible_graph_to_GFA->setObjectName(QStringLiteral("actionSave_visible_graph_to_GFA"));
        actionSave_visible_graph_to_GFA->setIcon(icon2);
        actionChange_node_name = new QAction(MainWindow);
        actionChange_node_name->setObjectName(QStringLiteral("actionChange_node_name"));
        actionChange_node_depth = new QAction(MainWindow);
        actionChange_node_depth->setObjectName(QStringLiteral("actionChange_node_depth"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        controlsScrollArea = new VerticalScrollArea(centralWidget);
        controlsScrollArea->setObjectName(QStringLiteral("controlsScrollArea"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(controlsScrollArea->sizePolicy().hasHeightForWidth());
        controlsScrollArea->setSizePolicy(sizePolicy);
        controlsScrollArea->setMinimumSize(QSize(0, 0));
        controlsScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        controlsScrollArea->setWidgetResizable(true);
        controlsScrollAreaWidgetContents = new QWidget();
        controlsScrollAreaWidgetContents->setObjectName(QStringLiteral("controlsScrollAreaWidgetContents"));
        controlsScrollAreaWidgetContents->setGeometry(QRect(0, 0, 289, 1058));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(controlsScrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        controlsScrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        verticalLayout_3 = new QVBoxLayout(controlsScrollAreaWidgetContents);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        graphDetailsWidget = new QWidget(controlsScrollAreaWidgetContents);
        graphDetailsWidget->setObjectName(QStringLiteral("graphDetailsWidget"));
        graphDetailsWidget->setEnabled(true);
        gridLayout_6 = new QGridLayout(graphDetailsWidget);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, -1);
        widget_14 = new QWidget(graphDetailsWidget);
        widget_14->setObjectName(QStringLiteral("widget_14"));
        gridLayout_4 = new QGridLayout(widget_14);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(0);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget_14);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_6, 1, 0, 1, 1);

        edgeCountLabel = new QLabel(widget_14);
        edgeCountLabel->setObjectName(QStringLiteral("edgeCountLabel"));

        gridLayout_4->addWidget(edgeCountLabel, 1, 1, 1, 1);

        label_8 = new QLabel(widget_14);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_8, 2, 0, 1, 1);

        totalLengthLabel = new QLabel(widget_14);
        totalLengthLabel->setObjectName(QStringLiteral("totalLengthLabel"));

        gridLayout_4->addWidget(totalLengthLabel, 2, 1, 1, 1);

        nodeCountLabel = new QLabel(widget_14);
        nodeCountLabel->setObjectName(QStringLiteral("nodeCountLabel"));

        gridLayout_4->addWidget(nodeCountLabel, 0, 1, 1, 1);

        label_2 = new QLabel(widget_14);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);


        gridLayout_6->addWidget(widget_14, 2, 1, 1, 1);

        line_2 = new QFrame(graphDetailsWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line_2, 1, 0, 1, 2);

        graphInformationInfoText = new InfoTextWidget(graphDetailsWidget);
        graphInformationInfoText->setObjectName(QStringLiteral("graphInformationInfoText"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(graphInformationInfoText->sizePolicy().hasHeightForWidth());
        graphInformationInfoText->setSizePolicy(sizePolicy2);
        graphInformationInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_6->addWidget(graphInformationInfoText, 2, 0, 1, 1);

        label_7 = new QLabel(graphDetailsWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);

        gridLayout_6->addWidget(label_7, 0, 0, 1, 2);

        moreInfoButton = new QPushButton(graphDetailsWidget);
        moreInfoButton->setObjectName(QStringLiteral("moreInfoButton"));

        gridLayout_6->addWidget(moreInfoButton, 4, 1, 1, 1);


        verticalLayout_3->addWidget(graphDetailsWidget);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        graphDrawingWidget = new QWidget(controlsScrollAreaWidgetContents);
        graphDrawingWidget->setObjectName(QStringLiteral("graphDrawingWidget"));
        graphDrawingWidget->setEnabled(true);
        verticalLayout_2 = new QVBoxLayout(graphDrawingWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(graphDrawingWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        verticalLayout_2->addWidget(label_5);

        line = new QFrame(graphDrawingWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        graphDrawingWidget_2 = new QWidget(graphDrawingWidget);
        graphDrawingWidget_2->setObjectName(QStringLiteral("graphDrawingWidget_2"));
        graphDrawingGridLayout = new QGridLayout(graphDrawingWidget_2);
        graphDrawingGridLayout->setSpacing(6);
        graphDrawingGridLayout->setContentsMargins(11, 11, 11, 11);
        graphDrawingGridLayout->setObjectName(QStringLiteral("graphDrawingGridLayout"));
        graphDrawingGridLayout->setContentsMargins(0, 0, 0, -1);
        startingNodesMatchTypeInfoText = new InfoTextWidget(graphDrawingWidget_2);
        startingNodesMatchTypeInfoText->setObjectName(QStringLiteral("startingNodesMatchTypeInfoText"));
        startingNodesMatchTypeInfoText->setEnabled(true);
        sizePolicy2.setHeightForWidth(startingNodesMatchTypeInfoText->sizePolicy().hasHeightForWidth());
        startingNodesMatchTypeInfoText->setSizePolicy(sizePolicy2);
        startingNodesMatchTypeInfoText->setMinimumSize(QSize(16, 16));

        graphDrawingGridLayout->addWidget(startingNodesMatchTypeInfoText, 2, 0, 1, 1);

        startingNodesInfoText = new InfoTextWidget(graphDrawingWidget_2);
        startingNodesInfoText->setObjectName(QStringLiteral("startingNodesInfoText"));
        startingNodesInfoText->setEnabled(true);
        sizePolicy2.setHeightForWidth(startingNodesInfoText->sizePolicy().hasHeightForWidth());
        startingNodesInfoText->setSizePolicy(sizePolicy2);
        startingNodesInfoText->setMinimumSize(QSize(16, 16));

        graphDrawingGridLayout->addWidget(startingNodesInfoText, 1, 0, 1, 1);

        graphScopeInfoText = new InfoTextWidget(graphDrawingWidget_2);
        graphScopeInfoText->setObjectName(QStringLiteral("graphScopeInfoText"));
        sizePolicy2.setHeightForWidth(graphScopeInfoText->sizePolicy().hasHeightForWidth());
        graphScopeInfoText->setSizePolicy(sizePolicy2);
        graphScopeInfoText->setMinimumSize(QSize(16, 16));

        graphDrawingGridLayout->addWidget(graphScopeInfoText, 0, 0, 1, 1);

        startingNodesMatchTypeWidget = new QWidget(graphDrawingWidget_2);
        startingNodesMatchTypeWidget->setObjectName(QStringLiteral("startingNodesMatchTypeWidget"));
        horizontalLayout_5 = new QHBoxLayout(startingNodesMatchTypeWidget);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        startingNodesExactMatchRadioButton = new QRadioButton(startingNodesMatchTypeWidget);
        startingNodesExactMatchRadioButton->setObjectName(QStringLiteral("startingNodesExactMatchRadioButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(startingNodesExactMatchRadioButton->sizePolicy().hasHeightForWidth());
        startingNodesExactMatchRadioButton->setSizePolicy(sizePolicy3);
        startingNodesExactMatchRadioButton->setChecked(true);

        horizontalLayout_5->addWidget(startingNodesExactMatchRadioButton);

        startingNodesPartialMatchRadioButton = new QRadioButton(startingNodesMatchTypeWidget);
        startingNodesPartialMatchRadioButton->setObjectName(QStringLiteral("startingNodesPartialMatchRadioButton"));
        sizePolicy3.setHeightForWidth(startingNodesPartialMatchRadioButton->sizePolicy().hasHeightForWidth());
        startingNodesPartialMatchRadioButton->setSizePolicy(sizePolicy3);

        horizontalLayout_5->addWidget(startingNodesPartialMatchRadioButton);


        graphDrawingGridLayout->addWidget(startingNodesMatchTypeWidget, 2, 2, 1, 1);

        nodeDistanceInfoText = new InfoTextWidget(graphDrawingWidget_2);
        nodeDistanceInfoText->setObjectName(QStringLiteral("nodeDistanceInfoText"));
        nodeDistanceInfoText->setEnabled(true);
        sizePolicy2.setHeightForWidth(nodeDistanceInfoText->sizePolicy().hasHeightForWidth());
        nodeDistanceInfoText->setSizePolicy(sizePolicy2);
        nodeDistanceInfoText->setMinimumSize(QSize(16, 16));

        graphDrawingGridLayout->addWidget(nodeDistanceInfoText, 3, 0, 1, 1);

        nodeStyleInfoText = new InfoTextWidget(graphDrawingWidget_2);
        nodeStyleInfoText->setObjectName(QStringLiteral("nodeStyleInfoText"));
        sizePolicy2.setHeightForWidth(nodeStyleInfoText->sizePolicy().hasHeightForWidth());
        nodeStyleInfoText->setSizePolicy(sizePolicy2);
        nodeStyleInfoText->setMinimumSize(QSize(16, 16));

        graphDrawingGridLayout->addWidget(nodeStyleInfoText, 6, 0, 1, 1);

        nodeStyleWidget = new QWidget(graphDrawingWidget_2);
        nodeStyleWidget->setObjectName(QStringLiteral("nodeStyleWidget"));
        horizontalLayout_6 = new QHBoxLayout(nodeStyleWidget);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        singleNodesRadioButton = new QRadioButton(nodeStyleWidget);
        singleNodesRadioButton->setObjectName(QStringLiteral("singleNodesRadioButton"));
        sizePolicy3.setHeightForWidth(singleNodesRadioButton->sizePolicy().hasHeightForWidth());
        singleNodesRadioButton->setSizePolicy(sizePolicy3);
        singleNodesRadioButton->setChecked(true);

        horizontalLayout_6->addWidget(singleNodesRadioButton);

        doubleNodesRadioButton = new QRadioButton(nodeStyleWidget);
        doubleNodesRadioButton->setObjectName(QStringLiteral("doubleNodesRadioButton"));
        sizePolicy3.setHeightForWidth(doubleNodesRadioButton->sizePolicy().hasHeightForWidth());
        doubleNodesRadioButton->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(doubleNodesRadioButton);


        graphDrawingGridLayout->addWidget(nodeStyleWidget, 6, 2, 1, 1);

        drawGraphButton = new QPushButton(graphDrawingWidget_2);
        drawGraphButton->setObjectName(QStringLiteral("drawGraphButton"));

        graphDrawingGridLayout->addWidget(drawGraphButton, 9, 1, 1, 2);

        nodeStyleLabel = new QLabel(graphDrawingWidget_2);
        nodeStyleLabel->setObjectName(QStringLiteral("nodeStyleLabel"));
        sizePolicy1.setHeightForWidth(nodeStyleLabel->sizePolicy().hasHeightForWidth());
        nodeStyleLabel->setSizePolicy(sizePolicy1);

        graphDrawingGridLayout->addWidget(nodeStyleLabel, 6, 1, 1, 1);

        nodeDistanceSpinBox = new QSpinBox(graphDrawingWidget_2);
        nodeDistanceSpinBox->setObjectName(QStringLiteral("nodeDistanceSpinBox"));
        nodeDistanceSpinBox->setEnabled(true);
        sizePolicy3.setHeightForWidth(nodeDistanceSpinBox->sizePolicy().hasHeightForWidth());
        nodeDistanceSpinBox->setSizePolicy(sizePolicy3);
        nodeDistanceSpinBox->setAlignment(Qt::AlignCenter);
        nodeDistanceSpinBox->setMaximum(10000);

        graphDrawingGridLayout->addWidget(nodeDistanceSpinBox, 3, 2, 1, 1);

        startingNodesLabel = new QLabel(graphDrawingWidget_2);
        startingNodesLabel->setObjectName(QStringLiteral("startingNodesLabel"));
        startingNodesLabel->setEnabled(true);
        sizePolicy1.setHeightForWidth(startingNodesLabel->sizePolicy().hasHeightForWidth());
        startingNodesLabel->setSizePolicy(sizePolicy1);

        graphDrawingGridLayout->addWidget(startingNodesLabel, 1, 1, 1, 1);

        startingNodesLineEdit = new QLineEdit(graphDrawingWidget_2);
        startingNodesLineEdit->setObjectName(QStringLiteral("startingNodesLineEdit"));
        startingNodesLineEdit->setEnabled(true);
        sizePolicy3.setHeightForWidth(startingNodesLineEdit->sizePolicy().hasHeightForWidth());
        startingNodesLineEdit->setSizePolicy(sizePolicy3);

        graphDrawingGridLayout->addWidget(startingNodesLineEdit, 1, 2, 1, 1);

        graphScopeComboBox = new QComboBox(graphDrawingWidget_2);
        graphScopeComboBox->addItem(QString());
        graphScopeComboBox->addItem(QString());
        graphScopeComboBox->addItem(QString());
        graphScopeComboBox->addItem(QString());
        graphScopeComboBox->setObjectName(QStringLiteral("graphScopeComboBox"));
        sizePolicy3.setHeightForWidth(graphScopeComboBox->sizePolicy().hasHeightForWidth());
        graphScopeComboBox->setSizePolicy(sizePolicy3);

        graphDrawingGridLayout->addWidget(graphScopeComboBox, 0, 2, 1, 1);

        graphScopeLabel = new QLabel(graphDrawingWidget_2);
        graphScopeLabel->setObjectName(QStringLiteral("graphScopeLabel"));
        sizePolicy1.setHeightForWidth(graphScopeLabel->sizePolicy().hasHeightForWidth());
        graphScopeLabel->setSizePolicy(sizePolicy1);

        graphDrawingGridLayout->addWidget(graphScopeLabel, 0, 1, 1, 1);

        nodeDistanceLabel = new QLabel(graphDrawingWidget_2);
        nodeDistanceLabel->setObjectName(QStringLiteral("nodeDistanceLabel"));
        nodeDistanceLabel->setEnabled(true);

        graphDrawingGridLayout->addWidget(nodeDistanceLabel, 3, 1, 1, 1);

        startingNodesMatchTypeLabel = new QLabel(graphDrawingWidget_2);
        startingNodesMatchTypeLabel->setObjectName(QStringLiteral("startingNodesMatchTypeLabel"));
        startingNodesMatchTypeLabel->setEnabled(true);
        sizePolicy1.setHeightForWidth(startingNodesMatchTypeLabel->sizePolicy().hasHeightForWidth());
        startingNodesMatchTypeLabel->setSizePolicy(sizePolicy1);

        graphDrawingGridLayout->addWidget(startingNodesMatchTypeLabel, 2, 1, 1, 1);

        minDepthSpinBox = new QDoubleSpinBox(graphDrawingWidget_2);
        minDepthSpinBox->setObjectName(QStringLiteral("minDepthSpinBox"));
        minDepthSpinBox->setAlignment(Qt::AlignCenter);
        minDepthSpinBox->setDecimals(1);
        minDepthSpinBox->setMaximum(1e+6);

        graphDrawingGridLayout->addWidget(minDepthSpinBox, 4, 2, 1, 1);

        minDepthInfoText = new InfoTextWidget(graphDrawingWidget_2);
        minDepthInfoText->setObjectName(QStringLiteral("minDepthInfoText"));
        sizePolicy2.setHeightForWidth(minDepthInfoText->sizePolicy().hasHeightForWidth());
        minDepthInfoText->setSizePolicy(sizePolicy2);
        minDepthInfoText->setMinimumSize(QSize(16, 16));

        graphDrawingGridLayout->addWidget(minDepthInfoText, 4, 0, 1, 1);

        drawGraphInfoText = new InfoTextWidget(graphDrawingWidget_2);
        drawGraphInfoText->setObjectName(QStringLiteral("drawGraphInfoText"));
        sizePolicy2.setHeightForWidth(drawGraphInfoText->sizePolicy().hasHeightForWidth());
        drawGraphInfoText->setSizePolicy(sizePolicy2);
        drawGraphInfoText->setMinimumSize(QSize(16, 16));

        graphDrawingGridLayout->addWidget(drawGraphInfoText, 9, 0, 1, 1);

        minDepthLabel = new QLabel(graphDrawingWidget_2);
        minDepthLabel->setObjectName(QStringLiteral("minDepthLabel"));
        sizePolicy1.setHeightForWidth(minDepthLabel->sizePolicy().hasHeightForWidth());
        minDepthLabel->setSizePolicy(sizePolicy1);

        graphDrawingGridLayout->addWidget(minDepthLabel, 4, 1, 1, 1);

        maxDepthInfoText = new InfoTextWidget(graphDrawingWidget_2);
        maxDepthInfoText->setObjectName(QStringLiteral("maxDepthInfoText"));
        sizePolicy2.setHeightForWidth(maxDepthInfoText->sizePolicy().hasHeightForWidth());
        maxDepthInfoText->setSizePolicy(sizePolicy2);
        maxDepthInfoText->setMinimumSize(QSize(16, 16));

        graphDrawingGridLayout->addWidget(maxDepthInfoText, 5, 0, 1, 1);

        maxDepthLabel = new QLabel(graphDrawingWidget_2);
        maxDepthLabel->setObjectName(QStringLiteral("maxDepthLabel"));
        sizePolicy1.setHeightForWidth(maxDepthLabel->sizePolicy().hasHeightForWidth());
        maxDepthLabel->setSizePolicy(sizePolicy1);

        graphDrawingGridLayout->addWidget(maxDepthLabel, 5, 1, 1, 1);

        maxDepthSpinBox = new QDoubleSpinBox(graphDrawingWidget_2);
        maxDepthSpinBox->setObjectName(QStringLiteral("maxDepthSpinBox"));
        maxDepthSpinBox->setAlignment(Qt::AlignCenter);
        maxDepthSpinBox->setDecimals(1);
        maxDepthSpinBox->setMaximum(1e+6);

        graphDrawingGridLayout->addWidget(maxDepthSpinBox, 5, 2, 1, 1);


        verticalLayout_2->addWidget(graphDrawingWidget_2);


        verticalLayout_3->addWidget(graphDrawingWidget);

        verticalSpacer_3 = new QSpacerItem(229, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        graphDisplayWidget = new QWidget(controlsScrollAreaWidgetContents);
        graphDisplayWidget->setObjectName(QStringLiteral("graphDisplayWidget"));
        graphDisplayWidget->setEnabled(true);
        verticalLayout = new QVBoxLayout(graphDisplayWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(graphDisplayWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);

        verticalLayout->addWidget(label_10);

        line_5 = new QFrame(graphDisplayWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_5);

        widget_2 = new QWidget(graphDisplayWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout_8 = new QGridLayout(widget_2);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, -1);
        nodeColourInfoText = new InfoTextWidget(widget_2);
        nodeColourInfoText->setObjectName(QStringLiteral("nodeColourInfoText"));
        sizePolicy2.setHeightForWidth(nodeColourInfoText->sizePolicy().hasHeightForWidth());
        nodeColourInfoText->setSizePolicy(sizePolicy2);
        nodeColourInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_8->addWidget(nodeColourInfoText, 2, 0, 1, 1);

        zoomInfoText = new InfoTextWidget(widget_2);
        zoomInfoText->setObjectName(QStringLiteral("zoomInfoText"));
        sizePolicy2.setHeightForWidth(zoomInfoText->sizePolicy().hasHeightForWidth());
        zoomInfoText->setSizePolicy(sizePolicy2);
        zoomInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_8->addWidget(zoomInfoText, 0, 0, 1, 1);

        contiguityInfoText = new InfoTextWidget(widget_2);
        contiguityInfoText->setObjectName(QStringLiteral("contiguityInfoText"));
        sizePolicy2.setHeightForWidth(contiguityInfoText->sizePolicy().hasHeightForWidth());
        contiguityInfoText->setSizePolicy(sizePolicy2);
        contiguityInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_8->addWidget(contiguityInfoText, 3, 0, 1, 1);

        zoomSpinBox = new QDoubleSpinBox(widget_2);
        zoomSpinBox->setObjectName(QStringLiteral("zoomSpinBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(zoomSpinBox->sizePolicy().hasHeightForWidth());
        zoomSpinBox->setSizePolicy(sizePolicy4);
        zoomSpinBox->setAlignment(Qt::AlignCenter);
        zoomSpinBox->setDecimals(1);
        zoomSpinBox->setMinimum(5);
        zoomSpinBox->setMaximum(500);
        zoomSpinBox->setSingleStep(5);
        zoomSpinBox->setValue(100);

        gridLayout_8->addWidget(zoomSpinBox, 0, 2, 1, 1);

        contiguityButton = new QPushButton(widget_2);
        contiguityButton->setObjectName(QStringLiteral("contiguityButton"));

        gridLayout_8->addWidget(contiguityButton, 3, 1, 1, 2);

        coloursComboBox = new QComboBox(widget_2);
        coloursComboBox->addItem(QString());
        coloursComboBox->addItem(QString());
        coloursComboBox->addItem(QString());
        coloursComboBox->addItem(QString());
        coloursComboBox->addItem(QString());
        coloursComboBox->addItem(QString());
        coloursComboBox->addItem(QString());
        coloursComboBox->setObjectName(QStringLiteral("coloursComboBox"));

        gridLayout_8->addWidget(coloursComboBox, 2, 1, 1, 2);

        label_13 = new QLabel(widget_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_13, 0, 1, 1, 1);

        nodeWidthInfoText = new InfoTextWidget(widget_2);
        nodeWidthInfoText->setObjectName(QStringLiteral("nodeWidthInfoText"));
        sizePolicy2.setHeightForWidth(nodeWidthInfoText->sizePolicy().hasHeightForWidth());
        nodeWidthInfoText->setSizePolicy(sizePolicy2);
        nodeWidthInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_8->addWidget(nodeWidthInfoText, 1, 0, 1, 1);

        label_15 = new QLabel(widget_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_15, 1, 1, 1, 1);

        nodeWidthSpinBox = new QDoubleSpinBox(widget_2);
        nodeWidthSpinBox->setObjectName(QStringLiteral("nodeWidthSpinBox"));
        sizePolicy4.setHeightForWidth(nodeWidthSpinBox->sizePolicy().hasHeightForWidth());
        nodeWidthSpinBox->setSizePolicy(sizePolicy4);
        nodeWidthSpinBox->setAlignment(Qt::AlignCenter);
        nodeWidthSpinBox->setDecimals(1);
        nodeWidthSpinBox->setMinimum(0.5);
        nodeWidthSpinBox->setMaximum(1000);
        nodeWidthSpinBox->setSingleStep(0.5);
        nodeWidthSpinBox->setValue(5);

        gridLayout_8->addWidget(nodeWidthSpinBox, 1, 2, 1, 1);


        verticalLayout->addWidget(widget_2);


        verticalLayout_3->addWidget(graphDisplayWidget);

        verticalSpacer_4 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);

        nodeLabelsWidget = new QWidget(controlsScrollAreaWidgetContents);
        nodeLabelsWidget->setObjectName(QStringLiteral("nodeLabelsWidget"));
        nodeLabelsWidget->setEnabled(true);
        verticalLayout_7 = new QVBoxLayout(nodeLabelsWidget);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        nodeLabelsG = new QLabel(nodeLabelsWidget);
        nodeLabelsG->setObjectName(QStringLiteral("nodeLabelsG"));
        nodeLabelsG->setFont(font);

        verticalLayout_7->addWidget(nodeLabelsG);

        line_6 = new QFrame(nodeLabelsWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line_6);

        widget_8 = new QWidget(nodeLabelsWidget);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        gridLayout_7 = new QGridLayout(widget_8);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, -1);
        nodeLabelsInfoText = new InfoTextWidget(widget_8);
        nodeLabelsInfoText->setObjectName(QStringLiteral("nodeLabelsInfoText"));
        sizePolicy2.setHeightForWidth(nodeLabelsInfoText->sizePolicy().hasHeightForWidth());
        nodeLabelsInfoText->setSizePolicy(sizePolicy2);
        nodeLabelsInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_7->addWidget(nodeLabelsInfoText, 0, 0, 1, 1);

        nodeFontInfoText = new InfoTextWidget(widget_8);
        nodeFontInfoText->setObjectName(QStringLiteral("nodeFontInfoText"));
        sizePolicy2.setHeightForWidth(nodeFontInfoText->sizePolicy().hasHeightForWidth());
        nodeFontInfoText->setSizePolicy(sizePolicy2);
        nodeFontInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_7->addWidget(nodeFontInfoText, 1, 0, 1, 1);

        fontButton = new QPushButton(widget_8);
        fontButton->setObjectName(QStringLiteral("fontButton"));

        gridLayout_7->addWidget(fontButton, 1, 1, 1, 1);

        textOutlineCheckBox = new QCheckBox(widget_8);
        textOutlineCheckBox->setObjectName(QStringLiteral("textOutlineCheckBox"));

        gridLayout_7->addWidget(textOutlineCheckBox, 1, 2, 1, 1);

        widget_13 = new QWidget(widget_8);
        widget_13->setObjectName(QStringLiteral("widget_13"));
        gridLayout_3 = new QGridLayout(widget_13);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setVerticalSpacing(0);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        nodeCustomLabelsCheckBox = new QCheckBox(widget_13);
        nodeCustomLabelsCheckBox->setObjectName(QStringLiteral("nodeCustomLabelsCheckBox"));

        gridLayout_3->addWidget(nodeCustomLabelsCheckBox, 0, 0, 1, 1);

        nodeNamesCheckBox = new QCheckBox(widget_13);
        nodeNamesCheckBox->setObjectName(QStringLiteral("nodeNamesCheckBox"));

        gridLayout_3->addWidget(nodeNamesCheckBox, 0, 1, 1, 1);

        nodeLengthsCheckBox = new QCheckBox(widget_13);
        nodeLengthsCheckBox->setObjectName(QStringLiteral("nodeLengthsCheckBox"));

        gridLayout_3->addWidget(nodeLengthsCheckBox, 1, 0, 1, 1);

        nodeDepthCheckBox = new QCheckBox(widget_13);
        nodeDepthCheckBox->setObjectName(QStringLiteral("nodeDepthCheckBox"));

        gridLayout_3->addWidget(nodeDepthCheckBox, 1, 1, 1, 1);

        blastHitsCheckBox = new QCheckBox(widget_13);
        blastHitsCheckBox->setObjectName(QStringLiteral("blastHitsCheckBox"));

        gridLayout_3->addWidget(blastHitsCheckBox, 3, 0, 1, 1);

        csvComboBox = new QComboBox(widget_13);
        csvComboBox->setObjectName(QStringLiteral("csvComboBox"));
        csvComboBox->setEnabled(false);

        gridLayout_3->addWidget(csvComboBox, 4, 1, 1, 1);

        csvCheckBox = new QCheckBox(widget_13);
        csvCheckBox->setObjectName(QStringLiteral("csvCheckBox"));

        gridLayout_3->addWidget(csvCheckBox, 3, 1, 1, 1);


        gridLayout_7->addWidget(widget_13, 0, 1, 1, 2);


        verticalLayout_7->addWidget(widget_8);


        verticalLayout_3->addWidget(nodeLabelsWidget);

        verticalSpacer_6 = new QSpacerItem(229, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_6);

        blastSearchWidget = new QWidget(controlsScrollAreaWidgetContents);
        blastSearchWidget->setObjectName(QStringLiteral("blastSearchWidget"));
        blastSearchWidget->setEnabled(true);
        verticalLayout_10 = new QVBoxLayout(blastSearchWidget);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        nodeLabelsG_2 = new QLabel(blastSearchWidget);
        nodeLabelsG_2->setObjectName(QStringLiteral("nodeLabelsG_2"));
        nodeLabelsG_2->setFont(font);

        verticalLayout_10->addWidget(nodeLabelsG_2);

        line_7 = new QFrame(blastSearchWidget);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_10->addWidget(line_7);

        widget_4 = new QWidget(blastSearchWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        gridLayout_5 = new QGridLayout(widget_4);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, -1);
        blastQueryInfoText = new InfoTextWidget(widget_4);
        blastQueryInfoText->setObjectName(QStringLiteral("blastQueryInfoText"));
        sizePolicy2.setHeightForWidth(blastQueryInfoText->sizePolicy().hasHeightForWidth());
        blastQueryInfoText->setSizePolicy(sizePolicy2);
        blastQueryInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_5->addWidget(blastQueryInfoText, 1, 0, 1, 1);

        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setWordWrap(true);

        gridLayout_5->addWidget(label_4, 1, 1, 1, 1);

        blastSearchInfoText = new InfoTextWidget(widget_4);
        blastSearchInfoText->setObjectName(QStringLiteral("blastSearchInfoText"));
        sizePolicy2.setHeightForWidth(blastSearchInfoText->sizePolicy().hasHeightForWidth());
        blastSearchInfoText->setSizePolicy(sizePolicy2);
        blastSearchInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_5->addWidget(blastSearchInfoText, 0, 0, 1, 1);

        blastQueryComboBox = new QComboBox(widget_4);
        blastQueryComboBox->addItem(QString());
        blastQueryComboBox->setObjectName(QStringLiteral("blastQueryComboBox"));
        blastQueryComboBox->setEnabled(false);
        sizePolicy4.setHeightForWidth(blastQueryComboBox->sizePolicy().hasHeightForWidth());
        blastQueryComboBox->setSizePolicy(sizePolicy4);

        gridLayout_5->addWidget(blastQueryComboBox, 1, 2, 1, 1);

        blastSearchButton = new QPushButton(widget_4);
        blastSearchButton->setObjectName(QStringLiteral("blastSearchButton"));

        gridLayout_5->addWidget(blastSearchButton, 0, 1, 1, 2);


        verticalLayout_10->addWidget(widget_4);


        verticalLayout_3->addWidget(blastSearchWidget);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        controlsScrollArea->setWidget(controlsScrollAreaWidgetContents);

        horizontalLayout->addWidget(controlsScrollArea);

        graphicsViewWidget = new QWidget(centralWidget);
        graphicsViewWidget->setObjectName(QStringLiteral("graphicsViewWidget"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(graphicsViewWidget->sizePolicy().hasHeightForWidth());
        graphicsViewWidget->setSizePolicy(sizePolicy5);
        horizontalLayout_9 = new QHBoxLayout(graphicsViewWidget);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        widget_15 = new QWidget(graphicsViewWidget);
        widget_15->setObjectName(QStringLiteral("widget_15"));

        horizontalLayout_9->addWidget(widget_15);


        horizontalLayout->addWidget(graphicsViewWidget);

        selectionScrollArea = new VerticalScrollArea(centralWidget);
        selectionScrollArea->setObjectName(QStringLiteral("selectionScrollArea"));
        sizePolicy.setHeightForWidth(selectionScrollArea->sizePolicy().hasHeightForWidth());
        selectionScrollArea->setSizePolicy(sizePolicy);
        selectionScrollArea->setWidgetResizable(true);
        selectionScrollAreaWidgetContents = new QWidget();
        selectionScrollAreaWidgetContents->setObjectName(QStringLiteral("selectionScrollAreaWidgetContents"));
        selectionScrollAreaWidgetContents->setGeometry(QRect(0, 0, 249, 899));
        sizePolicy1.setHeightForWidth(selectionScrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        selectionScrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        verticalLayout_4 = new QVBoxLayout(selectionScrollAreaWidgetContents);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_14 = new QLabel(selectionScrollAreaWidgetContents);
        label_14->setObjectName(QStringLiteral("label_14"));
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);
        label_14->setFont(font);

        verticalLayout_4->addWidget(label_14);

        line_10 = new QFrame(selectionScrollAreaWidgetContents);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_10);

        nodeSelectionWidget = new QWidget(selectionScrollAreaWidgetContents);
        nodeSelectionWidget->setObjectName(QStringLiteral("nodeSelectionWidget"));
        nodeSelectionWidget->setEnabled(true);
        gridLayout_2 = new QGridLayout(nodeSelectionWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        selectionSearchNodesMatchTypeInfoText = new InfoTextWidget(nodeSelectionWidget);
        selectionSearchNodesMatchTypeInfoText->setObjectName(QStringLiteral("selectionSearchNodesMatchTypeInfoText"));
        selectionSearchNodesMatchTypeInfoText->setEnabled(true);
        sizePolicy2.setHeightForWidth(selectionSearchNodesMatchTypeInfoText->sizePolicy().hasHeightForWidth());
        selectionSearchNodesMatchTypeInfoText->setSizePolicy(sizePolicy2);
        selectionSearchNodesMatchTypeInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_2->addWidget(selectionSearchNodesMatchTypeInfoText, 1, 0, 1, 1);

        selectionSearchNodesExactMatchRadioButton = new QRadioButton(nodeSelectionWidget);
        selectionSearchNodesExactMatchRadioButton->setObjectName(QStringLiteral("selectionSearchNodesExactMatchRadioButton"));
        selectionSearchNodesExactMatchRadioButton->setChecked(true);

        gridLayout_2->addWidget(selectionSearchNodesExactMatchRadioButton, 1, 2, 1, 1);

        label_12 = new QLabel(nodeSelectionWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setEnabled(true);
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_12, 0, 1, 1, 1);

        selectionSearchInfoText = new InfoTextWidget(nodeSelectionWidget);
        selectionSearchInfoText->setObjectName(QStringLiteral("selectionSearchInfoText"));
        sizePolicy2.setHeightForWidth(selectionSearchInfoText->sizePolicy().hasHeightForWidth());
        selectionSearchInfoText->setSizePolicy(sizePolicy2);
        selectionSearchInfoText->setMinimumSize(QSize(16, 16));

        gridLayout_2->addWidget(selectionSearchInfoText, 0, 0, 1, 1);

        label_16 = new QLabel(nodeSelectionWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setEnabled(true);

        gridLayout_2->addWidget(label_16, 1, 1, 1, 1);

        selectionSearchNodesPartialMatchRadioButton = new QRadioButton(nodeSelectionWidget);
        selectionSearchNodesPartialMatchRadioButton->setObjectName(QStringLiteral("selectionSearchNodesPartialMatchRadioButton"));

        gridLayout_2->addWidget(selectionSearchNodesPartialMatchRadioButton, 1, 3, 1, 1);

        selectionSearchNodesLineEdit = new QLineEdit(nodeSelectionWidget);
        selectionSearchNodesLineEdit->setObjectName(QStringLiteral("selectionSearchNodesLineEdit"));
        selectionSearchNodesLineEdit->setEnabled(true);
        sizePolicy3.setHeightForWidth(selectionSearchNodesLineEdit->sizePolicy().hasHeightForWidth());
        selectionSearchNodesLineEdit->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(selectionSearchNodesLineEdit, 0, 2, 1, 2);


        verticalLayout_4->addWidget(nodeSelectionWidget);

        selectNodesButton = new QPushButton(selectionScrollAreaWidgetContents);
        selectNodesButton->setObjectName(QStringLiteral("selectNodesButton"));

        verticalLayout_4->addWidget(selectNodesButton);

        selectedNodesSpacerWidget = new QWidget(selectionScrollAreaWidgetContents);
        selectedNodesSpacerWidget->setObjectName(QStringLiteral("selectedNodesSpacerWidget"));
        verticalLayout_5 = new QVBoxLayout(selectedNodesSpacerWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        selectedNodesSpacer = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(selectedNodesSpacer);


        verticalLayout_4->addWidget(selectedNodesSpacerWidget);

        selectedNodesTitleLabel = new QLabel(selectionScrollAreaWidgetContents);
        selectedNodesTitleLabel->setObjectName(QStringLiteral("selectedNodesTitleLabel"));
        sizePolicy1.setHeightForWidth(selectedNodesTitleLabel->sizePolicy().hasHeightForWidth());
        selectedNodesTitleLabel->setSizePolicy(sizePolicy1);
        selectedNodesTitleLabel->setFont(font);

        verticalLayout_4->addWidget(selectedNodesTitleLabel);

        selectedNodesLine1 = new QFrame(selectionScrollAreaWidgetContents);
        selectedNodesLine1->setObjectName(QStringLiteral("selectedNodesLine1"));
        selectedNodesLine1->setFrameShape(QFrame::HLine);
        selectedNodesLine1->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(selectedNodesLine1);

        selectedNodesTextEdit = new QPlainTextEdit(selectionScrollAreaWidgetContents);
        selectedNodesTextEdit->setObjectName(QStringLiteral("selectedNodesTextEdit"));
        QSizePolicy sizePolicy6(QSizePolicy::Ignored, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(selectedNodesTextEdit->sizePolicy().hasHeightForWidth());
        selectedNodesTextEdit->setSizePolicy(sizePolicy6);
        selectedNodesTextEdit->setReadOnly(true);

        verticalLayout_4->addWidget(selectedNodesTextEdit);

        selectedNodesLengthLabel = new QLabel(selectionScrollAreaWidgetContents);
        selectedNodesLengthLabel->setObjectName(QStringLiteral("selectedNodesLengthLabel"));
        sizePolicy1.setHeightForWidth(selectedNodesLengthLabel->sizePolicy().hasHeightForWidth());
        selectedNodesLengthLabel->setSizePolicy(sizePolicy1);
        selectedNodesLengthLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_4->addWidget(selectedNodesLengthLabel);

        selectedNodesDepthLabel = new QLabel(selectionScrollAreaWidgetContents);
        selectedNodesDepthLabel->setObjectName(QStringLiteral("selectedNodesDepthLabel"));
        sizePolicy1.setHeightForWidth(selectedNodesDepthLabel->sizePolicy().hasHeightForWidth());
        selectedNodesDepthLabel->setSizePolicy(sizePolicy1);
        selectedNodesDepthLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_4->addWidget(selectedNodesDepthLabel);

        selectedNodesLine2 = new QFrame(selectionScrollAreaWidgetContents);
        selectedNodesLine2->setObjectName(QStringLiteral("selectedNodesLine2"));
        selectedNodesLine2->setFrameShape(QFrame::HLine);
        selectedNodesLine2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(selectedNodesLine2);

        selectedNodesModificationWidget = new QWidget(selectionScrollAreaWidgetContents);
        selectedNodesModificationWidget->setObjectName(QStringLiteral("selectedNodesModificationWidget"));
        gridLayout = new QGridLayout(selectedNodesModificationWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        setColourAndLabelInfoText = new InfoTextWidget(selectedNodesModificationWidget);
        setColourAndLabelInfoText->setObjectName(QStringLiteral("setColourAndLabelInfoText"));
        sizePolicy2.setHeightForWidth(setColourAndLabelInfoText->sizePolicy().hasHeightForWidth());
        setColourAndLabelInfoText->setSizePolicy(sizePolicy2);
        setColourAndLabelInfoText->setMinimumSize(QSize(16, 16));

        gridLayout->addWidget(setColourAndLabelInfoText, 0, 0, 1, 1);

        setNodeCustomLabelButton = new QPushButton(selectedNodesModificationWidget);
        setNodeCustomLabelButton->setObjectName(QStringLiteral("setNodeCustomLabelButton"));

        gridLayout->addWidget(setNodeCustomLabelButton, 0, 2, 1, 1);

        setNodeCustomColourButton = new QPushButton(selectedNodesModificationWidget);
        setNodeCustomColourButton->setObjectName(QStringLiteral("setNodeCustomColourButton"));

        gridLayout->addWidget(setNodeCustomColourButton, 0, 1, 1, 1);


        verticalLayout_4->addWidget(selectedNodesModificationWidget);

        selectedEdgesSpacerWidget = new QWidget(selectionScrollAreaWidgetContents);
        selectedEdgesSpacerWidget->setObjectName(QStringLiteral("selectedEdgesSpacerWidget"));
        verticalLayout_6 = new QVBoxLayout(selectedEdgesSpacerWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        selectedEdgesSpacer = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(selectedEdgesSpacer);


        verticalLayout_4->addWidget(selectedEdgesSpacerWidget);

        selectedEdgesTitleLabel = new QLabel(selectionScrollAreaWidgetContents);
        selectedEdgesTitleLabel->setObjectName(QStringLiteral("selectedEdgesTitleLabel"));
        sizePolicy1.setHeightForWidth(selectedEdgesTitleLabel->sizePolicy().hasHeightForWidth());
        selectedEdgesTitleLabel->setSizePolicy(sizePolicy1);
        selectedEdgesTitleLabel->setFont(font);

        verticalLayout_4->addWidget(selectedEdgesTitleLabel);

        selectedEdgesLine = new QFrame(selectionScrollAreaWidgetContents);
        selectedEdgesLine->setObjectName(QStringLiteral("selectedEdgesLine"));
        selectedEdgesLine->setFrameShape(QFrame::HLine);
        selectedEdgesLine->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(selectedEdgesLine);

        selectedEdgesTextEdit = new QPlainTextEdit(selectionScrollAreaWidgetContents);
        selectedEdgesTextEdit->setObjectName(QStringLiteral("selectedEdgesTextEdit"));
        sizePolicy6.setHeightForWidth(selectedEdgesTextEdit->sizePolicy().hasHeightForWidth());
        selectedEdgesTextEdit->setSizePolicy(sizePolicy6);
        selectedEdgesTextEdit->setReadOnly(true);

        verticalLayout_4->addWidget(selectedEdgesTextEdit);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        selectionScrollArea->setWidget(selectionScrollAreaWidgetContents);

        horizontalLayout->addWidget(selectionScrollArea);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1465, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuSelection = new QMenu(menuBar);
        menuSelection->setObjectName(QStringLiteral("menuSelection"));
        menuSelect_nodes_based_on_contiguity = new QMenu(menuSelection);
        menuSelect_nodes_based_on_contiguity->setObjectName(QStringLiteral("menuSelect_nodes_based_on_contiguity"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/icons/contiguity.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuSelect_nodes_based_on_contiguity->setIcon(icon18);
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuOutput = new QMenu(menuBar);
        menuOutput->setObjectName(QStringLiteral("menuOutput"));
        menuManipulate = new QMenu(menuBar);
        menuManipulate->setObjectName(QStringLiteral("menuManipulate"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(controlsScrollArea, graphScopeComboBox);
        QWidget::setTabOrder(graphScopeComboBox, startingNodesLineEdit);
        QWidget::setTabOrder(startingNodesLineEdit, startingNodesExactMatchRadioButton);
        QWidget::setTabOrder(startingNodesExactMatchRadioButton, startingNodesPartialMatchRadioButton);
        QWidget::setTabOrder(startingNodesPartialMatchRadioButton, nodeDistanceSpinBox);
        QWidget::setTabOrder(nodeDistanceSpinBox, singleNodesRadioButton);
        QWidget::setTabOrder(singleNodesRadioButton, doubleNodesRadioButton);
        QWidget::setTabOrder(doubleNodesRadioButton, drawGraphButton);
        QWidget::setTabOrder(drawGraphButton, zoomSpinBox);
        QWidget::setTabOrder(zoomSpinBox, nodeWidthSpinBox);
        QWidget::setTabOrder(nodeWidthSpinBox, coloursComboBox);
        QWidget::setTabOrder(coloursComboBox, contiguityButton);
        QWidget::setTabOrder(contiguityButton, nodeCustomLabelsCheckBox);
        QWidget::setTabOrder(nodeCustomLabelsCheckBox, nodeNamesCheckBox);
        QWidget::setTabOrder(nodeNamesCheckBox, nodeLengthsCheckBox);
        QWidget::setTabOrder(nodeLengthsCheckBox, nodeDepthCheckBox);
        QWidget::setTabOrder(nodeDepthCheckBox, blastHitsCheckBox);
        QWidget::setTabOrder(blastHitsCheckBox, fontButton);
        QWidget::setTabOrder(fontButton, textOutlineCheckBox);
        QWidget::setTabOrder(textOutlineCheckBox, blastSearchButton);
        QWidget::setTabOrder(blastSearchButton, blastQueryComboBox);
        QWidget::setTabOrder(blastQueryComboBox, selectionScrollArea);
        QWidget::setTabOrder(selectionScrollArea, selectionSearchNodesLineEdit);
        QWidget::setTabOrder(selectionSearchNodesLineEdit, selectionSearchNodesExactMatchRadioButton);
        QWidget::setTabOrder(selectionSearchNodesExactMatchRadioButton, selectionSearchNodesPartialMatchRadioButton);
        QWidget::setTabOrder(selectionSearchNodesPartialMatchRadioButton, selectNodesButton);
        QWidget::setTabOrder(selectNodesButton, selectedNodesTextEdit);
        QWidget::setTabOrder(selectedNodesTextEdit, setNodeCustomColourButton);
        QWidget::setTabOrder(setNodeCustomColourButton, setNodeCustomLabelButton);
        QWidget::setTabOrder(setNodeCustomLabelButton, selectedEdgesTextEdit);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuManipulate->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuSelection->menuAction());
        menuBar->addAction(menuOutput->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionLoad_graph);
        menuFile->addAction(actionLoad_CSV);
        menuFile->addSeparator();
        menuFile->addAction(actionSave_image_current_view);
        menuFile->addAction(actionSave_image_entire_scene);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuTools->addAction(actionSettings);
        menuView->addAction(actionControls_panel);
        menuView->addAction(actionSelection_panel);
        menuSelection->addAction(actionSelect_all);
        menuSelection->addAction(actionSelect_none);
        menuSelection->addAction(actionInvert_selection);
        menuSelection->addSeparator();
        menuSelection->addAction(actionBring_selected_nodes_to_front);
        menuSelection->addAction(actionZoom_to_selection);
        menuSelection->addSeparator();
        menuSelection->addAction(actionSelect_nodes_with_BLAST_hits);
        menuSelection->addAction(menuSelect_nodes_based_on_contiguity->menuAction());
        menuSelect_nodes_based_on_contiguity->addAction(actionSelect_contiguous_nodes);
        menuSelect_nodes_based_on_contiguity->addAction(actionSelect_possibly_contiguous_nodes);
        menuSelect_nodes_based_on_contiguity->addAction(actionSelect_not_contiguous_nodes);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionBandage_online_help);
        menuOutput->addAction(actionCopy_selected_node_sequences_to_clipboard);
        menuOutput->addAction(actionSave_selected_node_sequences_to_FASTA);
        menuOutput->addSeparator();
        menuOutput->addAction(actionCopy_selected_node_path_to_clipboard);
        menuOutput->addAction(actionSave_selected_node_path_to_FASTA);
        menuOutput->addAction(actionSpecify_exact_path_for_copy_save);
        menuOutput->addSeparator();
        menuOutput->addAction(actionSave_entire_graph_to_GFA);
        menuOutput->addAction(actionSave_visible_graph_to_GFA);
        menuOutput->addSeparator();
        menuOutput->addAction(actionSave_entire_graph_to_FASTA);
        menuOutput->addAction(actionSave_entire_graph_to_FASTA_only_positive_nodes);
        menuOutput->addSeparator();
        menuOutput->addAction(actionWeb_BLAST_selected_nodes);
        menuManipulate->addAction(actionHide_selected_nodes);
        menuManipulate->addSeparator();
        menuManipulate->addAction(actionRemove_selection_from_graph);
        menuManipulate->addAction(actionDuplicate_selected_nodes);
        menuManipulate->addAction(actionMerge_selected_nodes);
        menuManipulate->addAction(actionMerge_all_possible_nodes);
        menuManipulate->addSeparator();
        menuManipulate->addAction(actionChange_node_name);
        menuManipulate->addAction(actionChange_node_depth);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Bandage", nullptr));
        actionLoad_graph->setText(QApplication::translate("MainWindow", "Load graph", nullptr));
#ifndef QT_NO_SHORTCUT
        actionLoad_graph->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave_image_current_view->setText(QApplication::translate("MainWindow", "Save image (current view)", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", nullptr));
        actionAbout->setText(QApplication::translate("MainWindow", "About", nullptr));
        actionSave_image_entire_scene->setText(QApplication::translate("MainWindow", "Save image (entire scene)", nullptr));
        actionControls_panel->setText(QApplication::translate("MainWindow", "Controls panel", nullptr));
        actionSelection_panel->setText(QApplication::translate("MainWindow", "Selection panel", nullptr));
        actionBring_selected_nodes_to_front->setText(QApplication::translate("MainWindow", "Bring selected nodes to front", nullptr));
#ifndef QT_NO_TOOLTIP
        actionBring_selected_nodes_to_front->setToolTip(QApplication::translate("MainWindow", "Bring selected nodes to front", nullptr));
#endif // QT_NO_TOOLTIP
        actionSelect_nodes_with_BLAST_hits->setText(QApplication::translate("MainWindow", "Select nodes with BLAST hits", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSelect_nodes_with_BLAST_hits->setToolTip(QApplication::translate("MainWindow", "Select nodes with BLAST hits", nullptr));
#endif // QT_NO_TOOLTIP
        actionSelect_all->setText(QApplication::translate("MainWindow", "Select all", nullptr));
        actionInvert_selection->setText(QApplication::translate("MainWindow", "Invert selection", nullptr));
        actionCopy_selected_node_sequences_to_clipboard->setText(QApplication::translate("MainWindow", "Copy selected node sequences to clipboard", nullptr));
#ifndef QT_NO_TOOLTIP
        actionCopy_selected_node_sequences_to_clipboard->setToolTip(QApplication::translate("MainWindow", "Copy selected node sequences to clipboard", nullptr));
#endif // QT_NO_TOOLTIP
        actionSave_selected_node_sequences_to_FASTA->setText(QApplication::translate("MainWindow", "Save selected node sequences to FASTA", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSave_selected_node_sequences_to_FASTA->setToolTip(QApplication::translate("MainWindow", "Save selected node sequences to FASTA", nullptr));
#endif // QT_NO_TOOLTIP
        actionSelect_none->setText(QApplication::translate("MainWindow", "Select none", nullptr));
        actionZoom_to_selection->setText(QApplication::translate("MainWindow", "Zoom to fit selection", nullptr));
        actionSelect_possibly_contiguous_nodes->setText(QApplication::translate("MainWindow", "Select possibly contiguous nodes", nullptr));
        actionSelect_contiguous_nodes->setText(QApplication::translate("MainWindow", "Select contiguous nodes", nullptr));
        actionSelect_not_contiguous_nodes->setText(QApplication::translate("MainWindow", "Select not contiguous nodes", nullptr));
        actionBandage_online_help->setText(QApplication::translate("MainWindow", "Bandage online help", nullptr));
#ifndef QT_NO_TOOLTIP
        actionBandage_online_help->setToolTip(QApplication::translate("MainWindow", "Bandage online help", nullptr));
#endif // QT_NO_TOOLTIP
        actionCopy_selected_node_path_to_clipboard->setText(QApplication::translate("MainWindow", "Copy selected path sequence to clipboard", nullptr));
#ifndef QT_NO_TOOLTIP
        actionCopy_selected_node_path_to_clipboard->setToolTip(QApplication::translate("MainWindow", "Copy selected path sequence to clipboard", nullptr));
#endif // QT_NO_TOOLTIP
        actionSave_selected_node_path_to_FASTA->setText(QApplication::translate("MainWindow", "Save selected path sequence to FASTA", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSave_selected_node_path_to_FASTA->setToolTip(QApplication::translate("MainWindow", "Save selected path sequence to FASTA", nullptr));
#endif // QT_NO_TOOLTIP
        actionSpecify_exact_path_for_copy_save->setText(QApplication::translate("MainWindow", "Specify exact path for copy/save", nullptr));
        actionLoad_CSV->setText(QApplication::translate("MainWindow", "Load CSV data", nullptr));
#ifndef QT_NO_TOOLTIP
        actionLoad_CSV->setToolTip(QApplication::translate("MainWindow", "Load CSV label data", nullptr));
#endif // QT_NO_TOOLTIP
        actionSave_entire_graph_to_FASTA->setText(QApplication::translate("MainWindow", "Save entire graph to FASTA (both positive and negative nodes)", nullptr));
        actionSave_entire_graph_to_FASTA_only_positive_nodes->setText(QApplication::translate("MainWindow", "Save entire graph to FASTA (only positive nodes)", nullptr));
        actionWeb_BLAST_selected_nodes->setText(QApplication::translate("MainWindow", "Web BLAST selected nodes", nullptr));
        actionHide_selected_nodes->setText(QApplication::translate("MainWindow", "Hide selected nodes", nullptr));
#ifndef QT_NO_SHORTCUT
        actionHide_selected_nodes->setShortcut(QApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_NO_SHORTCUT
        actionRemove_selection_from_graph->setText(QApplication::translate("MainWindow", "Remove selection from graph", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRemove_selection_from_graph->setShortcut(QApplication::translate("MainWindow", "Shift+Del", nullptr));
#endif // QT_NO_SHORTCUT
        actionDuplicate_selected_nodes->setText(QApplication::translate("MainWindow", "Duplicate selected nodes", nullptr));
#ifndef QT_NO_SHORTCUT
        actionDuplicate_selected_nodes->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_NO_SHORTCUT
        actionMerge_selected_nodes->setText(QApplication::translate("MainWindow", "Merge selected nodes", nullptr));
#ifndef QT_NO_SHORTCUT
        actionMerge_selected_nodes->setShortcut(QApplication::translate("MainWindow", "Ctrl+M", nullptr));
#endif // QT_NO_SHORTCUT
        actionMerge_all_possible_nodes->setText(QApplication::translate("MainWindow", "Merge all possible nodes", nullptr));
#ifndef QT_NO_SHORTCUT
        actionMerge_all_possible_nodes->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+M", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave_entire_graph_to_GFA->setText(QApplication::translate("MainWindow", "Save entire graph to GFA", nullptr));
        actionSave_visible_graph_to_GFA->setText(QApplication::translate("MainWindow", "Save visible graph to GFA", nullptr));
        actionChange_node_name->setText(QApplication::translate("MainWindow", "Change node name", nullptr));
        actionChange_node_depth->setText(QApplication::translate("MainWindow", "Change node depth", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Edges:", nullptr));
        edgeCountLabel->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Total length:", nullptr));
        totalLengthLabel->setText(QApplication::translate("MainWindow", "0", nullptr));
        nodeCountLabel->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Nodes:", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Graph information", nullptr));
        moreInfoButton->setText(QApplication::translate("MainWindow", "More info", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Graph drawing", nullptr));
        startingNodesExactMatchRadioButton->setText(QApplication::translate("MainWindow", "Exact", nullptr));
        startingNodesPartialMatchRadioButton->setText(QApplication::translate("MainWindow", "Partial", nullptr));
        singleNodesRadioButton->setText(QApplication::translate("MainWindow", "Single", nullptr));
        doubleNodesRadioButton->setText(QApplication::translate("MainWindow", "Double", nullptr));
        drawGraphButton->setText(QApplication::translate("MainWindow", "Draw graph", nullptr));
        nodeStyleLabel->setText(QApplication::translate("MainWindow", "Style:", nullptr));
        startingNodesLabel->setText(QApplication::translate("MainWindow", "Node(s):", nullptr));
        graphScopeComboBox->setItemText(0, QApplication::translate("MainWindow", "Entire graph", nullptr));
        graphScopeComboBox->setItemText(1, QApplication::translate("MainWindow", "Around nodes", nullptr));
        graphScopeComboBox->setItemText(2, QApplication::translate("MainWindow", "Around BLAST hits", nullptr));
        graphScopeComboBox->setItemText(3, QApplication::translate("MainWindow", "Depth range", nullptr));

        graphScopeLabel->setText(QApplication::translate("MainWindow", "Scope:", nullptr));
        nodeDistanceLabel->setText(QApplication::translate("MainWindow", "Distance:", nullptr));
        startingNodesMatchTypeLabel->setText(QApplication::translate("MainWindow", "Match:", nullptr));
        minDepthLabel->setText(QApplication::translate("MainWindow", "Min:", nullptr));
        maxDepthLabel->setText(QApplication::translate("MainWindow", "Max:", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Graph display", nullptr));
        zoomSpinBox->setSuffix(QApplication::translate("MainWindow", "%", nullptr));
        contiguityButton->setText(QApplication::translate("MainWindow", "Determine contiguity", nullptr));
        coloursComboBox->setItemText(0, QApplication::translate("MainWindow", "Random colours", nullptr));
        coloursComboBox->setItemText(1, QApplication::translate("MainWindow", "Uniform colour", nullptr));
        coloursComboBox->setItemText(2, QApplication::translate("MainWindow", "Colour by depth", nullptr));
        coloursComboBox->setItemText(3, QApplication::translate("MainWindow", "BLAST hits (solid)", nullptr));
        coloursComboBox->setItemText(4, QApplication::translate("MainWindow", "BLAST hits (rainbow)", nullptr));
        coloursComboBox->setItemText(5, QApplication::translate("MainWindow", "Colour by contiguity", nullptr));
        coloursComboBox->setItemText(6, QApplication::translate("MainWindow", "Custom colours", nullptr));

        label_13->setText(QApplication::translate("MainWindow", "Zoom:", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Node width:", nullptr));
        nodeWidthSpinBox->setSuffix(QString());
        nodeLabelsG->setText(QApplication::translate("MainWindow", "Node labels", nullptr));
        fontButton->setText(QApplication::translate("MainWindow", "Font", nullptr));
        textOutlineCheckBox->setText(QApplication::translate("MainWindow", "Text outline", nullptr));
        nodeCustomLabelsCheckBox->setText(QApplication::translate("MainWindow", "Custom", nullptr));
        nodeNamesCheckBox->setText(QApplication::translate("MainWindow", "Name", nullptr));
        nodeLengthsCheckBox->setText(QApplication::translate("MainWindow", "Length", nullptr));
        nodeDepthCheckBox->setText(QApplication::translate("MainWindow", "Depth", nullptr));
        blastHitsCheckBox->setText(QApplication::translate("MainWindow", "BLAST hits", nullptr));
        csvCheckBox->setText(QApplication::translate("MainWindow", "CSV data:", nullptr));
        nodeLabelsG_2->setText(QApplication::translate("MainWindow", "BLAST", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Query:", nullptr));
        blastQueryComboBox->setItemText(0, QApplication::translate("MainWindow", "none", nullptr));

        blastSearchButton->setText(QApplication::translate("MainWindow", "Create/view BLAST search", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "Find nodes", nullptr));
        selectionSearchNodesExactMatchRadioButton->setText(QApplication::translate("MainWindow", "Exact", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Node(s):", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "Match:", nullptr));
        selectionSearchNodesPartialMatchRadioButton->setText(QApplication::translate("MainWindow", "Partial", nullptr));
        selectNodesButton->setText(QApplication::translate("MainWindow", "Find node(s)", nullptr));
        selectedNodesTitleLabel->setText(QApplication::translate("MainWindow", "Selected nodes", nullptr));
        selectedNodesLengthLabel->setText(QApplication::translate("MainWindow", "Total length:", nullptr));
        selectedNodesDepthLabel->setText(QApplication::translate("MainWindow", "Mean depth:", nullptr));
#ifndef QT_NO_TOOLTIP
        setNodeCustomLabelButton->setToolTip(QApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_NO_TOOLTIP
        setNodeCustomLabelButton->setText(QApplication::translate("MainWindow", "Set label", nullptr));
#ifndef QT_NO_TOOLTIP
        setNodeCustomColourButton->setToolTip(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_TOOLTIP
        setNodeCustomColourButton->setText(QApplication::translate("MainWindow", "Set colour", nullptr));
        selectedEdgesTitleLabel->setText(QApplication::translate("MainWindow", "Selected edges", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", nullptr));
        menuView->setTitle(QApplication::translate("MainWindow", "View", nullptr));
        menuSelection->setTitle(QApplication::translate("MainWindow", "Select", nullptr));
        menuSelect_nodes_based_on_contiguity->setTitle(QApplication::translate("MainWindow", "Select nodes based on contiguity", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        menuOutput->setTitle(QApplication::translate("MainWindow", "Output", nullptr));
        menuManipulate->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
