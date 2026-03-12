#include<iostream>
using namespace std;
int main(){
    int num[5];
    int sum=0;
    cout<<"enter the numbers: "<<endl;
    for(int i=0; i<5; i++){
        cin>>num[i];
    }
    cout<<"array: "<<endl;
    for(int i=0; i<5; i++){
        cout<<num[i]<<" ";
        sum=sum+num[i];
    }
    cout<<endl;
    cout<<"sum:"<<sum<<endl;
}