#include<bits/stdc++.h>
using namespace std;

//brute force approach
int floorSqrt(int n) {
    int ans = 0;
    for (long long i = 1; i <= n; i++)
    {
        long long val = i * i;
        if (val <= n * 1ll) {
            ans = i;
        } else {
            break;
        }
    }
    return ans;
}


//sqrt function
int floorSqrt(int n) {
    int ans = sqrt(n);
    return ans;
}



//binary search approach
int floorSqrt(int n)
{
    int low = 1, high = n;
    while (low <= high)
    {
        long long mid = (low + high) / 2;
        long long val = mid * mid;
        if (val <= (long long)(n))
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high;
}