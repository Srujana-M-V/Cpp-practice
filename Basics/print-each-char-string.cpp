#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter the string:";
    cin>>s;
    for(int i=0; i<s.length(); i++){
        cout<<s[i]<<endl;
    }
    return 0;
}
