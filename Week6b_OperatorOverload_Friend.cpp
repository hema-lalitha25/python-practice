#include <iostream>
using namespace std;

class Complex {
    int r, i;
public:
    Complex(int a=0, int b=0): r(a), i(b) {}
    friend Complex operator+(Complex, Complex);
    void show() { cout << r << "+i" << i << endl; }
};

Complex operator+(Complex c1, Complex c2) {
    return Complex(c1.r + c2.r, c1.i + c2.i);
}

int main() {
    Complex a(3,4), b(1,2);
    Complex c = a + b;
    c.show();
    return 0;
}