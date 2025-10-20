#include <iostream>
using namespace std;

void greet(string name = "Student") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet();
    greet("Kavya");
    return 0;
}