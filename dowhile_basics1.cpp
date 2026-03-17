#include <iostream>
using namespace std;

int main(){
     int n;

    do{
        cout << "Enter number: ";
        cin >> n;
    }
    while(n <= 5);
    cout << "You entered a number greater than 5";

}