#include <iostream>
#include <vector>
using namespace std;

vector<int> fibonacciNumber(int n) {
    vector<int> arr;

    if (n == 1) {
        arr.push_back(0);
    }
    else if (n == 2) {
        arr.push_back(0);
        arr.push_back(1);
    }
    else {
        arr.push_back(0);
        arr.push_back(1);

        for (int i = 2; i < n; i++) {
            int next = arr[i - 1] + arr[i - 2];
            arr.push_back(next);
        }
    }

    return arr;
}

int main() {
    vector<int> result = fibonacciNumber(5);

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}