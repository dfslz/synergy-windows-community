/********************************************************************************
** Form generated from reading UI file 'SetupWizardBlocker.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUPWIZARDBLOCKER_H
#define UI_SETUPWIZARDBLOCKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SetupWizardBlocker
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *m_pLabelImage;
    QLabel *m_pLabelTitle;
    QLabel *m_pLabelInfo;
    QSpacerItem *verticalSpacer_2;
    QPushButton *m_pButtonSupport;
    QPushButton *m_pButtonCancel;

    void setupUi(QDialog *SetupWizardBlocker)
    {
        if (SetupWizardBlocker->objectName().isEmpty())
            SetupWizardBlocker->setObjectName("SetupWizardBlocker");
        SetupWizardBlocker->resize(750, 600);
        SetupWizardBlocker->setContextMenuPolicy(Qt::NoContextMenu);
        SetupWizardBlocker->setWindowOpacity(1.000000000000000);
        verticalLayout = new QVBoxLayout(SetupWizardBlocker);
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, -1, -1, 40);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        m_pLabelImage = new QLabel(SetupWizardBlocker);
        m_pLabelImage->setObjectName("m_pLabelImage");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_pLabelImage->sizePolicy().hasHeightForWidth());
        m_pLabelImage->setSizePolicy(sizePolicy);
        m_pLabelImage->setPixmap(QPixmap(QString::fromUtf8(":/res/image/setupBlocker.png")));
        m_pLabelImage->setScaledContents(true);
        m_pLabelImage->setMargin(30);

        verticalLayout->addWidget(m_pLabelImage, 0, Qt::AlignHCenter);

        m_pLabelTitle = new QLabel(SetupWizardBlocker);
        m_pLabelTitle->setObjectName("m_pLabelTitle");
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        m_pLabelTitle->setFont(font);
        m_pLabelTitle->setText(QString::fromUtf8("m_pLabelTitle"));

        verticalLayout->addWidget(m_pLabelTitle, 0, Qt::AlignHCenter);

        m_pLabelInfo = new QLabel(SetupWizardBlocker);
        m_pLabelInfo->setObjectName("m_pLabelInfo");

        verticalLayout->addWidget(m_pLabelInfo, 0, Qt::AlignHCenter);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        m_pButtonSupport = new QPushButton(SetupWizardBlocker);
        m_pButtonSupport->setObjectName("m_pButtonSupport");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_pButtonSupport->sizePolicy().hasHeightForWidth());
        m_pButtonSupport->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(m_pButtonSupport, 0, Qt::AlignHCenter);

        m_pButtonCancel = new QPushButton(SetupWizardBlocker);
        m_pButtonCancel->setObjectName("m_pButtonCancel");
        sizePolicy1.setHeightForWidth(m_pButtonCancel->sizePolicy().hasHeightForWidth());
        m_pButtonCancel->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(m_pButtonCancel, 0, Qt::AlignHCenter);


        retranslateUi(SetupWizardBlocker);

        QMetaObject::connectSlotsByName(SetupWizardBlocker);
    } // setupUi

    void retranslateUi(QDialog *SetupWizardBlocker)
    {
        SetupWizardBlocker->setWindowTitle(QCoreApplication::translate("SetupWizardBlocker", "Setup Synergy", nullptr));
        m_pLabelImage->setText(QString());
        m_pLabelInfo->setText(QCoreApplication::translate("SetupWizardBlocker", "m_pLabelInfo", nullptr));
        m_pButtonSupport->setText(QCoreApplication::translate("SetupWizardBlocker", "Get technical support", nullptr));
        m_pButtonCancel->setText(QCoreApplication::translate("SetupWizardBlocker", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetupWizardBlocker: public Ui_SetupWizardBlocker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUPWIZARDBLOCKER_H
