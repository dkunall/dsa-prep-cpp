#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(int arr[],int n)
{
    if(n==1)
    return;

    for(int j=0;j<n-2;j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
    }

    bubbleSort(arr,n-1);
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << "Sorted array: \n";
    for (int i=0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}