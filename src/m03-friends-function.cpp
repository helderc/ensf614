#include<iostream>

using namespace std;

class BankAccount {
    private:
        double balance;
        string ownerId;
    public:
        BankAccount(string ownerId, double balance)
            : balance(balance), ownerId(std::move(ownerId)) {}

        // Grant a non-member function access to private members
        friend void auditTransaction(const BankAccount& account, double amount);
};

void auditTransaction(const BankAccount& account, double amount) {
    cout << "Auditing account " << account.ownerId
              << " | current balance: " << account.balance
              << " | transaction amount: " << amount << '\n';
    // e.g. flag to a compliance log if amount exceeds some threshold
}

int main(int argc, char* argv[])
{
    BankAccount b1("001", 1000);

    auditTransaction(b1, 500);

    return 0;
}