#include <bits/stdc++.h>
using namespace std;
void vectors6(){
    //insert function
    vector<int>v={2,3,5,7};
    v.insert(v.begin(),4);
    for(auto x : v){
        cout << x << " ";
    }
    cout<<endl;
    v.insert(v.begin()+2,0);
    for(auto x : v){
        cout << x << " ";
    }
    cout<<endl;
    v.insert(v.begin()+1,2,5);
    for(auto x : v){
        cout << x << " ";
    }
    cout<<endl;
    vector<int> v1 = {2,10};
    v.insert(v.begin(), v1.begin(), v1.end());
    for(auto x : v){
    cout << x << " ";
}
    cout<<endl;
    //erase function
    vector<int>v2={2,8,5,4};
    v2.erase(v2.begin());
    for(auto x : v2){
        cout << x << " ";
    }
    cout<<endl;
    v2.erase(v2.begin()+1,v2.begin()+3);
    for(auto x : v2){
        cout << x << " ";
    }
    cout<<endl;
    //normal functions;
    v2.size();
    cout<<v2.size()<<endl;
}
int main() {
    vectors6();
    return 0;
}
