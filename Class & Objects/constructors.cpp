#include <iostream>

using namespace std;


//**Example: Default & Parameterized Constructor**
class Car {
public:
    string brand;
    int speed;

    // Constructor (Default)
    Car() {
        brand = "Unknown";
        speed = 0;
    }

    // Constructor (Parameterized)
    Car(string b, int s) {
        brand = b;
        speed = s;
    }

    void display() {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};
