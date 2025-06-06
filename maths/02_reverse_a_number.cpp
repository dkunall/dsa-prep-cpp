#include<iostream>
using namespace std;

int reverse_num(int n)
{
    int ans=0;

    while(n>0)
    {
        int d=n%10;
        ans=ans*10+d;
        n=n/10;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = reverse_num(n);
    cout << "Reversed number of " << n << " is: " << result << endl;

    return 0;
}