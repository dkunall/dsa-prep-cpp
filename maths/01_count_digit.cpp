#include<iostream>
using namespace std;

int count_digit(int n)
{
    if(n==0)
    return 1;

    int count=0;

    while(n>0)
    {
        count++;
        n=n/10;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = count_digit(n);
    cout << "Number of digits in " << n << " is: " << result << endl;

    return 0;
}