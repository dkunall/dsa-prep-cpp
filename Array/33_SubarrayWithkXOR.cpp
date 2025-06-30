#include<bits/stdc++.h>
using namespace std;

//3 loop
//2 loop
//hashmap se
int SubarraywithkXOR(vector<int> arr, int k)
{
    unordered_map<int, int> mp;
    int count = 0, xor_sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        xor_sum ^= arr[i];

        if (xor_sum == k) {
            count++;
        }

        if (mp.find(xor_sum ^ k) != mp.end()) {
            count += mp[xor_sum ^ k];
        }

        mp[xor_sum]++;
    }

    return count;
}

int main()
{
    vector<int> arr = {4, 2, 2, 6, 4};
    int k = 6;
    cout << "Number of subarrays with XOR " << k << ": " << SubarraywithkXOR(arr, k) << endl;
    return 0;
}