#include <iostream>
using namespace std;

int main(){
    int i;
    cin >> i;
    int count=0;
    do{
        i=i/10;
        count++;
    }
    while(i>0);
    cout<<count;
    return 0;
}