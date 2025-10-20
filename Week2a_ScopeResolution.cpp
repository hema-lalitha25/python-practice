#include <iostream>
using namespace std;

int a = 10;

namespace MySpace {
    int a = 20;
    void display() {
        cout << "Inside namespace MySpace: a = " << a << endl;
    }
}

int main() {
    int a = 30;
    cout << "Local variable a = " << a << endl;
    cout << "Global variable a = " << ::a << endl;
    cout << "Namespace variable a = " << MySpace::a << endl;
    MySpace::display();
    return 0;
}