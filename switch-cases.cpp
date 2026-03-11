#include<iostream>
using namespace std;
int main(){
    int n;
    float balance = 1000;
    float deposit, withdraw;
    cin >> n;
    switch(n){
        case(1):
        cout<<"check balance";
        cout<<balance;
        break;
        case(2):
        cout<<"deposit";
        cin>>deposit;
        balance = balance + deposit;
        cout<<"updated balance ="<<balance<<endl;
        break;
        case(3):
        cout<<"withdraw";
        cin>>withdraw;
        balance = balance - withdraw;
        cout<<"updated balance ="<<balance<<endl;
        break;
        case(4):
        cout<<"exit";
        break;
        default:
        cout<<"invalid option";
        break;
    }
    return 0;
}