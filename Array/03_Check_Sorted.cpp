#include<iostream>
#include<vector>
using namespace std;

bool isSorted( vector<int> arr)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return false;
        }

    }
    return true;
}