#include <bits/stdc++.h>
using namespace std;

void pq1(){
    priority_queue<int> pq;

    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(1);

    cout << "Top: " << pq.top() << endl; // 8

    pq.pop();

    cout << "After pop Top: " << pq.top() << endl; // 5

    cout << "Priority Queue: ";
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
}

int main(){
    pq1();
}