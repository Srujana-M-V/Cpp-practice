#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    // Inserting elements (including duplicates)
    s.insert(10);
    s.insert(20);
    s.insert(10);
    s.insert(30);

    // Display elements
    cout << "Elements in set: ";
    for(auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}
