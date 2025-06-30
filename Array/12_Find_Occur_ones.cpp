//1 do loop
//2 do array as hashing concept
//3 map STL
//4 bit manipulation

#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr)
{
    int n = arr.size();

    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    for (auto it : mpp) {
        if (it.second == 1)
            return it.first;
    }

    return -1;
}

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}

