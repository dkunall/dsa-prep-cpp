#include<bits/stdc++.h>
using namespace std;

int LargetSum0Sybarray(vector<int> arr)
{
    int n=arr.size();
    unordered_map<int,int> mp;
    int sum=0;
    int MaxLen=0;

    for(int i=0;i<n;i++)
    {
        sum+=arr[i];

        if(sum==0)
        {
            MaxLen = i + 1;
        }
        else if(mp.find(sum)!=mp.end())
        {
            MaxLen=max(MaxLen,i-mp[sum]);
        }
        else
        {
            mp[sum] = i;
        }
    }
    return MaxLen;
}




int main()
{
    vector<int> arr = {9, -3, 3, -1, 6, -5};
    int result = LargetSum0Sybarray(arr);
    cout << "Length of the largest subarray with sum 0 is: " << result << endl;
    return 0;
}