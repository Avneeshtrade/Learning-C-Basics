#include <iostream>

using namespace std;

class Shape {
    public:
    Shape() {
        length = 10;
        breadth = 20;
    }
    protected:
    int length, breadth;
    
    void Area(){
        cout<< "shape area "<< length*breadth <<endl;
    };
};
// class Rectangle: public Shape {
//     public:
//     void RectangeArea() {
//         // Shape::Area(); // Calling base class method inside derived class
//         cout<< "Rectangle area"<<endl;
//     }
// };
class Rectangle: protected Shape {
    public:
    void RectangeArea() {
        Area();
        // Shape::Area(); // Calling base class method inside derived class
        cout<< "Rectangle area"<<endl;
    }
};
int main() {
    Rectangle shape1;
    shape1.RectangeArea(); // ✅ Allowed through function
    // shape1.Area(); // ❌ Not accessible
    // shape1.Area(); // ✅ Allowed through function
    // cout << shape1.length << endl;
    return 0;
}
