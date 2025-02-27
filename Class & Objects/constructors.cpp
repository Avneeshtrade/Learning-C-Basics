#include <iostream>

using namespace std;


//**Example: Default & Parameterized Constructor**
class Car {
public:
    string brand;
    int speed;

    // Constructor (Default)
    Car() {
        cout<<"Default constructor called"<<endl;
        brand = "Unknown";
        speed = 0;
    }

    // Constructor (Parameterized)
    Car(string b, int s) {
        cout<<"Parameterized constructor called"<<endl;
        brand = b;
        speed = s;
    }
    //**Example: Copy Constructor**
    Car(const Car &obj) {
        cout<<"Copy constructor called"<<endl;
        brand = obj.brand;
        speed = obj.speed;
    }
    // Destructor
    ~Car() { cout << "Car object destroyed!" << endl; }
    void display() {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};

int main()
{
    Car car1; // Default constructor called
    Car car2("BMW", 200); // Parameterized constructor called
    Car car3 = car2; // Copy constructor called
    return 0;
}