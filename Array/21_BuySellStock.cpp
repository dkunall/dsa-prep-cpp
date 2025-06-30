#include<iostream>
using namespace std;


//{7,1,5,3,6,4}
int maxProfit(vector<int> &arr) {
    int maxPro = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
            maxPro = max(arr[j] - arr[i], maxPro);
            }
        }
        }

    return maxPro;
}

//1 loop solution
int maxProfit2(vector<int> &arr) {
    int maxPro=0;
    int n = arr.size();
    int minPrice = INT_MAX;

    for(int i=0;i<n;i++)
    {
        minPrice=min(minPrice,arr[i]);
        maxPro=max(maxPro,arr[i]-minPrice);
    }
    return maxPro;
}

int main() {
    vector<int> arr = {7, 1, 5, 3, 6, 4, 9, 2, 8, 3, 6, 1, 4};
    cout << "Max Profit (O(n^2)): " << maxProfit(arr) << endl;
    cout << "Max Profit (O(n)): " << maxProfit2(arr) << endl;
    return 0;
}