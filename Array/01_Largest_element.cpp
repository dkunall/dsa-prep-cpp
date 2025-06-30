#include <bits/stdc++.h>
using namespace std;

int findLargestElement(const vector<int>& arr) {
    int largest = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int largest = findLargestElement(arr);
    cout << "The largest element is: " << largest << endl;
    return 0;
}
