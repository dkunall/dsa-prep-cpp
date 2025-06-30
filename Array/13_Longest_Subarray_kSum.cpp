#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int LongestKsum(vector<int> &arr, int k)
{
    int n = arr.size();
    int maxLength = 0;
  
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==k)
            {
                maxLength = max(maxLength, j-i+1);
            }
        }
    }

    return maxLength;
}



//2
#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size();

    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];

        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        long long rem = sum - k;

        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }

    return maxLen;
}

// 2 pointer
int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size();

    int left = 0, right = 0;
    long long sum = a[0];
    int maxLen = 0;
    while (right < n)
    {

        while (left <= right && sum > k)
        {
            sum -= a[left];
            left++;
        }

        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < n) sum += a[right];
    }

    return maxLen;
}

int main()
{
    vector<int> arr = {1, 2, 3, -2, 5};
    int k = 5;
    int result = LongestKsum(arr, k);
    cout << "The length of the longest subarray with sum " << k << " is: " << result << endl;
    return 0;
}