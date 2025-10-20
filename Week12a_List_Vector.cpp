#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
    list<int> l = {1,2,3};
    l.push_back(4);
    l.remove(2);
    for(int x: l) cout << x << " ";
    cout << endl;

    vector<int> v = {10,20,30};
    v.push_back(40);
    v.erase(v.begin());
    for(int x: v) cout << x << " ";
    return 0;
}