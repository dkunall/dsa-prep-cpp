
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& nums, int target) {
    int n = nums.size();
    int low = 0, high = n - 1;

    while (low <= high) 
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target) return mid;
        else if (target > nums[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}


//recursive version
int binarySearch(vector<int>& nums, int low, int high, int target)
{
    if (low > high) return -1;

    int mid = (low + high) / 2;
    if (nums[mid] == target)
        return mid;

    else if (target > nums[mid])
        return binarySearch(nums, mid + 1, high, target);

    else
        return binarySearch(nums, low, mid - 1, target);
}
