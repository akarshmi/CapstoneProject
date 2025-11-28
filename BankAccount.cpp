#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    string accountHolderName;
    string accountType;
    double balance; // Initializing balance to 0.0 can be initialized directly or if used db then can be set later
    
    public:
    BankAccount(string accNum, string accHolderName, string accType, double initialBalance)
    {
        accountNumber = accNum;
        accountHolderName = accHolderName;
        accountType = accType;
        balance = initialBalance;
    }
    
    
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: " << amount << " rupees succsesfully." << endl;
            cout << "New Balance: " << balance << endl;
        }
        else
        {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    void getBalance() const
    {
        cout << "Current Balance: " << balance << " rupees" << endl;
    }
};

int main()
{
    string accountNumber;
    string accountHolderName;
    string accountType;
    double balance;

    cout << "/t Bank Account Management System" << endl;
    cout << "----------------------------------" << endl;
    cout << "Enter Account Number: ";
    getline(cin, accountNumber);
    cout << "Enter Account Holder Name: ";
    cin.ignore(); // To ignore the newline character left in the input buffer
    getline(cin, accountHolderName);
    cout << "Enter Account Type (Savings/Current): ";
    getline(cin, accountType);
    cout << "Enter Initial Balance: ";
    cin >> balance;

    BankAccount newAccount(accountNumber, accountHolderName, accountType, balance);

    cout << "Account Created Successfully!" << endl;

    // account generation can be done by random number and stored in db later

    bool loop = true; // Assuming you want to keep the program running until a condition is met

    while (loop)
    {
        cout << "----------------------------------" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {

            double depositAmount;
            cout << "Enter amount to deposit: ";
            cin >> depositAmount;
            newAccount.deposit(depositAmount);

            break;

        case 2:
        {

            break;

        case 3:
        {
            newAccount.getBalance();
            break;
        }
        case 4:
        {
            cout << "Exiting the program." << endl;
            loop = false; // Exit the loop
            break;
        }
        }
        }

            return 0;
        }
    }
}