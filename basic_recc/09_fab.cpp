#include<iostream>
using namespace std;

int fib(int n)
{
    int arr[n];

    arr[0]=0;
    arr[1]=1;
    
    if(n==1)
    return 0;

    if(n==2)
    {
        return 1;
    }

    for(int i=2;i<n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }

    return arr[n-1];

}

int main()
{
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;

    cout<<"Fibonacci series: ";
    for(int i=1;i<=n;i++)
    {
        cout<<fib(i)<<" ";
    }
    cout<<endl;

    return 0;
}