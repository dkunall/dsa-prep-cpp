#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// 4 loop
vector<vector<int>> fourSumBruteForce(vector<int>& nums, int target) {
    vector<vector<int>> result;
    int n = nums.size();
    for (int i = 0; i < n - 3; ++i) {
        for (int j = i + 1; j < n - 2; ++j) {
            for (int k = j + 1; k < n - 1; ++k) {
                for (int l = k + 1; l < n; ++l) {
                    if (nums[i] + nums[j] + nums[k] + nums[l] == target) {
                        result.push_back({nums[i], nums[j], nums[k], nums[l]});
                    }
                }
            }
        }
    }
    return result;
}

// 2 pointer
vector<vector<int>> fourSumTwoPointer(vector<int>& nums, int target) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    
    for (int i = 0; i < n - 3; ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) continue; 
        for (int j = i + 1; j < n - 2; ++j) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;
            int left = j + 1, right = n - 1;
            
            while (left < right) {
                long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[left] + nums[right];
                if (sum == target) {
                    result.push_back({nums[i], nums[j], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--; 
                    left++;
                    right--;
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
    }
    
    return result;
}

int main() {
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;

    // Brute force approach
    vector<vector<int>> resultBruteForce = fourSumBruteForce(nums, target);
    cout << "Brute Force Result:" << endl;
    for (const auto& vec : resultBruteForce) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }

    // Two pointer approach
    vector<vector<int>> resultTwoPointer = fourSumTwoPointer(nums, target);
    cout << "Two Pointer Result:" << endl;
    for (const auto& vec : resultTwoPointer) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}