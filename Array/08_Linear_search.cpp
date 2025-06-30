#include<iostream>
using namespace std;

int LinearSearch(int arr[], int n, int target)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int target = 3;

    int result = LinearSearch(arr, 5, target);

    if(result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
