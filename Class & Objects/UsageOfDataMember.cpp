#include <iostream>

using namespace std;

class Car {
    string brand; // Data Member
    int speed;    // Data Member
    int year;
public: 
    Car(string brand, int speed, int year){
        this->brand = brand;
        this->speed = speed;
        this->year = year;
    }
    string GetBrand(){
        return this->brand;
    }
    int GetSpeed(){
        return this->speed;
    }
    int GetYear(){
        return this->year;
    }
};
int main() {
    Car car1("Toyota", 20, 1990); // Object Creation
    cout << "Brand: " << car1.GetBrand()<< endl;
    cout << "Speed: " << car1.GetSpeed() << endl;
    cout << "Year: " << car1.GetYear() << endl;
    return 0;
}
