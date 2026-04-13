#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;

    // Adding elements
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);

    // Display elements
    cout << "Elements in vector: ";
    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
