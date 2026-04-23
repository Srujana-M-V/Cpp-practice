#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void abc(){
    vector<int> v={2,6,8,9};
    vector<int>::iterator it1=v.begin();
    vector<int>::iterator it2=v.end();
    cout<<*it1<<endl;
    it1++;
    cout<<*it1<<endl;
    it2--;                  
    cout << *it2 << endl;   

    it1++;                  
    cout << *it1 << endl; 
   for(auto x : v){
        cout << x << " ";
    }
}

int main(){
    abc();
    return 0;
}