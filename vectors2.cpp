#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
void vector2(int n){
for(int i=0; i<n; i++){
    if(v[i]%2==0){
        cout<<v[i]<<" ";
    }
}
}
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector2(n);
    return 0;
}