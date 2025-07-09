//The lower bound is the smallest index, ind, where arr[ind] >= x,
//But if any such index is not found, the lower bound algorithm returns n
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int LowerBound(vector<int> arr, int x)
{
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]>=x)
            return i;
    }
    return arr.size();
}




int LowerBound(vector<int> arr, int x)
{
    int n=arr.size();
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid=low+high/2;

        if(arr[mid]<x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return low;
}