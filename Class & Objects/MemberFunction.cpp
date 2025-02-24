#include <iostream>

using namespace std;

// **Inside Class Definition**
class Car1 {
public:
    string brand;
    void display() {  // Function inside class
        cout << "Brand: " << brand << endl;
    }
};
// **Outside Class Definition**

class Car2 {
public:
    string brand;
    void display(); // Function Declaration
};

// Function Definition Outside Class
void Car2::display() {
    cout << "Brand: " << brand << endl;
}
int main() {
    Car1 car1; // Object Creation
    car1.brand = "Toyota";
    cout << "Brand: " << car1.brand << endl;
    return 0;
}