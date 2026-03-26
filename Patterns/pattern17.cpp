#include <iostream>
using namespace std;

void pattern17(int n){
    for(int i=0; i<n; i++){

        // spaces
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }

        // increasing characters
        for(int j=0; j<=i; j++){
            cout << char('A' + j);
        }

        // decreasing characters
        for(int j=i-1; j>=0; j--){
            cout << char('A' + j);
        }

        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern17(n);
    return 0;
}