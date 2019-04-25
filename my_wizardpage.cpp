#include "my_wizardpage.h"

MyWizardPage::MyWizardPage(const QString pageTitle, const QString subTitle, QWidget *parent):QWizardPage(parent), pageTitle{pageTitle}, subTitle{subTitle}{}

void MyWizardPage::initializePage(){
    logo_image = new QPixmap(":/images/logo.png");
    label_image = new QLabel("");
    label_name = new QLabel("name:");
    label_surname = new QLabel("surname:");
    label_bio = new QLabel("about:");

    this->setTitle(pageTitle);
    this->setSubTitle(subTitle);
    label_image->setPixmap(this->logo_image->scaled(logo_w, logo_h, Qt::KeepAspectRatio));

    editor_name = new QLineEdit;
    editor_surname = new QLineEdit;
    editor_bio = new QLineEdit;

    group_box = new QGroupBox;
    group_box->setStyleSheet("QGroupBox{border:none}");
    inner_layout = new QGridLayout;
    layout = new QGridLayout;
    layout->addWidget(label_image, 0, 0);
    inner_layout->addWidget(label_name, 0, 0);
    inner_layout->addWidget(editor_name, 0, 1);
    inner_layout->addWidget(label_surname, 1, 0);
    inner_layout->addWidget(editor_surname, 1, 1);
    inner_layout->addWidget(label_bio, 2, 0);
    inner_layout->addWidget(editor_bio, 2, 1);
    group_box->setLayout(inner_layout);
    layout->addWidget(group_box, 0, 1);
    this->setLayout(layout);

}



