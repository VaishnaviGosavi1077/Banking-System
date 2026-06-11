#include<iostream>
#include<string>
 using namespace std;
 class customer
 {
    public:
    string name;
    int acc_no;
    float balance;
    void getdata()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter account number: ";
        cin>>acc_no;
        cout<<"Enter balance: ";
        cin>>balance;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Account number: "<<acc_no<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
 };
 class transfer:public customer
 {
    public:
    float amount;
    void getdata()
    {
        customer::getdata();
        cout<<"Enter amount to transfer: ";
        cin>>amount;
    }
    void withdraw()
    {
        if(amount>balance)
        {
            cout<<"Insufficient balance";
        }
        else
        {
            balance=balance-amount;
            cout<<"Amount transferred successfully. Remaining balance: "<<balance;
        }
    }
    void deposit()
    {
        balance=balance+amount;
        cout<<"Amount deposited successfully. Current balance: "<<balance;
    }
 };
 int main()
 {
    transfer t;
    t.getdata();
    int choice;
    cout<<"Enter choice 1 to withdraw, 2 to deposit , 3 to Account details: ";
    cin>>choice;
    switch(choice)
    {        case 1:
        t.withdraw();
        break;
        case 2:
        t.deposit();
        break;
        case 3:
        t.display();
        break;
        default:
        cout<<"Invalid choice";
    }
    return 0;
 }