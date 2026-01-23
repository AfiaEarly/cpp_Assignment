#include <iostream>
using namespace std;
void processTransaction(int &current_balance, int amount, bool is_fee = false)
{
    if (is_fee)
    {

        if (current_balance - amount < 0)
        {
            cout << "Insufficient Funds" << endl;
        }
        else
        {
            current_balance = current_balance - amount;
        }
    }
    else
    {
        current_balance = current_balance + amount;
    }
}

int main()
{
    int balance = 500;
    cout << "Current balance : " << balance << endl;

    processTransaction(balance, 300, false);
    cout << "Adds Money : " << balance << endl;

    processTransaction(balance, 100, true);
    cout << "Pay fee: " << balance << endl;

    processTransaction(balance, 900, true);
}