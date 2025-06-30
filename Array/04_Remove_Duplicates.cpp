#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums)
{
    if (nums.empty())
        return 0;

    int i = 0;
    for (int j = 1; j < nums.size(); j++)
    {
        if (nums[i] != nums[j])
        {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 2, 3, 3};
    int k = removeDuplicates(arr);

    cout << "The array after removing duplicate elements is: ";
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
