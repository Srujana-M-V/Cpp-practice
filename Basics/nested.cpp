#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age:";
    cin>>age;
    if(age<18){
        cout<<"not eligible for job "<<endl;
    }
    else if(age<=55){
        if(age>50){
            cout<<"eligible but near for retirement";
        }
        else{
            cout<<"eligible";
        }
    }
    return 0;
}
