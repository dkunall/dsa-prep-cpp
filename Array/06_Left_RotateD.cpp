#include<iostream>
using namespace std;


void LeftRotateD(int arr[],int n,int k)
{

    if (n == 0)
    return;
    
    k=k%n;
    if (k > n)
    return;

    int* temp = new int[k];

    for(int i=n-k;i<n;i++)
    {
        temp[i-n-k]=arr[i];
    }

    for(int i=n-k-1;i>=0;i--)
    {
        arr[i+k]=arr[i];
    }

    for(int i=0;i<k;i++)
    {
        arr[i]=temp[i];
    }

    delete[] temp;
    return;
}

int main()
{
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the number of positions to rotate left: ";
    cin >> k;

    int* arr = new int[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    LeftRotateD(arr, n, k);

    cout << "Array after left rotation: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}


