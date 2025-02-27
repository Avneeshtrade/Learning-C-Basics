#include <iostream>

using namespace std;

class Counter {
    public:
        static int count; // Static Variable
        int instanceCount; // Non-static Variable
        Counter() {
            count++;
        }
        void countInstance() {
            count++; // can be accessed
            instanceCount++; // can be accessed
        }
        static void showCount() { // Static Function
            cout << "Count: " << count << endl;
        }
};
    
int Counter::count = 0; // Initialize Static Variable

int main(){
    Counter c1, c2, c3;
    Counter::showCount(); // ✅ Accessible through class name
    return 0;
}