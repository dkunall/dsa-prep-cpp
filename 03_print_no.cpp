#include<iostream>
#include<algorithm>
using namespace std;

void aPrint(int i,int n)
{
    if(i>n)
    {
        return;
    }

    cout<<i<<" ";
    aPrint(i+1,n);
}

void bPrint(int i,int n)
{
    if(i<1)
    return;

    cout<<i<<" ";
    bPrint(i-1,n);
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Printing from 1 to "<<n<<": ";
    aPrint(1,n);
    cout<<endl;

    cout<<"Printing from "<<n<<" to 1: ";
    bPrint(n,n);
    cout<<endl;

    return 0;
}