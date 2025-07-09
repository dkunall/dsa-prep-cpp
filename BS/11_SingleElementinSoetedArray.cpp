#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int ArrayRoatedTimes(vector<int> arr)
{
    int n=arr.size();
    for(int i=1;i<n-2;i++)
    {
        if(arr[i-1]>arr[i])
        {
            return i;
        }
    }
    return 0;
}


int findKRotation(vector<int> &arr) {
    int low = 0, high = arr.size() - 1;
    int ans = INT_MAX;
    int index = -1;
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[low] <= arr[high]) 
        {
            if (arr[low] < ans) {
                index = low;
                ans = arr[low];
            }
            break;
        }


        if (arr[low] <= arr[mid]) 
        {
            if (arr[low] < ans) {
                index = low;
                ans = arr[low];
            }
            low = mid + 1;
        }
        else
        {
            if (arr[mid] < ans) {
                index = mid;
                ans = arr[mid];
            }
            high = mid - 1;
        }
    }
    return index;
}



int main()
{
    vector<int> arr = {4, 5, 6, 7, 1, 2, 3};
    int ans = ArrayRoatedTimes(arr);
    cout << "The array is rotated " << ans << " times.\n";
    return 0;
}

