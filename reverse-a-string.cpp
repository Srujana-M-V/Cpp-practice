#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter string:";
    cin>>s;
    for(int i=s.length()-1; i>=0; i--){
        cout<<s[i]<<endl;
    }
    return 0;
}