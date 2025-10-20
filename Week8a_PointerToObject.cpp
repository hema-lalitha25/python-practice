#include <iostream>
using namespace std;

class Student {
    int id;
public:
    void set(int i) { id = i; }
    void show() { cout << "ID = " << id << endl; }
};

int main() {
    Student s1, *ptr;
    ptr = &s1;
    ptr->set(101);
    ptr->show();
    return 0;
}