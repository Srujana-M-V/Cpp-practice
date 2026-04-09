#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void explainvector(){
    vector <int> v;
    v.push_back(5);
    v.emplace_back(2);
    v.emplace_back(7);
    v.emplace_back(1);
    vector<pair<int,int>> v1;
    v1.push_back({2,3});
    v1.emplace_back(2,8);
    v1.emplace_back(6,8);
    cout << "Vector: ";
    for(int x : v){
        cout << x << " ";
    }
    cout << endl;

    // print vector of pairs
    cout << "Vector of pairs: ";
    for(auto p : v1){
        cout << "(" << p.first << "," << p.second << ") ";
    }
    cout << endl;
}
int main(){
    explainvector();
    return 0;
}