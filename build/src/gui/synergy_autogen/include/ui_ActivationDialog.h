/********************************************************************************
** Form generated from reading UI file 'ActivationDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIVATIONDIALOG_H
#define UI_ACTIVATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ActivationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_5;
    QTextEdit *m_pTextEditSerialKey;
    QWidget *m_widgetNotice;
    QHBoxLayout *horizontalLayout_5;
    QLabel *m_pLabelNotice;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ActivationDialog)
    {
        if (ActivationDialog->objectName().isEmpty())
            ActivationDialog->setObjectName("ActivationDialog");
        ActivationDialog->resize(541, 241);
        verticalLayout = new QVBoxLayout(ActivationDialog);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(ActivationDialog);
        label->setObjectName("label");
        QFont font;
        font.setBold(true);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_5 = new QLabel(ActivationDialog);
        label_5->setObjectName("label_5");
        label_5->setOpenExternalLinks(true);

        verticalLayout->addWidget(label_5);

        m_pTextEditSerialKey = new QTextEdit(ActivationDialog);
        m_pTextEditSerialKey->setObjectName("m_pTextEditSerialKey");
        m_pTextEditSerialKey->setEnabled(true);
        m_pTextEditSerialKey->setTabChangesFocus(true);
        m_pTextEditSerialKey->setAcceptRichText(false);

        verticalLayout->addWidget(m_pTextEditSerialKey);

        m_widgetNotice = new QWidget(ActivationDialog);
        m_widgetNotice->setObjectName("m_widgetNotice");
        horizontalLayout_5 = new QHBoxLayout(m_widgetNotice);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(2, 0, 0, 8);
        m_pLabelNotice = new QLabel(m_widgetNotice);
        m_pLabelNotice->setObjectName("m_pLabelNotice");
        m_pLabelNotice->setOpenExternalLinks(true);

        horizontalLayout_5->addWidget(m_pLabelNotice);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout->addWidget(m_widgetNotice);

        buttonBox = new QDialogButtonBox(ActivationDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ActivationDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ActivationDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ActivationDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ActivationDialog);
    } // setupUi

    void retranslateUi(QDialog *ActivationDialog)
    {
        ActivationDialog->setWindowTitle(QCoreApplication::translate("ActivationDialog", "Activate Synergy", nullptr));
        label->setText(QCoreApplication::translate("ActivationDialog", "Serial key", nullptr));
        label_5->setText(QCoreApplication::translate("ActivationDialog", "<p>Your serial key is on your <a href=\"https://symless.com/synergy/account?source=gui\" style=\"color:#4285f4;\">account</span></a> page. Don't have a license? <a href=\"https://symless.com/synergy/purchase?source=gui\" style=\"color:#4285f4;\">Purchase Synergy</span></a></p>", nullptr));
        m_pTextEditSerialKey->setHtml(QCoreApplication::translate("ActivationDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans'; font-size:10pt;\"><br /></p></body></html>", nullptr));
        m_pLabelNotice->setText(QCoreApplication::translate("ActivationDialog", "m_pLabelNotice", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ActivationDialog: public Ui_ActivationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIVATIONDIALOG_H
