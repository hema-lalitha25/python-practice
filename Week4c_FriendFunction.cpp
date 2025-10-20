#include <iostream>
using namespace std;

class Box {
private:
    int length;
public:
    Box(int l) { length = l; }
    friend void show(Box b);
};

void show(Box b) {
    cout << "Length = " << b.length << endl;
}

int main() {
    Box b1(10);
    show(b1);
    return 0;
}