#include<bits/stdc++.h>
using namespace std;

pair<int,int> FIrstLastIndex(vector<int>& arr, int target)
{
    int n =arr.size();
    int first=-1, last=-1;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            first=i;
            break;
        }
    }

    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==target)
        {
            last=i;
            break;
        }
    }
    return {first,last};
}




int solve(int n, int key, vector < int > & v) {
  int start = 0;
  int end = n - 1;
  int res = -1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (v[mid] == key) {
      res = mid;
      start = mid + 1;

    } else if (key < v[mid]) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return res;
}
