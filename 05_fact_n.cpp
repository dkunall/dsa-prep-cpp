#include<iostream>
using namespace std;

int factN(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }

    return n* factN(n-1);
}

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int factorial = factN(n);
    cout << "The factorial of " << n << " is: " << factorial << endl;

    return 0;
}