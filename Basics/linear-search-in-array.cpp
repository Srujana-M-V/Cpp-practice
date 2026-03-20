#include<iostream>
using namespace std;
int main(){
    int num[5]={4,8,6,13,15};
    int key=13;
    for(int i=0; i<5; i++){
        if(key==num[i]){
            cout<<"number found";
        }
    }
    return 0;
}
