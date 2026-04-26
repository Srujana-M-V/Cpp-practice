#include <bits/stdc++.h>
using namespace std;

void map1(){
    map<int,int> mpp;

    mpp[1] = 2;
    mpp.emplace(3,1);
    mpp.insert({2,4});

    cout << "Map elements:\n";
    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }

    cout << "Value at key 1: " << mpp[1] << endl;

    cout << "Value at key 5: " << mpp[5] << endl; // default 0
}

int main(){
    map1();
}