/********************************************************************************
** Form generated from reading UI file 'SetupWizardBase.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUPWIZARDBASE_H
#define UI_SETUPWIZARDBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SetupWizardBase
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *m_pLabelImage;
    QLabel *m_pLabelTitle;
    QFormLayout *formLayout;
    QLabel *m_pLabelName;
    QLineEdit *m_pLineEditName;
    QLabel *m_pLabelError;
    QLabel *m_pHelpList;
    QSpacerItem *verticalSpacer;
    QPushButton *m_pButtonApply;

    void setupUi(QDialog *SetupWizardBase)
    {
        if (SetupWizardBase->objectName().isEmpty())
            SetupWizardBase->setObjectName("SetupWizardBase");
        SetupWizardBase->resize(764, 612);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SetupWizardBase->sizePolicy().hasHeightForWidth());
        SetupWizardBase->setSizePolicy(sizePolicy);
        SetupWizardBase->setBaseSize(QSize(720, 552));
        SetupWizardBase->setContextMenuPolicy(Qt::NoContextMenu);
        SetupWizardBase->setWindowOpacity(1.000000000000000);
        verticalLayout = new QVBoxLayout(SetupWizardBase);
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(150, -1, 150, -1);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        m_pLabelImage = new QLabel(SetupWizardBase);
        m_pLabelImage->setObjectName("m_pLabelImage");
        m_pLabelImage->setPixmap(QPixmap(QString::fromUtf8(":/res/image/welcome.png")));
        m_pLabelImage->setMargin(1);

        verticalLayout->addWidget(m_pLabelImage, 0, Qt::AlignHCenter|Qt::AlignTop);

        m_pLabelTitle = new QLabel(SetupWizardBase);
        m_pLabelTitle->setObjectName("m_pLabelTitle");
        QFont font;
        font.setFamilies({QString::fromUtf8("Cantarell")});
        font.setPointSize(18);
        font.setBold(true);
        m_pLabelTitle->setFont(font);
        m_pLabelTitle->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(m_pLabelTitle, 0, Qt::AlignHCenter|Qt::AlignTop);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(50, 30, 50, -1);
        m_pLabelName = new QLabel(SetupWizardBase);
        m_pLabelName->setObjectName("m_pLabelName");
        m_pLabelName->setTextFormat(Qt::PlainText);
        m_pLabelName->setMargin(2);

        formLayout->setWidget(0, QFormLayout::LabelRole, m_pLabelName);

        m_pLineEditName = new QLineEdit(SetupWizardBase);
        m_pLineEditName->setObjectName("m_pLineEditName");
        m_pLineEditName->setMinimumSize(QSize(230, 20));
        m_pLineEditName->setMaxLength(255);

        formLayout->setWidget(0, QFormLayout::FieldRole, m_pLineEditName);

        m_pLabelError = new QLabel(SetupWizardBase);
        m_pLabelError->setObjectName("m_pLabelError");

        formLayout->setWidget(1, QFormLayout::FieldRole, m_pLabelError);


        verticalLayout->addLayout(formLayout);

        m_pHelpList = new QLabel(SetupWizardBase);
        m_pHelpList->setObjectName("m_pHelpList");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_pHelpList->sizePolicy().hasHeightForWidth());
        m_pHelpList->setSizePolicy(sizePolicy1);
        m_pHelpList->setTextFormat(Qt::MarkdownText);

        verticalLayout->addWidget(m_pHelpList, 0, Qt::AlignHCenter|Qt::AlignTop);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        m_pButtonApply = new QPushButton(SetupWizardBase);
        m_pButtonApply->setObjectName("m_pButtonApply");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_pButtonApply->sizePolicy().hasHeightForWidth());
        m_pButtonApply->setSizePolicy(sizePolicy2);
        m_pButtonApply->setMinimumSize(QSize(150, 40));

        verticalLayout->addWidget(m_pButtonApply, 0, Qt::AlignHCenter);


        retranslateUi(SetupWizardBase);

        QMetaObject::connectSlotsByName(SetupWizardBase);
    } // setupUi

    void retranslateUi(QDialog *SetupWizardBase)
    {
        SetupWizardBase->setWindowTitle(QCoreApplication::translate("SetupWizardBase", "Setup Synergy", nullptr));
        m_pLabelImage->setText(QString());
        m_pLabelTitle->setText(QCoreApplication::translate("SetupWizardBase", "Name your computer", nullptr));
        m_pLabelName->setText(QCoreApplication::translate("SetupWizardBase", "Computer name", nullptr));
        m_pLabelError->setText(QCoreApplication::translate("SetupWizardBase", "m_pLabelError", nullptr));
        m_pHelpList->setText(QCoreApplication::translate("SetupWizardBase", "Call your computer something short and meaningful, but it must have:\n"
"\n"
"- No spaces\n"
"- Only these special characters: _ - .\n"
"- Only English characters and numbers\n"
"- A different name from other computers\n"
"", nullptr));
        m_pButtonApply->setText(QCoreApplication::translate("SetupWizardBase", "Continue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetupWizardBase: public Ui_SetupWizardBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUPWIZARDBASE_H
