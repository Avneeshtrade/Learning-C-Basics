#include <iostream>

using namespace std;

class BankAccount {
private:
    int balance;
protected:
    void setBalance(int b) {
        balance = b;
    } // Private: Not accessible outside
public:
    int getBalance() {
        return balance;
    }
};
class SavingBankAccount: public BankAccount {
    int interestRate;
    public:
    void setInterestRate(int rate) {
        // balance = rate; // ❌ Not accessible
        interestRate = rate; // ✅ Accessible through function
    }
    int getInterestRate() {
        return interestRate;
    }
};
// class Shape {
//     protected:
//     void Area(){
//         cout<< "shape area"<<endl;
//     };
// };
// class Rectangle: protected Shape {
//     public:
//     void Area() {
//         Shape::Area(); // Calling base class method inside derived class
//         cout<< "Rectangle area"<<endl;
//     }
// };
int main() {
    SavingBankAccount savingAccount;
    // savingAccount.balance = 1212; // ❌ Not accessible
    savingAccount.setInterestRate(10); // Not accessible as it is protected
    // savingAccount.setBalance(5000); // ✅ Allowed through function
    cout << savingAccount.getInterestRate()<< endl; // ✅ Allowed through function
    cout << savingAccount.getBalance(); // ✅ Allowed through function
    return 0;
}
// int main() {
//     Rectangle rect1;
//     rect1.Area(); // ✅ Allowed through function
//     return 0;
// }