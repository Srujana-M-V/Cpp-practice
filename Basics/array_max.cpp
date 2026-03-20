#include<iostream>
using namespace std;
int main(){
    int num[5];
    
    cout<<"enter the numbers:"<<endl;
    for(int i=0; i<5; i++ ){
        cin>>num[i];
    }
    int max = num[0];
    for(int i=0; i<5; i++){
        cout<<num[i]<<" ";
    }
    for(int i=0; i<5; i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    cout<<endl;
    cout<<"larget number:"<<max<<endl;
    return 0;
}
