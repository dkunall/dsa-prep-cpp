// 2 loop
// hashmap
//2 pointer
#include<iostream>
#include<vector>
using namespace std;

//2 loop
void twoSum1(vector<int> &arr, int target)
{
    vector<int> ans;
    int n = arr.size();

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }

    return {-1,-1};
}

// hashmap

vector<int> twoSum2(vector<int> &arr, int target)
{
    unordered_map<int, int> mp;
    for(int i=0;i<n;i++)
    {
        int  rem=target-arr[i];

        if(mp.find(rem)!=mp.end())
        {
            return {mp[rem],i};
        }

        mp[arr[i]]=i;

    }
    return {-1,-1};
}

// 2 pointer
vector<int> twoSum3(vector<int> &arr, int target)
{
    int n = arr.size();
    vector<int> ans;
    int l = 0, r = n - 1;

    while (l < r) {
        if (arr[l] + arr[r] == target) {
            ans.push_back(l);
            ans.push_back(r);
            return ans;
        }
        else if (arr[l] + arr[r] < target)
        {
            l++;
        }
        else
        {
            r--;
        }
    }

    return {-1, -1};
}
