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
        return brand;
    }
    int GetSpeed(){
        return speed;
    }
    int GetYear(){
        return year;
    }
};
int main() {
    Car cars[] = {Car("Toyota", 20, 1990),Car("Honda", 40, 2000)};
    // string brands[2] = {"Toyota", "Honda"};
    // int speeds[2] = {20, 40};
    // int years[2] = {1990, 2000};
    for(int i = 0; i < 2; i++){
        cout << "Brand: " << cars[i].GetBrand()<< endl;
        cout << "Speed: " << cars[i].GetSpeed() << endl;
        cout << "Year: " << cars[i].GetYear() << endl;
    }
    // for(int i = 0; i < 2; i++){
    //     Car car = Car(brands[i], speeds[i], years[i]);
    //     cout << "Brand: " << car.GetBrand()<< endl;
    //     cout << "Speed: " << car.GetSpeed() << endl;
    //     cout << "Year: " << car.GetYear() << endl;
    // }
    // Car[25] ={"toyota","Honda"}
    // Car car1 = new Car("Toyota", 20, 1990); // Object Creation // wrong way to create an object
    // Car car1("Toyota", 20, 1990); // Object Creation // This is the correct way to create an object
    // Car car1 = Car("Toyota", 20, 1990); // Object Creation // This is the correct way to create an object and more readable
    // Car car2 = Car("Honda", 40, 2000);
    // car1.brand = "Toyota";
    // car1.speed = 120;
    return 0;
}