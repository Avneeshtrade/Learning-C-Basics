#include <iostream>

using namespace std;

class Box {
    private:
        int width;
    public:
        Box(int w) { width = w; }
        friend void printWidth(Box);
};
    
void printWidth(Box b) {
    cout << "Width: " << b.width << endl; // Access private data
}

int main() {
    Box box(10);
    printWidth(box);
    return 0;
}