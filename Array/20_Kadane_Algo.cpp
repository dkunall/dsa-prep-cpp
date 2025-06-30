
#include <bits/stdc++.h>
using namespace std;

//3 loop solution
int maxSubarraySum(int arr[], int n) {
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;

            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }

            maxi = max(maxi, sum);
        }
    }

    return maxi;
}


// 2 loop solution
int maxSubarraySum2(int arr[], int n)
{
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            
            sum += arr[j];

            maxi = max(maxi, sum);
        }
    }
}

// 1 loop solution
// Kadane's Algorithm
long long maxSubarraySum3(int arr[], int n) {
    long long maxi = LONG_MIN;
    long long sum = 0;

    for (int i = 0; i < n; i++) {

        sum += arr[i];

        if (sum > maxi) {
            maxi = sum;
        }

        
        if (sum < 0) {
            sum = 0;
        }
    }

    return maxi;
}

//updated Kadane's Algorithm to also return the starting and ending indices of the maximum subarray
long long maxSubarraySum4(int arr[], int n) {
    long long maxi = LONG_MIN; 
    long long sum = 0;

    int start = 0;
    int ansStart = -1, ansEnd = -1;
    for (int i = 0; i < n; i++) {

        if (sum == 0) start = i;
        sum += arr[i];

        if (sum > maxi) {
            maxi = sum;

            ansStart = start;
            ansEnd = i;
        }

        if (sum < 0) {
            sum = 0;
        }
    }

    cout << "The subarray is: [";
    for (int i = ansStart; i <= ansEnd; i++) {
        cout << arr[i] << " ";
    }
    cout << "]n";



    return maxi;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum subarray sum is: " << maxSubarraySum(arr, n) << endl;

    return 0;
}