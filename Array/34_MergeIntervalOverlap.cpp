#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> MergeInterval(vector<vector<int>> interval)
{
    int m=interval.size();
    int n=interval[0].size();

    sort(interval.begin(), interval.end());
    vector<vector<int>> ans;

    for(int i=0;i<m;i++)
    {
        int start = arr[i][0];
        int end = arr[i][1];

        if (!ans.empty() && end <= ans.back()[1])
        {
            continue;
        }

            for (int j = i + 1; j < n; j++) {
            if (arr[j][0] <= end)
            {
                end = max(end, arr[j][1]);
            }
            else
            {
                break;
            }
        }

        ans.push_back({start, end});
    }
    return ans;

}

vcetor<vector<int>> MergeIntervalOverlap(vector<vetor<int> arr)
{
    int n=arr.size();
    sort(arr.begin(),arr.end());
    vector,>vector<int> ans;

    for(int i=0;i<n;i++)
    {
        if(ans.empty() || ans.back()[1]>arr[i][0])
        {
            ans.push_back(arr[i]);
        }
        else
        {
            ans.back()[1]=max(ans.back()[1],arr[i][1]);
        }
    }
    return ans;
}