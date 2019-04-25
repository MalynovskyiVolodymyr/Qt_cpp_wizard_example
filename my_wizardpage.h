#ifndef MYWIZARDPAGE_H
#define MYWIZARDPAGE_H

#include <QGridLayout>
#include <QGroupBox>
#include <QLabel>
#include <QLineEdit>
#include <QWizard>


class MyWizardPage : public QWizardPage
{
private:
    QPixmap *logo_image;
    QLabel *label_image;
    QLabel *label_bio;
    QLineEdit *editor_name;
    QLineEdit *editor_surname;
    QLineEdit *editor_bio;
    QGridLayout *inner_layout;
    QGridLayout *layout;  
    QLabel *label_name;
    QLabel *label_surname;
    QGroupBox *group_box;

    QString pageTitle;
    QString subTitle;
    int logo_w = 100;
    int logo_h = 100;
public:
    explicit MyWizardPage(const QString pageTitle, const QString subTitle, QWidget *parent = nullptr);

    void initializePage();
    ~MyWizardPage(){
        delete logo_image;
        delete label_image;
        delete label_bio;
        delete editor_name;
        delete editor_surname;
        delete editor_bio;
        delete inner_layout;
        delete layout;
        delete label_name;
        delete label_surname;
        delete group_box;
    }
};



#endif // MYWIZARDPAGE_H
