#include<iostream>
using namespace std;

void printArray(int ans[], int n)
{
  cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << ans[i] << " ";
   }
   return;
}

void reverseArray(int arr[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    return;
}

int main() {
   int n = 5;
   int arr[] = {5,4,3,2,1};
   reverseArray(arr, n);
   printArray(arr, n);
   return 0;
}