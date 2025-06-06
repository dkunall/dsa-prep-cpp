#include<iostream>
using namespace std;

int sumFirstN(int n)
{
    if(n==0)
    {
        return 0;
    }

    return n+sumFirstN(n-1);
}

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int sum = sumFirstN(n);
    cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;

    return 0;
}