#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;
    m[1] = "Kavya";
    m[2] = "Raju";
    m[3] = "AIML";

    m.erase(2);
    for(auto x : m)
        cout << x.first << " → " << x.second << endl;

    if(m.find(3) != m.end())
        cout << "Found key 3\n";
    return 0;
}