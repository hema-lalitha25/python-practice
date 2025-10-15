#include <iostream>
#include <string>
using namespace std;
class teacher{
    public:
    string name;
    string dept;
    string subject;
    double salary;
    void changeDept(string newDept){
        dept = newDept;
    }
};

int main() {
    teacher t1;
    
    return 0;
}

