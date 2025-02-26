#include <iostream>

using namespace std;

// **Outside Class Definition**

class Car2 {
    string brand;
public:
    void setBrand(string brand) {
        this->brand = brand;
    } // this is the setter method which is exposed to user to set value of the private member
    void display(); // Function Declaration
    int getSpeed();
};
/*
Syntax for defining the method outside the class
returnType ClassName::methodName(argument) {
    // Method Body
}
*/
int Car2::getSpeed() {
    return 20;
}
// Function Definition Outside Class
void Car2::display() { // :: => this operator is known as scope resolution operator 
    cout << "Brand: " << brand << endl;
}
int main() {
    Car2 car1; // Object Creation ()
    car1.setBrand("Toyota");
    // car1.brand = "Toyota"; // Error due Assignment value to private member(brand)
    // cout << "Brand: " << car1.brand << endl; // this will give error because brand is private member
    car1.display();
    return 0;
}