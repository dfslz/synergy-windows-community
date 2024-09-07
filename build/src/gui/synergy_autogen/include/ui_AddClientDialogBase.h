/********************************************************************************
** Form generated from reading UI file 'AddClientDialogBase.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCLIENTDIALOGBASE_H
#define UI_ADDCLIENTDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddClientDialog
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *m_pLabelHead;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *m_pCheckBoxIgnoreClient;
    QDialogButtonBox *m_pDialogButtonBox;

    void setupUi(QDialog *AddClientDialog)
    {
        if (AddClientDialog->objectName().isEmpty())
            AddClientDialog->setObjectName("AddClientDialog");
        AddClientDialog->resize(400, 350);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddClientDialog->sizePolicy().hasHeightForWidth());
        AddClientDialog->setSizePolicy(sizePolicy);
        gridLayoutWidget = new QWidget(AddClientDialog);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 10, 381, 301));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m_pLabelHead = new QLabel(gridLayoutWidget);
        m_pLabelHead->setObjectName("m_pLabelHead");
        m_pLabelHead->setWordWrap(true);

        gridLayout->addWidget(m_pLabelHead, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalLayoutWidget = new QWidget(AddClientDialog);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 320, 381, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        m_pCheckBoxIgnoreClient = new QCheckBox(horizontalLayoutWidget);
        m_pCheckBoxIgnoreClient->setObjectName("m_pCheckBoxIgnoreClient");

        horizontalLayout->addWidget(m_pCheckBoxIgnoreClient);

        m_pDialogButtonBox = new QDialogButtonBox(horizontalLayoutWidget);
        m_pDialogButtonBox->setObjectName("m_pDialogButtonBox");
        sizePolicy.setHeightForWidth(m_pDialogButtonBox->sizePolicy().hasHeightForWidth());
        m_pDialogButtonBox->setSizePolicy(sizePolicy);
        m_pDialogButtonBox->setOrientation(Qt::Horizontal);
        m_pDialogButtonBox->setStandardButtons(QDialogButtonBox::Ignore);
        m_pDialogButtonBox->setCenterButtons(false);

        horizontalLayout->addWidget(m_pDialogButtonBox);


        retranslateUi(AddClientDialog);
        QObject::connect(m_pDialogButtonBox, &QDialogButtonBox::accepted, AddClientDialog, qOverload<>(&QDialog::accept));
        QObject::connect(m_pDialogButtonBox, &QDialogButtonBox::rejected, AddClientDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AddClientDialog);
    } // setupUi

    void retranslateUi(QDialog *AddClientDialog)
    {
        AddClientDialog->setWindowTitle(QCoreApplication::translate("AddClientDialog", "Dialog", nullptr));
        m_pLabelHead->setText(QCoreApplication::translate("AddClientDialog", "TextLabel", nullptr));
        m_pCheckBoxIgnoreClient->setText(QCoreApplication::translate("AddClientDialog", "Ignore auto connect clients", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddClientDialog: public Ui_AddClientDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCLIENTDIALOGBASE_H
