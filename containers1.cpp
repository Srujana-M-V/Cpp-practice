#include <bits/stdc++.h>
using namespace std;
//deque
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
//list
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
//stack
void stack1(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    cout << "Top: " << s.top() << endl;  // 3

    s.pop();

    cout << "After pop, Top: " << s.top() << endl; // 2

    // printing stack
    cout << "Stack elements: ";
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
}

int main(){
    deque1();
    cout<<endl;
    list1();
    cout<<endl;
    stack1();
    cout<<endl;
    return 0;
}