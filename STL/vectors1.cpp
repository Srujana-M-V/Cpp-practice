#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v;

    // store values
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    // print values
    for(int i = 0; i < n; i++){
        cout << v[i] << endl;
    }

    return 0;
}