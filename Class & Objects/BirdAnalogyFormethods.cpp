#include <iostream>

using namespace std;

class Bird {
    public:
    void speak() {
        cout << "I am a bird" << endl;
    } // instance Method or Behavior or member function
};
int main() {
    Bird bird1;
    bird1.speak();
    return 0;
}