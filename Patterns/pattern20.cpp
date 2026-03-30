#include <iostream>
using namespace std;

void pattern(int n){

    // upper half
    for(int i=0; i<n; i++){
        for(int j=0; j<2*n; j++){

            if(j < n-i || j >= n+i){
                if(j == 0 || j == 2*n-1 || j == n-i-1 || j == n+i){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }

    // lower half
    for(int i=n-2; i>=0; i--){
        for(int j=0; j<2*n; j++){

            if(j < n-i || j >= n+i){
                if(j == 0 || j == 2*n-1 || j == n-i-1 || j == n+i){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern(n);
    return 0;
}