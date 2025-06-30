#include<iostream>
#include<vector>
using namespace std;

// void MoveZeroEnd(vector<int> &arr)
// {
//     vector<int> temp(arr.size(), 0);
//     int j = 0;
//     for(int i = 0; i < arr.size(); i++)
//     {
//         if(arr[i] != 0)
//         {
//             temp[j++] = arr[i];
//         }
//     }
//     arr = temp;
// }

// int main()
// {
//     int n;
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Enter the elements of the array: ";
//     for(int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     MoveZeroEnd(arr);

//     cout << "Array after moving zeros to the end: ";
//     for(int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }



//2
vector<int> moveZeroEnd(int n , vector<int>a)
{
    int j=-1;

    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            j=i;
            break;
        }
    }

    if(j==-1)
    return a;

    for(int i=j+1;i<n;i++)
    {
        if(a[i]!=0)
        {
            swap(a[j],a[i]);
            j++;
        }
    }
    return a;
}
// Example usage
int main() { 
    vector<int> arr = {0, 1, 0, 3, 12};
    int n = arr.size();
    vector<int> result = moveZeroEnd(n, arr);
    for (int num : result) {
        cout << num << " ";      
    }
    return 0;
}
// Output: 1 3 12 0 0