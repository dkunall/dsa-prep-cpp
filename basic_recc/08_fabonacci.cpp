#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==1)
    {
        return 0;
    }

    if(n==2)
    {
        return 1;
    }

    return fib(n-1)+fib(n-2);
}

int main() {
    int n;
    cout << "Enter the position in Fibonacci sequence: ";
    cin >> n;

    if(n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        cout << "Fibonacci number at position " << n << " is: " << fib(n) << endl;
    }

    return 0;
}