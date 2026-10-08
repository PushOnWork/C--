#include<iostream>
using namespace std;
class Account{
protected:
    string accountHolder;
    int balance;
public:
    Account(string holder, int bal){
        this->accountHolder = holder;
        this->balance = bal;
    }
    void displayBalance(){
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};
class SavingsAccount : public Account{
    int interestRate;
public:
    SavingsAccount(string holder, int bal, int rate) : Account(holder, bal){
        this->interestRate = rate;
    }
    void calculateInterest(){
        int interest = (balance * interestRate)/100;
        cout << "Interest for " << accountHolder << ": " << interest << endl;
        balance += interest;
    }
};
int main(){
    SavingsAccount sc("John Doe", 1000, 5);
    sc.displayBalance();
    sc.calculateInterest();
    sc.displayBalance();
    return 0;
}