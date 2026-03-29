#include <iostream>
using namespace std;
void pattern19(int n){
    int s=0;
    for(int i=0; i<n; i++){
        //stars
        for(int j=1; j<=n-i; j++){
            cout<<"*";
        }
        //spaces
        for(int j=0; j<s; j++){
            cout<<" ";
        }
        //stars
        for(int j=1; j<=n-i; j++){
            cout<<"*";
        }
        s+=2;
        cout<<endl;
    }
    s=2*n-2;
    for(int i=1; i<=n; i++){
        //stars
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        //spaces
        for(int j=0; j<s; j++){
            cout<<" ";
        }
        //stars
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        s-=2;
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern19(n);
    return 0;
}