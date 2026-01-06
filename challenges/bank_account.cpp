#include <iostream>

struct Account
{
private:
    int balance;

public:
    Account(int deposit)
    {
        if (deposit < 0) balance = 0;
        else balance = deposit;
    }

    void deposit(int amount)
    {
        if (amount < 0) std::cout << "Invalid!" << std::endl;
        else balance += amount;
    }

    // GETTER
    int getBalance()
    {
        return balance;
    }
};

int main()
{
    Account acc(100);

    acc.deposit(-50);
    std::cout << "Balance: " << acc.getBalance() << std::endl;

    acc.deposit(50);
    std::cout << "Balance: " << acc.getBalance() << std::endl;
    
    return 0;
}