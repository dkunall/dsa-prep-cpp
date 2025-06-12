#include<iostream>
using namespace std;

void selection_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int si=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[si])
            si=j;            
        }

        swap(arr[i],arr[si]);
    }

}

int main()
{
    int arr[]={64,25,12,22,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);
    cout<<"Sorted array: \n";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}