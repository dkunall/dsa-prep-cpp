#include<iostream>
#include<cmath>
using namespace std;
bool isArmstrong(int n)
{
    int original1=n;
    int original2=n;
    int numDigits=0;
    int sum=0;
    while(original1>0)
    {
        original1/=10;
        numDigits++;
    }

    while(original2>0)
    {
        int digit=original2%10;
        sum+=pow(digit,numDigits);
        original1/=10;
    }

    return sum==n;
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num))
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}