#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum, double initialBalance)
    {
        accountNumber = accNum;
        balance = initialBalance;
    }

    // getter for getting balance

    double getBalance() const
    {
        return balance;
    }

    // method to deposit money

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Successfully Deposited of: " << amount << " in your bank account" << endl;
        }
        else
        {
            cout << "Invalid deposit amount" << endl;
        }
    }

    void withdrawal(double amount)
    {
        if (amount <= balance && amount > 0)
        {
            balance -= amount;
            cout << "Successfully Withdrawal of: " << amount << " in your bank account" << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount" << endl;
        }
    }
};

int main()
{
    BankAccount myAccount("1222221", 5000);
    double balance = myAccount.getBalance();
    cout << "Your account balance: " << balance << endl;
    myAccount.deposit(599);
    balance = myAccount.getBalance();
    cout << "Your account balance: " << balance << endl;
    myAccount.withdrawal(1000);
    balance = myAccount.getBalance();
    cout << "Your account balance: " << balance << endl;
    return 0;
}