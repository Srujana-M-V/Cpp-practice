// Program to find sum of numbers from 1 to 10 using do-while loop

#include <iostream>
using namespace std;

int main(){

    int n = 1;
    int sum = 0;

    do{
        sum = sum + n;
        n++;
    }
    while(n <= 10);

    cout << "Sum = " << sum;

    return 0;
}