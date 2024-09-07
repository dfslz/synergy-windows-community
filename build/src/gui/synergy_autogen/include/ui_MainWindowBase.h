/********************************************************************************
** Form generated from reading UI file 'MainWindowBase.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWBASE_H
#define UI_MAINWINDOWBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "gui/widgets/ClientStateLabel.h"
#include "gui/widgets/ServerStateLabel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindowBase
{
public:
    QAction *m_pActionAbout;
    QAction *m_pActionHelp;
    QAction *m_pActionQuit;
    QAction *m_pActionStartCore;
    QAction *m_pActionStopCore;
    QAction *m_pActionMinimize;
    QAction *m_pActionRestore;
    QAction *m_pActionSave;
    QAction *m_pActionSettings;
    QAction *m_pActionActivate;
    QAction *m_pActionTestFatalError;
    QAction *m_pActionTestCriticalError;
    QAction *m_pActionClearSettings;
    QWidget *m_pWidgetTopLevel;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *m_layoutName;
    QLabel *m_pLabelComputerName;
    QSpacerItem *m_pSpacerUpdate;
    QLabel *m_pLabelUpdate;
    QLabel *m_pLabelIpAddresses;
    QWidget *m_pWidgetModes;
    QHBoxLayout *horizontalLayout_8;
    QGroupBox *m_pGroupServer;
    QVBoxLayout *verticalLayout;
    QWidget *m_pWidgetServerRadio;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *m_pRadioGroupServer;
    QLabel *label;
    QWidget *m_pWidgetServer;
    QVBoxLayout *m_pLayoutServer;
    QWidget *m_pWidgetServerInput;
    QVBoxLayout *m_pLayoutServerInverse;
    QLabel *m_pLabelClientIp;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *m_pLineEditClientIp;
    QPushButton *m_pButtonConnectToClient;
    synergy::gui::widgets::ServerStateLabel *m_pLabelServerState;
    QLabel *m_pLabelFingerprint;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *spacer_2;
    QPushButton *m_pButtonConfigureServer;
    QGroupBox *m_pGroupClient;
    QVBoxLayout *verticalLayout_5;
    QWidget *m_pWidgetClientRadio;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *m_pRadioGroupClient;
    QLabel *label_2;
    QWidget *m_pWidgetClientInput;
    QVBoxLayout *m_pLayoutClient;
    QLabel *m_pLabelServerName;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *m_pLineEditHostname;
    QPushButton *m_pButtonConnect;
    synergy::gui::widgets::ClientStateLabel *m_pLabelClientState;
    QSpacerItem *verticalSpacer;
    QGroupBox *m_pGroupLog;
    QVBoxLayout *verticalLayout_4;
    QPlainTextEdit *m_pLogOutput;
    QHBoxLayout *m_pLayoutActions;
    QLabel *m_pLabelPadlock;
    QLabel *m_pStatusLabel;
    QSpacerItem *spacer;
    QLabel *m_pLabelNotice;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_pButtonApply;
    QPushButton *m_pButtonToggleStart;

    void setupUi(QMainWindow *MainWindowBase)
    {
        if (MainWindowBase->objectName().isEmpty())
            MainWindowBase->setObjectName("MainWindowBase");
        MainWindowBase->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindowBase->sizePolicy().hasHeightForWidth());
        MainWindowBase->setSizePolicy(sizePolicy);
        MainWindowBase->setMinimumSize(QSize(750, 550));
        m_pActionAbout = new QAction(MainWindowBase);
        m_pActionAbout->setObjectName("m_pActionAbout");
#if QT_CONFIG(shortcut)
        m_pActionAbout->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        m_pActionHelp = new QAction(MainWindowBase);
        m_pActionHelp->setObjectName("m_pActionHelp");
#if QT_CONFIG(shortcut)
        m_pActionHelp->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        m_pActionQuit = new QAction(MainWindowBase);
        m_pActionQuit->setObjectName("m_pActionQuit");
#if QT_CONFIG(shortcut)
        m_pActionQuit->setShortcut(QString::fromUtf8("Ctrl+Q"));
#endif // QT_CONFIG(shortcut)
        m_pActionStartCore = new QAction(MainWindowBase);
        m_pActionStartCore->setObjectName("m_pActionStartCore");
        m_pActionStartCore->setEnabled(false);
        m_pActionStopCore = new QAction(MainWindowBase);
        m_pActionStopCore->setObjectName("m_pActionStopCore");
        m_pActionStopCore->setEnabled(false);
        m_pActionMinimize = new QAction(MainWindowBase);
        m_pActionMinimize->setObjectName("m_pActionMinimize");
#if QT_CONFIG(shortcut)
        m_pActionMinimize->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        m_pActionRestore = new QAction(MainWindowBase);
        m_pActionRestore->setObjectName("m_pActionRestore");
#if QT_CONFIG(shortcut)
        m_pActionRestore->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        m_pActionSave = new QAction(MainWindowBase);
        m_pActionSave->setObjectName("m_pActionSave");
#if QT_CONFIG(shortcut)
        m_pActionSave->setShortcut(QString::fromUtf8("Ctrl+Alt+S"));
#endif // QT_CONFIG(shortcut)
        m_pActionSettings = new QAction(MainWindowBase);
        m_pActionSettings->setObjectName("m_pActionSettings");
#if QT_CONFIG(shortcut)
        m_pActionSettings->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        m_pActionActivate = new QAction(MainWindowBase);
        m_pActionActivate->setObjectName("m_pActionActivate");
        m_pActionTestFatalError = new QAction(MainWindowBase);
        m_pActionTestFatalError->setObjectName("m_pActionTestFatalError");
        m_pActionTestFatalError->setMenuRole(QAction::TextHeuristicRole);
        m_pActionTestCriticalError = new QAction(MainWindowBase);
        m_pActionTestCriticalError->setObjectName("m_pActionTestCriticalError");
        m_pActionTestCriticalError->setMenuRole(QAction::TextHeuristicRole);
        m_pActionClearSettings = new QAction(MainWindowBase);
        m_pActionClearSettings->setObjectName("m_pActionClearSettings");
        m_pActionClearSettings->setMenuRole(QAction::TextHeuristicRole);
        m_pWidgetTopLevel = new QWidget(MainWindowBase);
        m_pWidgetTopLevel->setObjectName("m_pWidgetTopLevel");
        verticalLayout_7 = new QVBoxLayout(m_pWidgetTopLevel);
        verticalLayout_7->setSpacing(10);
        verticalLayout_7->setObjectName("verticalLayout_7");
        m_layoutName = new QHBoxLayout();
        m_layoutName->setObjectName("m_layoutName");
        m_pLabelComputerName = new QLabel(m_pWidgetTopLevel);
        m_pLabelComputerName->setObjectName("m_pLabelComputerName");
        m_pLabelComputerName->setText(QString::fromUtf8("This computer's name:"));

        m_layoutName->addWidget(m_pLabelComputerName);

        m_pSpacerUpdate = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        m_layoutName->addItem(m_pSpacerUpdate);

        m_pLabelUpdate = new QLabel(m_pWidgetTopLevel);
        m_pLabelUpdate->setObjectName("m_pLabelUpdate");
        m_pLabelUpdate->setText(QString::fromUtf8("m_pLabelUpdate"));
        m_pLabelUpdate->setOpenExternalLinks(true);

        m_layoutName->addWidget(m_pLabelUpdate);


        verticalLayout_7->addLayout(m_layoutName);

        m_pLabelIpAddresses = new QLabel(m_pWidgetTopLevel);
        m_pLabelIpAddresses->setObjectName("m_pLabelIpAddresses");
        m_pLabelIpAddresses->setText(QString::fromUtf8("This computer's IP addresses:"));

        verticalLayout_7->addWidget(m_pLabelIpAddresses);

        m_pWidgetModes = new QWidget(m_pWidgetTopLevel);
        m_pWidgetModes->setObjectName("m_pWidgetModes");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_pWidgetModes->sizePolicy().hasHeightForWidth());
        m_pWidgetModes->setSizePolicy(sizePolicy1);
        horizontalLayout_8 = new QHBoxLayout(m_pWidgetModes);
        horizontalLayout_8->setSpacing(20);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        m_pGroupServer = new QGroupBox(m_pWidgetModes);
        m_pGroupServer->setObjectName("m_pGroupServer");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_pGroupServer->sizePolicy().hasHeightForWidth());
        m_pGroupServer->setSizePolicy(sizePolicy2);
        verticalLayout = new QVBoxLayout(m_pGroupServer);
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName("verticalLayout");
        m_pWidgetServerRadio = new QWidget(m_pGroupServer);
        m_pWidgetServerRadio->setObjectName("m_pWidgetServerRadio");
        sizePolicy1.setHeightForWidth(m_pWidgetServerRadio->sizePolicy().hasHeightForWidth());
        m_pWidgetServerRadio->setSizePolicy(sizePolicy1);
        verticalLayout_3 = new QVBoxLayout(m_pWidgetServerRadio);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        m_pRadioGroupServer = new QRadioButton(m_pWidgetServerRadio);
        m_pRadioGroupServer->setObjectName("m_pRadioGroupServer");

        verticalLayout_3->addWidget(m_pRadioGroupServer);

        label = new QLabel(m_pWidgetServerRadio);
        label->setObjectName("label");
        label->setIndent(20);

        verticalLayout_3->addWidget(label);


        verticalLayout->addWidget(m_pWidgetServerRadio, 0, Qt::AlignTop);

        m_pWidgetServer = new QWidget(m_pGroupServer);
        m_pWidgetServer->setObjectName("m_pWidgetServer");
        m_pLayoutServer = new QVBoxLayout(m_pWidgetServer);
        m_pLayoutServer->setSpacing(15);
        m_pLayoutServer->setObjectName("m_pLayoutServer");
        m_pLayoutServer->setContentsMargins(0, 0, 0, 0);
        m_pWidgetServerInput = new QWidget(m_pWidgetServer);
        m_pWidgetServerInput->setObjectName("m_pWidgetServerInput");
        m_pLayoutServerInverse = new QVBoxLayout(m_pWidgetServerInput);
        m_pLayoutServerInverse->setSpacing(15);
        m_pLayoutServerInverse->setObjectName("m_pLayoutServerInverse");
        m_pLayoutServerInverse->setContentsMargins(0, 0, 0, 0);
        m_pLabelClientIp = new QLabel(m_pWidgetServerInput);
        m_pLabelClientIp->setObjectName("m_pLabelClientIp");
        m_pLabelClientIp->setIndent(20);

        m_pLayoutServerInverse->addWidget(m_pLabelClientIp);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(20, -1, -1, -1);
        m_pLineEditClientIp = new QLineEdit(m_pWidgetServerInput);
        m_pLineEditClientIp->setObjectName("m_pLineEditClientIp");

        horizontalLayout_3->addWidget(m_pLineEditClientIp);

        m_pButtonConnectToClient = new QPushButton(m_pWidgetServerInput);
        m_pButtonConnectToClient->setObjectName("m_pButtonConnectToClient");

        horizontalLayout_3->addWidget(m_pButtonConnectToClient);


        m_pLayoutServerInverse->addLayout(horizontalLayout_3);


        m_pLayoutServer->addWidget(m_pWidgetServerInput);

        m_pLabelServerState = new synergy::gui::widgets::ServerStateLabel(m_pWidgetServer);
        m_pLabelServerState->setObjectName("m_pLabelServerState");
        m_pLabelServerState->setIndent(20);

        m_pLayoutServer->addWidget(m_pLabelServerState);

        m_pLabelFingerprint = new QLabel(m_pWidgetServer);
        m_pLabelFingerprint->setObjectName("m_pLabelFingerprint");
        m_pLabelFingerprint->setTextFormat(Qt::RichText);
        m_pLabelFingerprint->setIndent(20);

        m_pLayoutServer->addWidget(m_pLabelFingerprint);

        verticalSpacer_2 = new QSpacerItem(20, 1, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        m_pLayoutServer->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        spacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(spacer_2);

        m_pButtonConfigureServer = new QPushButton(m_pWidgetServer);
        m_pButtonConfigureServer->setObjectName("m_pButtonConfigureServer");

        horizontalLayout_4->addWidget(m_pButtonConfigureServer);


        m_pLayoutServer->addLayout(horizontalLayout_4);


        verticalLayout->addWidget(m_pWidgetServer, 0, Qt::AlignTop);


        horizontalLayout_8->addWidget(m_pGroupServer);

        m_pGroupClient = new QGroupBox(m_pWidgetModes);
        m_pGroupClient->setObjectName("m_pGroupClient");
        sizePolicy2.setHeightForWidth(m_pGroupClient->sizePolicy().hasHeightForWidth());
        m_pGroupClient->setSizePolicy(sizePolicy2);
        verticalLayout_5 = new QVBoxLayout(m_pGroupClient);
        verticalLayout_5->setSpacing(15);
        verticalLayout_5->setObjectName("verticalLayout_5");
        m_pWidgetClientRadio = new QWidget(m_pGroupClient);
        m_pWidgetClientRadio->setObjectName("m_pWidgetClientRadio");
        sizePolicy1.setHeightForWidth(m_pWidgetClientRadio->sizePolicy().hasHeightForWidth());
        m_pWidgetClientRadio->setSizePolicy(sizePolicy1);
        verticalLayout_6 = new QVBoxLayout(m_pWidgetClientRadio);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        m_pRadioGroupClient = new QRadioButton(m_pWidgetClientRadio);
        m_pRadioGroupClient->setObjectName("m_pRadioGroupClient");

        verticalLayout_6->addWidget(m_pRadioGroupClient);

        label_2 = new QLabel(m_pWidgetClientRadio);
        label_2->setObjectName("label_2");
        label_2->setIndent(20);

        verticalLayout_6->addWidget(label_2);


        verticalLayout_5->addWidget(m_pWidgetClientRadio, 0, Qt::AlignTop);

        m_pWidgetClientInput = new QWidget(m_pGroupClient);
        m_pWidgetClientInput->setObjectName("m_pWidgetClientInput");
        m_pLayoutClient = new QVBoxLayout(m_pWidgetClientInput);
        m_pLayoutClient->setSpacing(15);
        m_pLayoutClient->setObjectName("m_pLayoutClient");
        m_pLayoutClient->setContentsMargins(0, 0, 0, 0);
        m_pLabelServerName = new QLabel(m_pWidgetClientInput);
        m_pLabelServerName->setObjectName("m_pLabelServerName");
        m_pLabelServerName->setIndent(20);

        m_pLayoutClient->addWidget(m_pLabelServerName);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(20, -1, -1, -1);
        m_pLineEditHostname = new QLineEdit(m_pWidgetClientInput);
        m_pLineEditHostname->setObjectName("m_pLineEditHostname");
        m_pLineEditHostname->setMinimumSize(QSize(0, 0));

        horizontalLayout_2->addWidget(m_pLineEditHostname);

        m_pButtonConnect = new QPushButton(m_pWidgetClientInput);
        m_pButtonConnect->setObjectName("m_pButtonConnect");

        horizontalLayout_2->addWidget(m_pButtonConnect);


        m_pLayoutClient->addLayout(horizontalLayout_2);

        m_pLabelClientState = new synergy::gui::widgets::ClientStateLabel(m_pWidgetClientInput);
        m_pLabelClientState->setObjectName("m_pLabelClientState");
        m_pLabelClientState->setIndent(20);

        m_pLayoutClient->addWidget(m_pLabelClientState);


        verticalLayout_5->addWidget(m_pWidgetClientInput, 0, Qt::AlignTop);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        horizontalLayout_8->addWidget(m_pGroupClient);


        verticalLayout_7->addWidget(m_pWidgetModes);

        m_pGroupLog = new QGroupBox(m_pWidgetTopLevel);
        m_pGroupLog->setObjectName("m_pGroupLog");
        m_pGroupLog->setMinimumSize(QSize(0, 0));
        verticalLayout_4 = new QVBoxLayout(m_pGroupLog);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(8, 8, 8, 8);
        m_pLogOutput = new QPlainTextEdit(m_pGroupLog);
        m_pLogOutput->setObjectName("m_pLogOutput");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(m_pLogOutput->sizePolicy().hasHeightForWidth());
        m_pLogOutput->setSizePolicy(sizePolicy3);
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier")});
        font.setKerning(true);
        m_pLogOutput->setFont(font);
        m_pLogOutput->setUndoRedoEnabled(false);
        m_pLogOutput->setLineWrapMode(QPlainTextEdit::NoWrap);
        m_pLogOutput->setReadOnly(true);
        m_pLogOutput->setMaximumBlockCount(10000);

        verticalLayout_4->addWidget(m_pLogOutput);


        verticalLayout_7->addWidget(m_pGroupLog);

        m_pLayoutActions = new QHBoxLayout();
        m_pLayoutActions->setSpacing(6);
        m_pLayoutActions->setObjectName("m_pLayoutActions");
        m_pLayoutActions->setSizeConstraint(QLayout::SetDefaultConstraint);
        m_pLabelPadlock = new QLabel(m_pWidgetTopLevel);
        m_pLabelPadlock->setObjectName("m_pLabelPadlock");
        m_pLabelPadlock->setEnabled(true);
        m_pLabelPadlock->setPixmap(QPixmap(QString::fromUtf8(":/res/icons/16x16/padlock.png")));

        m_pLayoutActions->addWidget(m_pLabelPadlock);

        m_pStatusLabel = new QLabel(m_pWidgetTopLevel);
        m_pStatusLabel->setObjectName("m_pStatusLabel");

        m_pLayoutActions->addWidget(m_pStatusLabel);

        spacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        m_pLayoutActions->addItem(spacer);

        m_pLabelNotice = new QLabel(m_pWidgetTopLevel);
        m_pLabelNotice->setObjectName("m_pLabelNotice");
        m_pLabelNotice->setAutoFillBackground(false);
        m_pLabelNotice->setText(QString::fromUtf8("m_pLabelNotice"));
        m_pLabelNotice->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        m_pLabelNotice->setMargin(0);
        m_pLabelNotice->setOpenExternalLinks(true);

        m_pLayoutActions->addWidget(m_pLabelNotice);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        m_pLayoutActions->addItem(horizontalSpacer);

        m_pButtonApply = new QPushButton(m_pWidgetTopLevel);
        m_pButtonApply->setObjectName("m_pButtonApply");
        m_pButtonApply->setEnabled(false);

        m_pLayoutActions->addWidget(m_pButtonApply);

        m_pButtonToggleStart = new QPushButton(m_pWidgetTopLevel);
        m_pButtonToggleStart->setObjectName("m_pButtonToggleStart");
        m_pButtonToggleStart->setEnabled(false);

        m_pLayoutActions->addWidget(m_pButtonToggleStart);


        verticalLayout_7->addLayout(m_pLayoutActions);

        MainWindowBase->setCentralWidget(m_pWidgetTopLevel);
        QWidget::setTabOrder(m_pRadioGroupServer, m_pRadioGroupClient);
        QWidget::setTabOrder(m_pRadioGroupClient, m_pLineEditClientIp);
        QWidget::setTabOrder(m_pLineEditClientIp, m_pButtonConnectToClient);
        QWidget::setTabOrder(m_pButtonConnectToClient, m_pButtonConfigureServer);
        QWidget::setTabOrder(m_pButtonConfigureServer, m_pLineEditHostname);
        QWidget::setTabOrder(m_pLineEditHostname, m_pButtonConnect);
        QWidget::setTabOrder(m_pButtonConnect, m_pLogOutput);
        QWidget::setTabOrder(m_pLogOutput, m_pButtonApply);
        QWidget::setTabOrder(m_pButtonApply, m_pButtonToggleStart);

        retranslateUi(MainWindowBase);
        QObject::connect(m_pButtonToggleStart, &QPushButton::clicked, m_pActionStartCore, qOverload<>(&QAction::trigger));

        QMetaObject::connectSlotsByName(MainWindowBase);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowBase)
    {
        MainWindowBase->setWindowTitle(QCoreApplication::translate("MainWindowBase", "Synergy", nullptr));
        m_pActionAbout->setText(QCoreApplication::translate("MainWindowBase", "&About Synergy...", nullptr));
        m_pActionHelp->setText(QCoreApplication::translate("MainWindowBase", "Visit &help site", nullptr));
        m_pActionQuit->setText(QCoreApplication::translate("MainWindowBase", "&Quit", nullptr));
#if QT_CONFIG(statustip)
        m_pActionQuit->setStatusTip(QCoreApplication::translate("MainWindowBase", "Quit", nullptr));
#endif // QT_CONFIG(statustip)
        m_pActionStartCore->setText(QCoreApplication::translate("MainWindowBase", "&Start", nullptr));
#if QT_CONFIG(statustip)
        m_pActionStartCore->setStatusTip(QCoreApplication::translate("MainWindowBase", "Run", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        m_pActionStartCore->setShortcut(QCoreApplication::translate("MainWindowBase", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        m_pActionStopCore->setText(QCoreApplication::translate("MainWindowBase", "S&top", nullptr));
#if QT_CONFIG(statustip)
        m_pActionStopCore->setStatusTip(QCoreApplication::translate("MainWindowBase", "Stop", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        m_pActionStopCore->setShortcut(QCoreApplication::translate("MainWindowBase", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        m_pActionMinimize->setText(QCoreApplication::translate("MainWindowBase", "&Hide", nullptr));
#if QT_CONFIG(tooltip)
        m_pActionMinimize->setToolTip(QCoreApplication::translate("MainWindowBase", "Hide", nullptr));
#endif // QT_CONFIG(tooltip)
        m_pActionRestore->setText(QCoreApplication::translate("MainWindowBase", "&Show", nullptr));
#if QT_CONFIG(tooltip)
        m_pActionRestore->setToolTip(QCoreApplication::translate("MainWindowBase", "Show", nullptr));
#endif // QT_CONFIG(tooltip)
        m_pActionSave->setText(QCoreApplication::translate("MainWindowBase", "Save configuration &as...", nullptr));
#if QT_CONFIG(statustip)
        m_pActionSave->setStatusTip(QCoreApplication::translate("MainWindowBase", "Save the interactively generated server configuration to a file.", nullptr));
#endif // QT_CONFIG(statustip)
        m_pActionSettings->setText(QCoreApplication::translate("MainWindowBase", "Preferences", nullptr));
#if QT_CONFIG(tooltip)
        m_pActionSettings->setToolTip(QCoreApplication::translate("MainWindowBase", "Preferences", nullptr));
#endif // QT_CONFIG(tooltip)
        m_pActionActivate->setText(QCoreApplication::translate("MainWindowBase", "Activate", nullptr));
#if QT_CONFIG(tooltip)
        m_pActionActivate->setToolTip(QCoreApplication::translate("MainWindowBase", "Activate", nullptr));
#endif // QT_CONFIG(tooltip)
        m_pActionTestFatalError->setText(QCoreApplication::translate("MainWindowBase", "Test fatal error", nullptr));
        m_pActionTestCriticalError->setText(QCoreApplication::translate("MainWindowBase", "Test critical error", nullptr));
        m_pActionClearSettings->setText(QCoreApplication::translate("MainWindowBase", "Clear settings", nullptr));
#if QT_CONFIG(tooltip)
        m_pLabelIpAddresses->setToolTip(QCoreApplication::translate("MainWindowBase", "<html><head/><body><p>The highlighted IP is the one we think you should use. The server listens on all IPs, so the other IPs may work as well.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        m_pRadioGroupServer->setText(QCoreApplication::translate("MainWindowBase", "Use this computer's keyboard and mouse", nullptr));
        label->setText(QCoreApplication::translate("MainWindowBase", "(make this computer the server)", nullptr));
        m_pLabelClientIp->setText(QCoreApplication::translate("MainWindowBase", "Client IP address or hostname:", nullptr));
        m_pButtonConnectToClient->setText(QCoreApplication::translate("MainWindowBase", "Connect", nullptr));
        m_pLabelServerState->setText(QCoreApplication::translate("MainWindowBase", "No clients connected", nullptr));
        m_pLabelFingerprint->setText(QCoreApplication::translate("MainWindowBase", "<html><head/><body><p>TLS enabled (<a href=\"#\"><span style=\" text-decoration: underline; color:#4285f4;\">fingerprint</span></a>)</p></body></html>", nullptr));
        m_pButtonConfigureServer->setText(QCoreApplication::translate("MainWindowBase", "&Configure", nullptr));
        m_pRadioGroupClient->setText(QCoreApplication::translate("MainWindowBase", "Use another computer\342\200\231s mouse and keyboard", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindowBase", "(make this computer the client)", nullptr));
        m_pLabelServerName->setText(QCoreApplication::translate("MainWindowBase", "Server IP address or hostname:", nullptr));
#if QT_CONFIG(tooltip)
        m_pLineEditHostname->setToolTip(QCoreApplication::translate("MainWindowBase", "Hostname or IP address of the server computer.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_pButtonConnect->setText(QCoreApplication::translate("MainWindowBase", "Connect", nullptr));
        m_pLabelClientState->setText(QCoreApplication::translate("MainWindowBase", "Connected to server", nullptr));
        m_pGroupLog->setTitle(QCoreApplication::translate("MainWindowBase", "Logs", nullptr));
        m_pLabelPadlock->setText(QString());
        m_pStatusLabel->setText(QCoreApplication::translate("MainWindowBase", "Ready", nullptr));
        m_pButtonApply->setText(QCoreApplication::translate("MainWindowBase", "&Apply", nullptr));
        m_pButtonToggleStart->setText(QCoreApplication::translate("MainWindowBase", "&Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowBase: public Ui_MainWindowBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWBASE_H
