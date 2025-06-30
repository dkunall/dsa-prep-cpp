#include<iostream>
#include<vector>
using namespace std;

//1 hashmap se
//2 set se
//3 two pointer se

void UnionSorted(int arr1[], int arr2[],int n1, int n2)
{
    int i=0;
    int j=0;

    vector<int> result;

    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            result.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            result.push_back(arr2[j]);
            j++;
        }
        else
        {
            result.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    // Add remaining elements of arr1
    while(i < n1)
    {
        result.push_back(arr1[i]);
        i++;
    }
    // Add remaining elements of arr2
    while(j < n2)
    {
        result.push_back(arr2[j]);
        j++;
    }

    // Print the result
    cout << "Union of the two sorted arrays: ";
    for(int k = 0; k < result.size(); k++)
    {
        cout << result[k] << " ";
    }
}

int main()
{
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    UnionSorted(arr1, arr2, n1, n2);

    return 0;
}