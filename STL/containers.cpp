#include <bits/stdc++.h>
using namespace std;

void deque1(){
    deque<int> d1 = {1,2,3};

    d1.push_back(5);
    d1.emplace_back(6);
    d1.push_front(1);
    d1.emplace_front(9);

    cout << "Deque: ";
    for(auto x : d1){
        cout << x << " ";
    }
    cout << endl;

    d1.pop_back();
    d1.pop_front();

    cout << "After pop: ";
    for(auto x : d1){
        cout << x << " ";
    }
    cout << endl;

    cout << "Front: " << d1.front() << endl;
    cout << "Back: " << d1.back() << endl;
}

void list1(){
    list<int> l1 = {1,2,3};

    l1.push_back(5);
    l1.emplace_back(6);
    l1.push_front(1);
    l1.emplace_front(9);

    cout << "List: ";
    for(auto x : l1){
        cout << x << " ";
    }
    cout << endl;

    l1.pop_back();
    l1.pop_front();

    cout << "After pop: ";
    for(auto x : l1){
        cout << x << " ";
    }
    cout << endl;

    cout << "Front: " << l1.front() << endl;
    cout << "Back: " << l1.back() << endl;
}

int main(){
    deque1();
    list1();
    return 0;
}