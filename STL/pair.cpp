#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void explainpair(){
    pair<int,int> p1={1,6};
    cout<<p1.first<<" "<<p1.second<<endl;
    pair<int, pair<int,int>> p2={1,{2,5}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;
}
int main(){
    explainpair();
    return 0;
}