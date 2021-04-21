/*
 * Banking System Ver 0.1
 * Written by: Seongwoo Yoon
 * Contents: Basic Structure of OOP Step-by-step Project
 */
#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN=20;

void ShowMenu(void);        // Print menu
void MakeAccount(void);     // Function for creating account
void DepositMoney(void);    // Deposit
void WithdrawMoney(void);   // Withdrawal
void ShowAllAccInfo(void);  // Show account info

enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

class Account
{
private:
    int accID;      // Account number
    int balance;    // Balance
    char *cusName;  // Customer name
public:
    Account(int ID, int money, char *name)
        : accID(ID), balance(money)
    {
        cusName = new char[strlen(name)+1];
        strcpy(cusName, name);
    }

    int GetAccID() { return accID; }

    void Deposit(int money)
    {
        balance += money;
    }

    int Withdraw(int money) // Return withdrawal money. Return 0 if balance is insufficient
    {
        if(balance < money)
            return 0;

        balance -= money;
        return money;
    }

    void ShowAccInfo()
    {
        cout << "Account ID: " << accID << endl;
        cout << "Name: " << cusName << endl;
        cout << "Balance: " << balance << endl;
    }

    ~Account()
    {
        delete []cusName;
    }
};

Account * accArr[100];  // An array to store Account
int accNum = 0;         // The number of stored accounts

int main(void)
{
    int choice;

    while(1)
    {
        ShowMenu();
        cout<<"Select: ";
        cin>>choice;
        cout<<endl;

        switch(choice)
        {
            case MAKE:
                MakeAccount();
                break;
            
            case DEPOSIT:
                DepositMoney();
                break;

            case WITHDRAW:
                WithdrawMoney();
                break;

            case INQUIRE:
                ShowAllAccInfo();
                break;

            case EXIT:
                for(int i=0; i<accNum; i++)
                    delete accArr[i];
                return 0;

            dafault:
                cout<<"Illegal selection.."<<endl;
        }
    }

    return 0;
}

void ShowMenu(void)
{
    cout<<"----------------Menu---------------" <<endl;
    cout<<"1.   Create account"                 <<endl;
    cout<<"2.   Deposit"                        <<endl;
    cout<<"3.   Withdraw"                       <<endl;
    cout<<"4.   Show all accounts information"  <<endl;
    cout<<"5.   Exit the program"               <<endl;
}

void MakeAccount(void)
{
    int id;
    char name[NAME_LEN];
    int balance;

    cout<<"[Create account]"<<endl;
    cout<<"Account ID: ";           cin>>id;
    cout<<"Name: ";                 cin>>name;
    cout<<"Deposit amount: ";       cin>>balance;
    cout<<endl;

    accArr[accNum++] = new Account(id, balance, name);
}

void DepositMoney(void)
{
    int money;
    int id;
    cout<<"[Deposit]"<<endl;
    cout<<"Account ID: ";           cin>>id;
    cout<<"Deposit amount: ";       cin>>money;

    for(int i=0; i<accNum; i++)
    {
        if(accArr[i]->GetAccID()==id)
        {
            accArr[i]->Deposit(money);
            cout<<"Deposit complete"<<endl<<endl;
            return;
        }
    }
    cout<<"Invalid account ID."<<endl<<endl;
}

void WithdrawMoney(void)
{
    int money;
    int id;
    cout<<"[Withdrawal]"<<endl;
    cout<<"Account ID: ";           cin>>id;
    cout<<"Withdrawal amount: ";    cin>>money;

    for(int i=0; i<accNum; i++)
    {
        if(accArr[i]->GetAccID()==id)
        {
            if(accArr[i]->Withdraw(money)==0)
            {
                cout<<"Insufficient balance"<<endl<<endl;
                return;
            }

            cout<<"Withdrawal complete"<<endl<<endl;
            return;
        }
    }
    cout<<"Invalid account ID."<<endl<<endl;
}

void ShowAllAccInfo(void)
{
    for(int i=0; i<accNum; i++)
    {
        accArr[i]->ShowAccInfo();
        cout << endl;
    }
}