#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accontNumber;

    double balance;

public:
    BankAccount(string accNum, double initialBalance)
    {
        accontNumber = accNum;
        balance = initialBalance;
    }

    // getter
    double getBalance() const
    {
        return balance;
    }

    //
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << " Deposited : " << amount << endl;
        }
        else
        {
            cout << " Invalid deposit";
        }
    }
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn :" << amount << endl;
        }
        else
        {
            cout << "Invalid withdrawn amount " << endl;
        }
    }
};

int main()
{
    BankAccount myAccount("1232454353", 500);

    myAccount.getBalance();

    myAccount.deposit(200);
    myAccount.withdraw(100);

    return 0;
}
