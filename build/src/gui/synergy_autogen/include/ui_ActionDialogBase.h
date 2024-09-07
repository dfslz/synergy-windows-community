/********************************************************************************
** Form generated from reading UI file 'ActionDialogBase.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIONDIALOGBASE_H
#define UI_ACTIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "KeySequenceWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ActionDialogBase
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *m_pGroupType;
    QVBoxLayout *vboxLayout1;
    QRadioButton *m_pRadioPress;
    QRadioButton *m_pRadioRelease;
    QRadioButton *m_pRadioPressAndRelease;
    KeySequenceWidget *m_pKeySequenceWidgetHotkey;
    QGroupBox *m_pGroupBoxScreens;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QListWidget *m_pListScreens;
    QFrame *line;
    QHBoxLayout *hboxLayout1;
    QRadioButton *m_pRadioSwitchToScreen;
    QSpacerItem *spacerItem1;
    QComboBox *m_pComboSwitchToScreen;
    QHBoxLayout *hboxLayout2;
    QRadioButton *m_pRadioSwitchInDirection;
    QSpacerItem *spacerItem2;
    QComboBox *m_pComboSwitchInDirection;
    QHBoxLayout *hboxLayout3;
    QRadioButton *m_pRadioLockCursorToScreen;
    QSpacerItem *spacerItem3;
    QComboBox *m_pComboLockCursorToScreen;
    QHBoxLayout *hboxLayout4;
    QRadioButton *m_pRadioRestartAllConnections;
    QGroupBox *groupBox_2;
    QHBoxLayout *hboxLayout5;
    QRadioButton *m_pRadioHotkeyPressed;
    QRadioButton *m_pRadioHotkeyReleased;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ActionDialogBase)
    {
        if (ActionDialogBase->objectName().isEmpty())
            ActionDialogBase->setObjectName("ActionDialogBase");
        ActionDialogBase->resize(375, 528);
        vboxLayout = new QVBoxLayout(ActionDialogBase);
        vboxLayout->setObjectName("vboxLayout");
        m_pGroupType = new QGroupBox(ActionDialogBase);
        m_pGroupType->setObjectName("m_pGroupType");
        QFont font;
        font.setKerning(true);
        m_pGroupType->setFont(font);
        vboxLayout1 = new QVBoxLayout(m_pGroupType);
        vboxLayout1->setObjectName("vboxLayout1");
        m_pRadioPress = new QRadioButton(m_pGroupType);
        m_pRadioPress->setObjectName("m_pRadioPress");
        m_pRadioPress->setChecked(true);

        vboxLayout1->addWidget(m_pRadioPress);

        m_pRadioRelease = new QRadioButton(m_pGroupType);
        m_pRadioRelease->setObjectName("m_pRadioRelease");

        vboxLayout1->addWidget(m_pRadioRelease);

        m_pRadioPressAndRelease = new QRadioButton(m_pGroupType);
        m_pRadioPressAndRelease->setObjectName("m_pRadioPressAndRelease");

        vboxLayout1->addWidget(m_pRadioPressAndRelease);

        m_pKeySequenceWidgetHotkey = new KeySequenceWidget(m_pGroupType);
        m_pKeySequenceWidgetHotkey->setObjectName("m_pKeySequenceWidgetHotkey");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_pKeySequenceWidgetHotkey->sizePolicy().hasHeightForWidth());
        m_pKeySequenceWidgetHotkey->setSizePolicy(sizePolicy);
        m_pKeySequenceWidgetHotkey->setMinimumSize(QSize(256, 0));

        vboxLayout1->addWidget(m_pKeySequenceWidgetHotkey);

        m_pGroupBoxScreens = new QGroupBox(m_pGroupType);
        m_pGroupBoxScreens->setObjectName("m_pGroupBoxScreens");
        m_pGroupBoxScreens->setFlat(true);
        m_pGroupBoxScreens->setCheckable(true);
        hboxLayout = new QHBoxLayout(m_pGroupBoxScreens);
        hboxLayout->setObjectName("hboxLayout");
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout->addItem(spacerItem);

        m_pListScreens = new QListWidget(m_pGroupBoxScreens);
        m_pListScreens->setObjectName("m_pListScreens");
        m_pListScreens->setMinimumSize(QSize(128, 64));
        m_pListScreens->setSelectionMode(QAbstractItemView::ExtendedSelection);

        hboxLayout->addWidget(m_pListScreens);


        vboxLayout1->addWidget(m_pGroupBoxScreens);

        line = new QFrame(m_pGroupType);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        vboxLayout1->addWidget(line);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName("hboxLayout1");
        m_pRadioSwitchToScreen = new QRadioButton(m_pGroupType);
        m_pRadioSwitchToScreen->setObjectName("m_pRadioSwitchToScreen");

        hboxLayout1->addWidget(m_pRadioSwitchToScreen);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        m_pComboSwitchToScreen = new QComboBox(m_pGroupType);
        m_pComboSwitchToScreen->setObjectName("m_pComboSwitchToScreen");
        m_pComboSwitchToScreen->setEnabled(false);

        hboxLayout1->addWidget(m_pComboSwitchToScreen);


        vboxLayout1->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName("hboxLayout2");
        m_pRadioSwitchInDirection = new QRadioButton(m_pGroupType);
        m_pRadioSwitchInDirection->setObjectName("m_pRadioSwitchInDirection");

        hboxLayout2->addWidget(m_pRadioSwitchInDirection);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout2->addItem(spacerItem2);

        m_pComboSwitchInDirection = new QComboBox(m_pGroupType);
        m_pComboSwitchInDirection->addItem(QString());
        m_pComboSwitchInDirection->addItem(QString());
        m_pComboSwitchInDirection->addItem(QString());
        m_pComboSwitchInDirection->addItem(QString());
        m_pComboSwitchInDirection->setObjectName("m_pComboSwitchInDirection");
        m_pComboSwitchInDirection->setEnabled(false);

        hboxLayout2->addWidget(m_pComboSwitchInDirection);


        vboxLayout1->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName("hboxLayout3");
        m_pRadioLockCursorToScreen = new QRadioButton(m_pGroupType);
        m_pRadioLockCursorToScreen->setObjectName("m_pRadioLockCursorToScreen");

        hboxLayout3->addWidget(m_pRadioLockCursorToScreen);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout3->addItem(spacerItem3);

        m_pComboLockCursorToScreen = new QComboBox(m_pGroupType);
        m_pComboLockCursorToScreen->addItem(QString());
        m_pComboLockCursorToScreen->addItem(QString());
        m_pComboLockCursorToScreen->addItem(QString());
        m_pComboLockCursorToScreen->setObjectName("m_pComboLockCursorToScreen");
        m_pComboLockCursorToScreen->setEnabled(false);

        hboxLayout3->addWidget(m_pComboLockCursorToScreen);


        vboxLayout1->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName("hboxLayout4");
        m_pRadioRestartAllConnections = new QRadioButton(m_pGroupType);
        m_pRadioRestartAllConnections->setObjectName("m_pRadioRestartAllConnections");

        hboxLayout4->addWidget(m_pRadioRestartAllConnections);


        vboxLayout1->addLayout(hboxLayout4);


        vboxLayout->addWidget(m_pGroupType);

        groupBox_2 = new QGroupBox(ActionDialogBase);
        groupBox_2->setObjectName("groupBox_2");
        QFont font1;
        font1.setKerning(false);
        groupBox_2->setFont(font1);
        hboxLayout5 = new QHBoxLayout(groupBox_2);
        hboxLayout5->setObjectName("hboxLayout5");
        m_pRadioHotkeyPressed = new QRadioButton(groupBox_2);
        m_pRadioHotkeyPressed->setObjectName("m_pRadioHotkeyPressed");
        m_pRadioHotkeyPressed->setChecked(true);

        hboxLayout5->addWidget(m_pRadioHotkeyPressed);

        m_pRadioHotkeyReleased = new QRadioButton(groupBox_2);
        m_pRadioHotkeyReleased->setObjectName("m_pRadioHotkeyReleased");

        hboxLayout5->addWidget(m_pRadioHotkeyReleased);


        vboxLayout->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(ActionDialogBase);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(ActionDialogBase);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ActionDialogBase, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ActionDialogBase, qOverload<>(&QDialog::reject));
        QObject::connect(m_pGroupType, SIGNAL(toggled(bool)), m_pKeySequenceWidgetHotkey, SLOT(setDisabled(bool)));
        QObject::connect(m_pRadioSwitchInDirection, SIGNAL(toggled(bool)), m_pKeySequenceWidgetHotkey, SLOT(setDisabled(bool)));
        QObject::connect(m_pRadioLockCursorToScreen, SIGNAL(toggled(bool)), m_pKeySequenceWidgetHotkey, SLOT(setDisabled(bool)));
        QObject::connect(m_pRadioRestartAllConnections, SIGNAL(toggled(bool)), m_pKeySequenceWidgetHotkey, SLOT(setDisabled(bool)));
        QObject::connect(m_pRadioPress, SIGNAL(toggled(bool)), m_pKeySequenceWidgetHotkey, SLOT(setEnabled(bool)));
        QObject::connect(m_pRadioRelease, SIGNAL(toggled(bool)), m_pKeySequenceWidgetHotkey, SLOT(setEnabled(bool)));
        QObject::connect(m_pRadioPressAndRelease, SIGNAL(toggled(bool)), m_pKeySequenceWidgetHotkey, SLOT(setEnabled(bool)));
        QObject::connect(m_pRadioSwitchToScreen, &QRadioButton::toggled, m_pComboSwitchToScreen, &QComboBox::setEnabled);
        QObject::connect(m_pRadioSwitchInDirection, &QRadioButton::toggled, m_pComboSwitchInDirection, &QComboBox::setEnabled);
        QObject::connect(m_pRadioLockCursorToScreen, &QRadioButton::toggled, m_pComboLockCursorToScreen, &QComboBox::setEnabled);
        QObject::connect(m_pRadioPress, &QRadioButton::toggled, m_pGroupBoxScreens, &QGroupBox::setEnabled);
        QObject::connect(m_pRadioSwitchToScreen, &QRadioButton::toggled, m_pGroupBoxScreens, &QGroupBox::setDisabled);
        QObject::connect(m_pRadioRelease, &QRadioButton::toggled, m_pGroupBoxScreens, &QGroupBox::setEnabled);
        QObject::connect(m_pRadioPressAndRelease, &QRadioButton::toggled, m_pGroupBoxScreens, &QGroupBox::setEnabled);
        QObject::connect(m_pRadioSwitchInDirection, &QRadioButton::toggled, m_pGroupBoxScreens, &QGroupBox::setDisabled);
        QObject::connect(m_pRadioLockCursorToScreen, &QRadioButton::toggled, m_pGroupBoxScreens, &QGroupBox::setDisabled);
        QObject::connect(m_pRadioRestartAllConnections, &QRadioButton::toggled, m_pGroupBoxScreens, &QGroupBox::setDisabled);
        QObject::connect(m_pRadioSwitchToScreen, SIGNAL(toggled(bool)), m_pKeySequenceWidgetHotkey, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(ActionDialogBase);
    } // setupUi

    void retranslateUi(QDialog *ActionDialogBase)
    {
        ActionDialogBase->setWindowTitle(QCoreApplication::translate("ActionDialogBase", "Configure Action", nullptr));
        m_pGroupType->setTitle(QCoreApplication::translate("ActionDialogBase", "Choose the action to perform", nullptr));
        m_pRadioPress->setText(QCoreApplication::translate("ActionDialogBase", "Press a hotkey", nullptr));
        m_pRadioRelease->setText(QCoreApplication::translate("ActionDialogBase", "Release a hotkey", nullptr));
        m_pRadioPressAndRelease->setText(QCoreApplication::translate("ActionDialogBase", "Press and release a hotkey", nullptr));
        m_pKeySequenceWidgetHotkey->setText(QString());
        m_pGroupBoxScreens->setTitle(QCoreApplication::translate("ActionDialogBase", "only on these screens", nullptr));
        m_pRadioSwitchToScreen->setText(QCoreApplication::translate("ActionDialogBase", "Switch to screen", nullptr));
        m_pRadioSwitchInDirection->setText(QCoreApplication::translate("ActionDialogBase", "Switch in direction", nullptr));
        m_pComboSwitchInDirection->setItemText(0, QCoreApplication::translate("ActionDialogBase", "left", nullptr));
        m_pComboSwitchInDirection->setItemText(1, QCoreApplication::translate("ActionDialogBase", "right", nullptr));
        m_pComboSwitchInDirection->setItemText(2, QCoreApplication::translate("ActionDialogBase", "up", nullptr));
        m_pComboSwitchInDirection->setItemText(3, QCoreApplication::translate("ActionDialogBase", "down", nullptr));

        m_pRadioLockCursorToScreen->setText(QCoreApplication::translate("ActionDialogBase", "Lock cursor to screen", nullptr));
        m_pComboLockCursorToScreen->setItemText(0, QCoreApplication::translate("ActionDialogBase", "toggle", nullptr));
        m_pComboLockCursorToScreen->setItemText(1, QCoreApplication::translate("ActionDialogBase", "on", nullptr));
        m_pComboLockCursorToScreen->setItemText(2, QCoreApplication::translate("ActionDialogBase", "off", nullptr));

        m_pRadioRestartAllConnections->setText(QCoreApplication::translate("ActionDialogBase", "Restart server", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ActionDialogBase", "This action is performed when", nullptr));
        m_pRadioHotkeyPressed->setText(QCoreApplication::translate("ActionDialogBase", "the hotkey is pressed", nullptr));
        m_pRadioHotkeyReleased->setText(QCoreApplication::translate("ActionDialogBase", "the hotkey is released", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ActionDialogBase: public Ui_ActionDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIONDIALOGBASE_H
