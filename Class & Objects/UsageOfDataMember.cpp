#include <iostream>

using namespace std;

class Car {
public:
    string brand; // Data Member
    int speed;    // Data Member
};
int main() {
    Car car1; // Object Creation
    car1.brand = "Toyota";
    car1.speed = 120;
    cout << "Brand: " << car1.brand << endl;
    cout << "Speed: " << car1.speed << endl;
    return 0;
}