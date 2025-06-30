#include<iostream>
#include<vector>
using namespace std;

int SecondLargestElement(vector<int>& arr)
{
    int largest = INT_MIN, secondLargest = INT_MIN;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}