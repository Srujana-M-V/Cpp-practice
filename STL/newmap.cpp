#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    map<int, int> freq; // key = number, value = frequency

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;   // increase count
    }

    cout << "\nElement frequencies:\n";
    for(auto it = freq.begin(); it != freq.end(); it++) {
        cout << it->first << " -> " << it->second << endl;
    }

    return 0;
}
