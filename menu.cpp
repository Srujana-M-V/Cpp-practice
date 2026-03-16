#include <iostream>
using namespace std;

int main(){

    int choice;

    do{
        cout<<"1. Hello\n";
        cout<<"2. Bye\n";
        cout<<"3. Exit\n";

        cin>>choice;

        if(choice==1){
            cout<<"Hello!\n";
        }
        else if(choice==2){
            cout<<"Bye!\n";
        }

    }while(choice != 3);

    return 0;
}