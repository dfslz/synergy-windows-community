/********************************************************************************
** Form generated from reading UI file 'SettingsDialogBase.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOGBASE_H
#define UI_SETTINGSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialogBase
{
public:
    QVBoxLayout *verticalLayout_9;
    QTabWidget *m_pTabWidget;
    QWidget *m_pTabRegular;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *m_pGroupBasics;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *m_pLabelComputerName;
    QSpacerItem *horizontalSpacer;
    QLineEdit *m_pLineEditScreenName;
    QCheckBox *m_pCheckBoxPreventSleep;
    QCheckBox *m_pCheckBoxLanguageSync;
    QCheckBox *m_pCheckBoxScrollDirection;
    QGroupBox *m_pGroupApp;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *m_pCheckBoxCloseToTray;
    QCheckBox *m_pCheckBoxAutoHide;
    QGroupBox *m_pGroupSecurity;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *m_pCheckBoxEnableTls;
    QSpacerItem *horizontalSpacer_2;
    QLabel *m_pLabelTlsKeyLength;
    QComboBox *m_pComboBoxTlsKeyLength;
    QHBoxLayout *horizontalLayout_6;
    QLabel *m_pLabelTlsCert;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *m_pLineEditTlsCertPath;
    QPushButton *m_pPushButtonTlsCertPath;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *m_pPushButtonTlsRegenCert;
    QSpacerItem *verticalSpacer;
    QWidget *m_pTabAdvanced;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *m_pGroupNetworking;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *m_pLabel_20;
    QSpinBox *m_pSpinBoxPort;
    QLabel *m_pLabel_21;
    QLineEdit *m_pLineEditInterface;
    QCheckBox *m_pInvertConnection;
    QGroupBox *m_pGroupLogs;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *m_pCheckBoxLogToFile;
    QComboBox *m_pComboLogLevel;
    QLabel *m_pLabel_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *m_pLabelLogPath;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *m_pLineEditLogFilename;
    QPushButton *m_pButtonBrowseLog;
    QGroupBox *m_pGroupService;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *m_pLabelElevate;
    QComboBox *m_pComboElevate;
    QCheckBox *m_pCheckBoxServiceEnabled;
    QGroupBox *m_pGroupScope;
    QGridLayout *gridLayout_2;
    QRadioButton *m_pRadioSystemScope;
    QRadioButton *m_pRadioUserScope;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *m_pButtonBox;

    void setupUi(QDialog *SettingsDialogBase)
    {
        if (SettingsDialogBase->objectName().isEmpty())
            SettingsDialogBase->setObjectName("SettingsDialogBase");
        SettingsDialogBase->resize(550, 582);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SettingsDialogBase->sizePolicy().hasHeightForWidth());
        SettingsDialogBase->setSizePolicy(sizePolicy);
        verticalLayout_9 = new QVBoxLayout(SettingsDialogBase);
        verticalLayout_9->setSpacing(15);
        verticalLayout_9->setObjectName("verticalLayout_9");
        m_pTabWidget = new QTabWidget(SettingsDialogBase);
        m_pTabWidget->setObjectName("m_pTabWidget");
        m_pTabWidget->setTabPosition(QTabWidget::North);
        m_pTabRegular = new QWidget();
        m_pTabRegular->setObjectName("m_pTabRegular");
        verticalLayout_3 = new QVBoxLayout(m_pTabRegular);
        verticalLayout_3->setSpacing(15);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(-1, 15, -1, -1);
        m_pGroupBasics = new QGroupBox(m_pTabRegular);
        m_pGroupBasics->setObjectName("m_pGroupBasics");
        verticalLayout_2 = new QVBoxLayout(m_pGroupBasics);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        m_pLabelComputerName = new QLabel(m_pGroupBasics);
        m_pLabelComputerName->setObjectName("m_pLabelComputerName");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_pLabelComputerName->sizePolicy().hasHeightForWidth());
        m_pLabelComputerName->setSizePolicy(sizePolicy1);
        m_pLabelComputerName->setMinimumSize(QSize(75, 0));

        horizontalLayout->addWidget(m_pLabelComputerName);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_pLineEditScreenName = new QLineEdit(m_pGroupBasics);
        m_pLineEditScreenName->setObjectName("m_pLineEditScreenName");
        m_pLineEditScreenName->setEnabled(true);
        m_pLineEditScreenName->setMaxLength(255);

        horizontalLayout->addWidget(m_pLineEditScreenName);


        verticalLayout_2->addLayout(horizontalLayout);

        m_pCheckBoxPreventSleep = new QCheckBox(m_pGroupBasics);
        m_pCheckBoxPreventSleep->setObjectName("m_pCheckBoxPreventSleep");

        verticalLayout_2->addWidget(m_pCheckBoxPreventSleep);

        m_pCheckBoxLanguageSync = new QCheckBox(m_pGroupBasics);
        m_pCheckBoxLanguageSync->setObjectName("m_pCheckBoxLanguageSync");

        verticalLayout_2->addWidget(m_pCheckBoxLanguageSync);

        m_pCheckBoxScrollDirection = new QCheckBox(m_pGroupBasics);
        m_pCheckBoxScrollDirection->setObjectName("m_pCheckBoxScrollDirection");

        verticalLayout_2->addWidget(m_pCheckBoxScrollDirection);


        verticalLayout_3->addWidget(m_pGroupBasics, 0, Qt::AlignTop);

        m_pGroupApp = new QGroupBox(m_pTabRegular);
        m_pGroupApp->setObjectName("m_pGroupApp");
        verticalLayout_5 = new QVBoxLayout(m_pGroupApp);
        verticalLayout_5->setObjectName("verticalLayout_5");
        m_pCheckBoxCloseToTray = new QCheckBox(m_pGroupApp);
        m_pCheckBoxCloseToTray->setObjectName("m_pCheckBoxCloseToTray");

        verticalLayout_5->addWidget(m_pCheckBoxCloseToTray);

        m_pCheckBoxAutoHide = new QCheckBox(m_pGroupApp);
        m_pCheckBoxAutoHide->setObjectName("m_pCheckBoxAutoHide");

        verticalLayout_5->addWidget(m_pCheckBoxAutoHide);


        verticalLayout_3->addWidget(m_pGroupApp, 0, Qt::AlignTop);

        m_pGroupSecurity = new QGroupBox(m_pTabRegular);
        m_pGroupSecurity->setObjectName("m_pGroupSecurity");
        verticalLayout = new QVBoxLayout(m_pGroupSecurity);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, 9, -1, 9);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        m_pCheckBoxEnableTls = new QCheckBox(m_pGroupSecurity);
        m_pCheckBoxEnableTls->setObjectName("m_pCheckBoxEnableTls");
        m_pCheckBoxEnableTls->setEnabled(true);

        horizontalLayout_5->addWidget(m_pCheckBoxEnableTls);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        m_pLabelTlsKeyLength = new QLabel(m_pGroupSecurity);
        m_pLabelTlsKeyLength->setObjectName("m_pLabelTlsKeyLength");
        sizePolicy1.setHeightForWidth(m_pLabelTlsKeyLength->sizePolicy().hasHeightForWidth());
        m_pLabelTlsKeyLength->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(m_pLabelTlsKeyLength);

        m_pComboBoxTlsKeyLength = new QComboBox(m_pGroupSecurity);
        m_pComboBoxTlsKeyLength->addItem(QString());
        m_pComboBoxTlsKeyLength->addItem(QString());
        m_pComboBoxTlsKeyLength->addItem(QString());
        m_pComboBoxTlsKeyLength->setObjectName("m_pComboBoxTlsKeyLength");

        horizontalLayout_5->addWidget(m_pComboBoxTlsKeyLength);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        m_pLabelTlsCert = new QLabel(m_pGroupSecurity);
        m_pLabelTlsCert->setObjectName("m_pLabelTlsCert");
        sizePolicy1.setHeightForWidth(m_pLabelTlsCert->sizePolicy().hasHeightForWidth());
        m_pLabelTlsCert->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(m_pLabelTlsCert);

        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        m_pLineEditTlsCertPath = new QLineEdit(m_pGroupSecurity);
        m_pLineEditTlsCertPath->setObjectName("m_pLineEditTlsCertPath");
        m_pLineEditTlsCertPath->setMinimumSize(QSize(0, 0));

        horizontalLayout_6->addWidget(m_pLineEditTlsCertPath);

        m_pPushButtonTlsCertPath = new QPushButton(m_pGroupSecurity);
        m_pPushButtonTlsCertPath->setObjectName("m_pPushButtonTlsCertPath");
        m_pPushButtonTlsCertPath->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/icons/64x64/folder.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        m_pPushButtonTlsCertPath->setIcon(icon);
        m_pPushButtonTlsCertPath->setIconSize(QSize(20, 13));
        m_pPushButtonTlsCertPath->setFlat(true);

        horizontalLayout_6->addWidget(m_pPushButtonTlsCertPath);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        m_pPushButtonTlsRegenCert = new QPushButton(m_pGroupSecurity);
        m_pPushButtonTlsRegenCert->setObjectName("m_pPushButtonTlsRegenCert");

        horizontalLayout_7->addWidget(m_pPushButtonTlsRegenCert);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_3->addWidget(m_pGroupSecurity, 0, Qt::AlignTop);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        m_pTabWidget->addTab(m_pTabRegular, QString());
        m_pTabAdvanced = new QWidget();
        m_pTabAdvanced->setObjectName("m_pTabAdvanced");
        verticalLayout_8 = new QVBoxLayout(m_pTabAdvanced);
        verticalLayout_8->setSpacing(15);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(-1, 15, -1, -1);
        m_pGroupNetworking = new QGroupBox(m_pTabAdvanced);
        m_pGroupNetworking->setObjectName("m_pGroupNetworking");
        verticalLayout_4 = new QVBoxLayout(m_pGroupNetworking);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        m_pLabel_20 = new QLabel(m_pGroupNetworking);
        m_pLabel_20->setObjectName("m_pLabel_20");
        sizePolicy1.setHeightForWidth(m_pLabel_20->sizePolicy().hasHeightForWidth());
        m_pLabel_20->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(m_pLabel_20);

        m_pSpinBoxPort = new QSpinBox(m_pGroupNetworking);
        m_pSpinBoxPort->setObjectName("m_pSpinBoxPort");
        m_pSpinBoxPort->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_pSpinBoxPort->sizePolicy().hasHeightForWidth());
        m_pSpinBoxPort->setSizePolicy(sizePolicy2);
        m_pSpinBoxPort->setMaximum(65535);
        m_pSpinBoxPort->setValue(24800);

        horizontalLayout_2->addWidget(m_pSpinBoxPort);

        m_pLabel_21 = new QLabel(m_pGroupNetworking);
        m_pLabel_21->setObjectName("m_pLabel_21");
        sizePolicy1.setHeightForWidth(m_pLabel_21->sizePolicy().hasHeightForWidth());
        m_pLabel_21->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(m_pLabel_21);

        m_pLineEditInterface = new QLineEdit(m_pGroupNetworking);
        m_pLineEditInterface->setObjectName("m_pLineEditInterface");
        m_pLineEditInterface->setEnabled(true);

        horizontalLayout_2->addWidget(m_pLineEditInterface);


        verticalLayout_4->addLayout(horizontalLayout_2);

        m_pInvertConnection = new QCheckBox(m_pGroupNetworking);
        m_pInvertConnection->setObjectName("m_pInvertConnection");
        m_pInvertConnection->setEnabled(false);

        verticalLayout_4->addWidget(m_pInvertConnection);


        verticalLayout_8->addWidget(m_pGroupNetworking, 0, Qt::AlignTop);

        m_pGroupLogs = new QGroupBox(m_pTabAdvanced);
        m_pGroupLogs->setObjectName("m_pGroupLogs");
        gridLayout = new QGridLayout(m_pGroupLogs);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setVerticalSpacing(7);
        gridLayout->setContentsMargins(-1, 15, -1, 15);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        m_pCheckBoxLogToFile = new QCheckBox(m_pGroupLogs);
        m_pCheckBoxLogToFile->setObjectName("m_pCheckBoxLogToFile");

        gridLayout->addWidget(m_pCheckBoxLogToFile, 0, 0, 1, 1);

        m_pComboLogLevel = new QComboBox(m_pGroupLogs);
        m_pComboLogLevel->addItem(QString());
        m_pComboLogLevel->addItem(QString());
        m_pComboLogLevel->addItem(QString());
        m_pComboLogLevel->addItem(QString());
        m_pComboLogLevel->setObjectName("m_pComboLogLevel");

        gridLayout->addWidget(m_pComboLogLevel, 0, 3, 1, 1);

        m_pLabel_3 = new QLabel(m_pGroupLogs);
        m_pLabel_3->setObjectName("m_pLabel_3");
        sizePolicy1.setHeightForWidth(m_pLabel_3->sizePolicy().hasHeightForWidth());
        m_pLabel_3->setSizePolicy(sizePolicy1);
        m_pLabel_3->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(m_pLabel_3, 0, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        m_pLabelLogPath = new QLabel(m_pGroupLogs);
        m_pLabelLogPath->setObjectName("m_pLabelLogPath");
        sizePolicy1.setHeightForWidth(m_pLabelLogPath->sizePolicy().hasHeightForWidth());
        m_pLabelLogPath->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(m_pLabelLogPath);

        horizontalSpacer_7 = new QSpacerItem(30, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        m_pLineEditLogFilename = new QLineEdit(m_pGroupLogs);
        m_pLineEditLogFilename->setObjectName("m_pLineEditLogFilename");
        m_pLineEditLogFilename->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(m_pLineEditLogFilename->sizePolicy().hasHeightForWidth());
        m_pLineEditLogFilename->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(m_pLineEditLogFilename);

        m_pButtonBrowseLog = new QPushButton(m_pGroupLogs);
        m_pButtonBrowseLog->setObjectName("m_pButtonBrowseLog");
        m_pButtonBrowseLog->setEnabled(false);
        m_pButtonBrowseLog->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        m_pButtonBrowseLog->setIcon(icon);
        m_pButtonBrowseLog->setIconSize(QSize(20, 13));
        m_pButtonBrowseLog->setFlat(true);

        horizontalLayout_4->addWidget(m_pButtonBrowseLog);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 4);


        verticalLayout_8->addWidget(m_pGroupLogs, 0, Qt::AlignTop);

        m_pGroupService = new QGroupBox(m_pTabAdvanced);
        m_pGroupService->setObjectName("m_pGroupService");
        sizePolicy.setHeightForWidth(m_pGroupService->sizePolicy().hasHeightForWidth());
        m_pGroupService->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(m_pGroupService);
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        m_pLabelElevate = new QLabel(m_pGroupService);
        m_pLabelElevate->setObjectName("m_pLabelElevate");
        sizePolicy1.setHeightForWidth(m_pLabelElevate->sizePolicy().hasHeightForWidth());
        m_pLabelElevate->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(m_pLabelElevate);

        m_pComboElevate = new QComboBox(m_pGroupService);
        m_pComboElevate->addItem(QString());
        m_pComboElevate->addItem(QString());
        m_pComboElevate->addItem(QString());
        m_pComboElevate->setObjectName("m_pComboElevate");
        sizePolicy1.setHeightForWidth(m_pComboElevate->sizePolicy().hasHeightForWidth());
        m_pComboElevate->setSizePolicy(sizePolicy1);
        m_pComboElevate->setMinimumSize(QSize(0, 0));

        horizontalLayout_9->addWidget(m_pComboElevate);


        gridLayout_3->addLayout(horizontalLayout_9, 1, 0, 1, 1);

        m_pCheckBoxServiceEnabled = new QCheckBox(m_pGroupService);
        m_pCheckBoxServiceEnabled->setObjectName("m_pCheckBoxServiceEnabled");

        gridLayout_3->addWidget(m_pCheckBoxServiceEnabled, 0, 0, 1, 1);


        verticalLayout_8->addWidget(m_pGroupService, 0, Qt::AlignTop);

        m_pGroupScope = new QGroupBox(m_pTabAdvanced);
        m_pGroupScope->setObjectName("m_pGroupScope");
        gridLayout_2 = new QGridLayout(m_pGroupScope);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(-1, 5, -1, -1);
        m_pRadioSystemScope = new QRadioButton(m_pGroupScope);
        m_pRadioSystemScope->setObjectName("m_pRadioSystemScope");
        m_pRadioSystemScope->setChecked(false);

        gridLayout_2->addWidget(m_pRadioSystemScope, 0, 1, 1, 1);

        m_pRadioUserScope = new QRadioButton(m_pGroupScope);
        m_pRadioUserScope->setObjectName("m_pRadioUserScope");
        m_pRadioUserScope->setChecked(true);

        gridLayout_2->addWidget(m_pRadioUserScope, 0, 0, 1, 1);


        verticalLayout_8->addWidget(m_pGroupScope, 0, Qt::AlignTop);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_3);

        m_pTabWidget->addTab(m_pTabAdvanced, QString());

        verticalLayout_9->addWidget(m_pTabWidget, 0, Qt::AlignTop);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);

        m_pButtonBox = new QDialogButtonBox(SettingsDialogBase);
        m_pButtonBox->setObjectName("m_pButtonBox");
        m_pButtonBox->setOrientation(Qt::Horizontal);
        m_pButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        verticalLayout_9->addWidget(m_pButtonBox);

        QWidget::setTabOrder(m_pLineEditScreenName, m_pSpinBoxPort);
        QWidget::setTabOrder(m_pSpinBoxPort, m_pLineEditInterface);
        QWidget::setTabOrder(m_pLineEditInterface, m_pCheckBoxEnableTls);
        QWidget::setTabOrder(m_pCheckBoxEnableTls, m_pComboBoxTlsKeyLength);
        QWidget::setTabOrder(m_pComboBoxTlsKeyLength, m_pLineEditTlsCertPath);
        QWidget::setTabOrder(m_pLineEditTlsCertPath, m_pPushButtonTlsCertPath);
        QWidget::setTabOrder(m_pPushButtonTlsCertPath, m_pPushButtonTlsRegenCert);
        QWidget::setTabOrder(m_pPushButtonTlsRegenCert, m_pCheckBoxLogToFile);
        QWidget::setTabOrder(m_pCheckBoxLogToFile, m_pComboLogLevel);
        QWidget::setTabOrder(m_pComboLogLevel, m_pLineEditLogFilename);
        QWidget::setTabOrder(m_pLineEditLogFilename, m_pButtonBrowseLog);
        QWidget::setTabOrder(m_pButtonBrowseLog, m_pRadioUserScope);
        QWidget::setTabOrder(m_pRadioUserScope, m_pRadioSystemScope);
        QWidget::setTabOrder(m_pRadioSystemScope, m_pComboElevate);

        retranslateUi(SettingsDialogBase);
        QObject::connect(m_pButtonBox, &QDialogButtonBox::accepted, SettingsDialogBase, qOverload<>(&QDialog::accept));
        QObject::connect(m_pButtonBox, &QDialogButtonBox::rejected, SettingsDialogBase, qOverload<>(&QDialog::reject));

        m_pTabWidget->setCurrentIndex(1);
        m_pComboElevate->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialogBase)
    {
        SettingsDialogBase->setWindowTitle(QCoreApplication::translate("SettingsDialogBase", "Preferences", nullptr));
        m_pGroupBasics->setTitle(QCoreApplication::translate("SettingsDialogBase", "Basics", nullptr));
        m_pLabelComputerName->setText(QCoreApplication::translate("SettingsDialogBase", "Computer name", nullptr));
        m_pCheckBoxPreventSleep->setText(QCoreApplication::translate("SettingsDialogBase", "Prevent this computer from going to sleep", nullptr));
        m_pCheckBoxLanguageSync->setText(QCoreApplication::translate("SettingsDialogBase", "Use server's keyboard language on this computer (client mode)", nullptr));
        m_pCheckBoxScrollDirection->setText(QCoreApplication::translate("SettingsDialogBase", "Invert scroll direction on this computer (client mode)", nullptr));
        m_pGroupApp->setTitle(QCoreApplication::translate("SettingsDialogBase", "App", nullptr));
        m_pCheckBoxCloseToTray->setText(QCoreApplication::translate("SettingsDialogBase", "Leave app running in notification area when the window is closed", nullptr));
        m_pCheckBoxAutoHide->setText(QCoreApplication::translate("SettingsDialogBase", "Hide the window when the app starts", nullptr));
        m_pGroupSecurity->setTitle(QCoreApplication::translate("SettingsDialogBase", "Security", nullptr));
        m_pCheckBoxEnableTls->setText(QCoreApplication::translate("SettingsDialogBase", "Enable TLS encryption", nullptr));
        m_pLabelTlsKeyLength->setText(QCoreApplication::translate("SettingsDialogBase", "Key length", nullptr));
        m_pComboBoxTlsKeyLength->setItemText(0, QCoreApplication::translate("SettingsDialogBase", "1024", nullptr));
        m_pComboBoxTlsKeyLength->setItemText(1, QCoreApplication::translate("SettingsDialogBase", "2048", nullptr));
        m_pComboBoxTlsKeyLength->setItemText(2, QCoreApplication::translate("SettingsDialogBase", "4096", nullptr));

        m_pComboBoxTlsKeyLength->setCurrentText(QCoreApplication::translate("SettingsDialogBase", "1024", nullptr));
        m_pLabelTlsCert->setText(QCoreApplication::translate("SettingsDialogBase", "Certificate", nullptr));
        m_pPushButtonTlsCertPath->setText(QString());
        m_pPushButtonTlsRegenCert->setText(QCoreApplication::translate("SettingsDialogBase", "Regenerate certificate", nullptr));
        m_pTabWidget->setTabText(m_pTabWidget->indexOf(m_pTabRegular), QCoreApplication::translate("SettingsDialogBase", "&Regular", nullptr));
        m_pGroupNetworking->setTitle(QCoreApplication::translate("SettingsDialogBase", "Networking", nullptr));
        m_pLabel_20->setText(QCoreApplication::translate("SettingsDialogBase", "Port", nullptr));
        m_pLabel_21->setText(QCoreApplication::translate("SettingsDialogBase", "Network IP", nullptr));
        m_pInvertConnection->setText(QCoreApplication::translate("SettingsDialogBase", "Invert server/client TCP connection (business edition)", nullptr));
        m_pGroupLogs->setTitle(QCoreApplication::translate("SettingsDialogBase", "Logs", nullptr));
        m_pCheckBoxLogToFile->setText(QCoreApplication::translate("SettingsDialogBase", "Log to file", nullptr));
        m_pComboLogLevel->setItemText(0, QCoreApplication::translate("SettingsDialogBase", "Info", nullptr));
        m_pComboLogLevel->setItemText(1, QCoreApplication::translate("SettingsDialogBase", "Debug", nullptr));
        m_pComboLogLevel->setItemText(2, QCoreApplication::translate("SettingsDialogBase", "Debug1", nullptr));
        m_pComboLogLevel->setItemText(3, QCoreApplication::translate("SettingsDialogBase", "Debug2", nullptr));

        m_pLabel_3->setText(QCoreApplication::translate("SettingsDialogBase", "Level", nullptr));
        m_pLabelLogPath->setText(QCoreApplication::translate("SettingsDialogBase", "Log path", nullptr));
        m_pButtonBrowseLog->setText(QString());
        m_pGroupService->setTitle(QCoreApplication::translate("SettingsDialogBase", "Service", nullptr));
        m_pLabelElevate->setText(QCoreApplication::translate("SettingsDialogBase", "Launch with elevated privilages", nullptr));
        m_pComboElevate->setItemText(0, QCoreApplication::translate("SettingsDialogBase", "Automatic (as needed)", nullptr));
        m_pComboElevate->setItemText(1, QCoreApplication::translate("SettingsDialogBase", "Always elevate", nullptr));
        m_pComboElevate->setItemText(2, QCoreApplication::translate("SettingsDialogBase", "Never elevate", nullptr));

#if QT_CONFIG(tooltip)
        m_pComboElevate->setToolTip(QCoreApplication::translate("SettingsDialogBase", "Specify when the Synergy service should run at an elevated privilege level", nullptr));
#endif // QT_CONFIG(tooltip)
        m_pCheckBoxServiceEnabled->setText(QCoreApplication::translate("SettingsDialogBase", "Use background service (daemon)", nullptr));
        m_pGroupScope->setTitle(QCoreApplication::translate("SettingsDialogBase", "Use settings profile from", nullptr));
        m_pRadioSystemScope->setText(QCoreApplication::translate("SettingsDialogBase", "All users", nullptr));
        m_pRadioUserScope->setText(QCoreApplication::translate("SettingsDialogBase", "Current user", nullptr));
        m_pTabWidget->setTabText(m_pTabWidget->indexOf(m_pTabAdvanced), QCoreApplication::translate("SettingsDialogBase", "&Advanced", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialogBase: public Ui_SettingsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOGBASE_H
