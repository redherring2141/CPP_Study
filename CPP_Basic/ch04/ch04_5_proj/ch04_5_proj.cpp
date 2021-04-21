/*
 * Banking System Ver 0.2
 * Written by: Jiwon Lee
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

typedef struct
{
    int accID;              // Account ID number
    int balance;            // Balance
    char cusName[NAME_LEN]; // Customer name
} Account;

Account accArr[100];        // An array to store accounts
int accNum=0;               // The number of stored accounts

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

    accArr[accNum].accID=id;
    accArr[accNum].balance=balance;
    strcpy(accArr[accNum].cusName, name);
    accNum++;
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
        if(accArr[i].accID==id)
        {
            accArr[i].balance+=money;
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
        if(accArr[i].accID==id)
        {
            if(accArr[i].balance<money)
            {
                cout<<"Insufficient balance"<<endl<<endl;
                return;
            }

            accArr[i].balance-=money;
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
        cout<<"Account ID: "<<accArr[i].accID<<endl;
        cout<<"Name: "<<accArr[i].cusName<<endl;
        cout<<"Balance: "<<accArr[i].balance<<endl<<endl;
    }
}