#include<iostream>

using namespace std;

class BankAccount
{
	private:
            string accountHolder;
            int	accountNumber; 
            string accountType;
            double balance; 
    public:
    // Default constructor
    BankAccount() 
	{
        accountHolder = "Unknown";
        accountNumber = 0;
        accountType = "Savings";
        balance = 0.0;
    }
     // Parameterized constructor
    BankAccount(string holder, int accNum, string type, double bal) 
	{
        accountHolder = holder;
        accountNumber = accNum;
        accountType = type;
        balance = bal;
    }
    // Accessor methods
    string getAccountHolder() 
	{
        return accountHolder;
    }
    
    int getAccountNumber()
	{
    	return accountNumber;
	}
	string getAccountType()
	{
		return accountType;
	}
	
	 double getBalance()
	 {
	 	return balance; 
	 }
	 // Mutator methods
    void setAccountType(string newType) {
        accountType = newType;
    }
    // Functional methods
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Depositing " << amount << "..." << endl;
            cout << "New Balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawing " << amount << "..." << endl;
            cout << "New Balance: " << balance << endl;
        } else {
            cout << "Insufficient funds or invalid withdrawal amount!" << endl;
        }
    }
	
	void displayAccountDetails() {
        cout << "Account Details:\n" << endl;
        cout << "Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main()
{
 BankAccount account1; 
    BankAccount account2("Ankita Mane", 28042005, "Savings", 10000.00); // Parameterized constructor

    
    account2.displayAccountDetails();

    
    account2.deposit(3500);

  
    account2.withdraw(700);

    
    account2.setAccountType("Current");

    cout<<"____________________\n";
    cout << "Updated Account Type to Current." << endl;
    cout << "Final Account Details:" << endl;
    account2.displayAccountDetails();

    return 0;
}

