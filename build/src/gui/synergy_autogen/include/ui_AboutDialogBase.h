/********************************************************************************
** Form generated from reading UI file 'AboutDialogBase.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOGBASE_H
#define UI_ABOUTDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AboutDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *m_pCopyrightLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLabel *m_pLabelBuildDate;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *buttonOk;
    QLabel *m_pTitleLabel;
    QLabel *m_pDescriptionLabel;
    QSpacerItem *verticalSpacer_1;
    QLabel *m_pLabel_Logo;
    QLabel *m_pDevelopersLabel;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *m_pLabelSynergyVersion;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *AboutDialogBase)
    {
        if (AboutDialogBase->objectName().isEmpty())
            AboutDialogBase->setObjectName("AboutDialogBase");
        AboutDialogBase->setWindowModality(Qt::ApplicationModal);
        AboutDialogBase->setEnabled(true);
        AboutDialogBase->resize(600, 400);
        AboutDialogBase->setModal(true);
        gridLayout = new QGridLayout(AboutDialogBase);
        gridLayout->setObjectName("gridLayout");
        m_pCopyrightLabel = new QLabel(AboutDialogBase);
        m_pCopyrightLabel->setObjectName("m_pCopyrightLabel");

        gridLayout->addWidget(m_pCopyrightLabel, 5, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_5 = new QLabel(AboutDialogBase);
        label_5->setObjectName("label_5");

        horizontalLayout_2->addWidget(label_5);

        m_pLabelBuildDate = new QLabel(AboutDialogBase);
        m_pLabelBuildDate->setObjectName("m_pLabelBuildDate");

        horizontalLayout_2->addWidget(m_pLabelBuildDate);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        buttonOk = new QPushButton(AboutDialogBase);
        buttonOk->setObjectName("buttonOk");

        horizontalLayout_2->addWidget(buttonOk);


        gridLayout->addLayout(horizontalLayout_2, 15, 1, 1, 1);

        m_pTitleLabel = new QLabel(AboutDialogBase);
        m_pTitleLabel->setObjectName("m_pTitleLabel");
        QFont font;
        font.setBold(true);
        m_pTitleLabel->setFont(font);

        gridLayout->addWidget(m_pTitleLabel, 7, 1, 1, 1);

        m_pDescriptionLabel = new QLabel(AboutDialogBase);
        m_pDescriptionLabel->setObjectName("m_pDescriptionLabel");

        gridLayout->addWidget(m_pDescriptionLabel, 2, 1, 1, 1);

        verticalSpacer_1 = new QSpacerItem(20, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_1, 4, 1, 1, 2);

        m_pLabel_Logo = new QLabel(AboutDialogBase);
        m_pLabel_Logo->setObjectName("m_pLabel_Logo");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_pLabel_Logo->sizePolicy().hasHeightForWidth());
        m_pLabel_Logo->setSizePolicy(sizePolicy);
        m_pLabel_Logo->setMaximumSize(QSize(200, 50));
        m_pLabel_Logo->setText(QString::fromUtf8(""));
        m_pLabel_Logo->setPixmap(QPixmap(QString::fromUtf8(":/res/image/about-light.png")));
        m_pLabel_Logo->setScaledContents(true);
        m_pLabel_Logo->setMargin(0);

        gridLayout->addWidget(m_pLabel_Logo, 0, 1, 1, 1);

        m_pDevelopersLabel = new QLabel(AboutDialogBase);
        m_pDevelopersLabel->setObjectName("m_pDevelopersLabel");
        sizePolicy.setHeightForWidth(m_pDevelopersLabel->sizePolicy().hasHeightForWidth());
        m_pDevelopersLabel->setSizePolicy(sizePolicy);
        m_pDevelopersLabel->setTextFormat(Qt::RichText);
        m_pDevelopersLabel->setWordWrap(true);
        m_pDevelopersLabel->setMargin(1);

        gridLayout->addWidget(m_pDevelopersLabel, 8, 1, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 9, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(AboutDialogBase);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMargin(1);

        horizontalLayout->addWidget(label);

        m_pLabelSynergyVersion = new QLabel(AboutDialogBase);
        m_pLabelSynergyVersion->setObjectName("m_pLabelSynergyVersion");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_pLabelSynergyVersion->sizePolicy().hasHeightForWidth());
        m_pLabelSynergyVersion->setSizePolicy(sizePolicy2);
        m_pLabelSynergyVersion->setMargin(1);

        horizontalLayout->addWidget(m_pLabelSynergyVersion);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 14, 1, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 6, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);


        retranslateUi(AboutDialogBase);
        QObject::connect(buttonOk, &QPushButton::clicked, AboutDialogBase, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(AboutDialogBase);
    } // setupUi

    void retranslateUi(QDialog *AboutDialogBase)
    {
        AboutDialogBase->setWindowTitle(QCoreApplication::translate("AboutDialogBase", "About Synergy", nullptr));
        m_pCopyrightLabel->setText(QCoreApplication::translate("AboutDialogBase", "Copyright", nullptr));
        label_5->setText(QCoreApplication::translate("AboutDialogBase", "Build Date: ", nullptr));
        m_pLabelBuildDate->setText(QCoreApplication::translate("AboutDialogBase", "Unknown", nullptr));
        buttonOk->setText(QCoreApplication::translate("AboutDialogBase", "&Ok", nullptr));
        m_pTitleLabel->setText(QCoreApplication::translate("AboutDialogBase", "Important developers", nullptr));
        m_pDescriptionLabel->setText(QCoreApplication::translate("AboutDialogBase", "Keyboard and mouse sharing application.", nullptr));
        m_pDevelopersLabel->setText(QCoreApplication::translate("AboutDialogBase", "Developers", nullptr));
        label->setText(QCoreApplication::translate("AboutDialogBase", "Version:", nullptr));
        m_pLabelSynergyVersion->setText(QCoreApplication::translate("AboutDialogBase", "Unknown", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialogBase: public Ui_AboutDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOGBASE_H
