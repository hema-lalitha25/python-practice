#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    cout << "Square of 5 = " << square(5) << endl;
    cout << "Square of 7 = " << square(7) << endl;
    return 0;
}