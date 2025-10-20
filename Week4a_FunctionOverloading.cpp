#include <iostream>
using namespace std;

void add(int a, int b) { cout << "Sum = " << a + b << endl; }
void add(double a, double b) { cout << "Sum = " << a + b << endl; }
void add(int a, int b, int c) { cout << "Sum = " << a + b + c << endl; }

int main() {
    add(2, 3);
    add(2.5, 3.1);
    add(1, 2, 3);
    return 0;
}