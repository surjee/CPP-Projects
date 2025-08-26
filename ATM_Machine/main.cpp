#include<iostream>
#include<string>

using namespace std;

class Bank
{
private:
    string name;
    long long accnt_number;
    long long amount;
    long long tot;
public:
    void setvalue()
    {
        cout << "\nEnter name: ";
        cin >> name;
        cout << "\nEnter account number: ";
        cin >> accnt_number;
        cout << "\nEnter amount: ";
        cin >> tot;
    }
    void showdata()
    {
        cout << "\nAccount name: ";
        cout << name;
        cout << "\nAccount Number: ";
        cout << accnt_number;
        cout << "\nAccount Balance: ";
        cout << tot;
    }
    void deposit()
    {
        cout << "Enter amount to be deposited: ";
        cin >> amount;
    }
    void showbal()
    {
        tot = tot + amount;
        cout << "\nTotal Balance: ";
        cout << tot;
    }
    void withdraw()
    {
        int a;
        cout << "\nEnter amount to withdraw: ";
        cin >> a;
        tot = tot - a;
        cout << "\nAvailable Balance: ";
        cout << tot;
    }

};
int main()
{
   Bank a;
   while(1)
   {
    int ch;
     cout << "\n\n****************************Bank************************************";
     cout <<  "\nEnter 1 for add account details\n";
     cout <<  "Enter 2 to show account details\n";
     cout <<  "Enter 3 to deposit\n";
     cout <<  "Enter 4 to show balance";
     cout <<  "\nEnter 5 for withdraw\n";
     cout << "Enter 6 to exit\n";
     cin >> ch;
     switch(ch)
     {
        case 1:
            a.setvalue();
            break;
        case 2:
            a.showdata();
            break;
        case 3:
            a.deposit();
            break;
        case 4:
            a.showbal();
            break;
        case 5:
            a.withdraw();
            break;
        case 6:
            cout <<"\n Thankyou\n";
            return 0;
        default:
            cout << "Invalid Input";
            break;
     }
   }
   return 0;
}