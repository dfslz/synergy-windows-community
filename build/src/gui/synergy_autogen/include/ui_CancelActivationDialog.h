/********************************************************************************
** Form generated from reading UI file 'CancelActivationDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANCELACTIVATIONDIALOG_H
#define UI_CANCELACTIVATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CancelActivationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QDialogButtonBox *m_pButtonBox;

    void setupUi(QDialog *CancelActivationDialog)
    {
        if (CancelActivationDialog->objectName().isEmpty())
            CancelActivationDialog->setObjectName("CancelActivationDialog");
        CancelActivationDialog->resize(429, 273);
        verticalLayout = new QVBoxLayout(CancelActivationDialog);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(CancelActivationDialog);
        label->setObjectName("label");
        label->setWordWrap(true);
        label->setOpenExternalLinks(true);

        verticalLayout->addWidget(label, 0, Qt::AlignmentFlag::AlignTop);

        m_pButtonBox = new QDialogButtonBox(CancelActivationDialog);
        m_pButtonBox->setObjectName("m_pButtonBox");
        m_pButtonBox->setOrientation(Qt::Orientation::Horizontal);
        m_pButtonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(m_pButtonBox);


        retranslateUi(CancelActivationDialog);
        QObject::connect(m_pButtonBox, &QDialogButtonBox::accepted, CancelActivationDialog, qOverload<>(&QDialog::accept));
        QObject::connect(m_pButtonBox, &QDialogButtonBox::rejected, CancelActivationDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(CancelActivationDialog);
    } // setupUi

    void retranslateUi(QDialog *CancelActivationDialog)
    {
        CancelActivationDialog->setWindowTitle(QCoreApplication::translate("CancelActivationDialog", "Cancel Activation", nullptr));
        label->setText(QCoreApplication::translate("CancelActivationDialog", "<html><head/><body><p>You'll need to purchase a license to use this build of Synergy.</p><p><a href=\"https://symless.com/synergy/purchase?source=gui\"><span style=\" text-decoration: underline; color:#007af4;\">Purchase Synergy</span></a></p><p>If you'd prefer to use the community edition instead, visit us on GitHub.</p><p><a href=\"https://github.com/symless/synergy\"><span style=\" text-decoration: underline; color:#007af4;\">GitHub project</span></a></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CancelActivationDialog: public Ui_CancelActivationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANCELACTIVATIONDIALOG_H
