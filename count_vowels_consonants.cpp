#include <iostream>
using namespace std;

int main(){
    string s;
    int vowels = 0;
    int consonants = 0;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            cout<<"vowels="<<s[i]<<endl;
           vowels++;
        }
        else{
            cout<<"consonents="<<s[i]<<endl;
           consonants++;
        }

    }
    cout<<"Vowels = "<<vowels<<endl;
    cout<<"Consonants = "<<consonants<<endl;

    return 0;
}