#include<iostream>
using namespace std;

void allDivisors(int n)
{
    cout<<1<<" ";
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
    return;
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "All divisors of " << num << " are: ";
    allDivisors(num);
    cout << endl;

    return 0;
}