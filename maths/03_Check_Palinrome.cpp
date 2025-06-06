#include<iostream>
using namespace std;

int check_reverse(int n)
{
    int original=n;
    int num=0;

    while(n>0)
    {
        int d=n%10;
        num=num*10+d;
        n=n/10;
    }
    return num==original;
}

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(check_reverse(num))
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";

    return 0;
}
