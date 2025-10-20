#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add(3, 5) << endl;
    cout << add(2.5, 3.1) << endl;
    return 0;
}