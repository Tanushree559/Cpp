#include<iostream>
using namespace std;
class bank
{
    private:
    char name[20];
    int acc_no;
    char acc_type[20];
    float balance_amount;
    public:
    void set_details();
    void display_details();
};
void bank::set_details()
{
    cout<<"Enter Name, account no.,type of account and balance amount of the holder";
    cin>>name>>acc_no>>acc_type>>balance_amount;
}
void bank::display_details()
{
    cout<<"Name= "<<name<<endl;
    cout<<"Account Number= "<<acc_no<<endl;
    cout<<"Type of account= "<<acc_type<<endl;
    cout<<"Balance Amount= "<<balance_amount<<endl;
}
int main()
{
    int i;
    bank customer[3];
    for(i=0;i<3;i++)
    {
        customer[i].set_details();
    }
    for(i=0;i<3;i++)
    {
        customer[i].display_details();
    }
    return(0);
}