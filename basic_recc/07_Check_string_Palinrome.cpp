#include<iostream>
#include<string>
using namespace std;

bool isPalinrome(string str)
{
    int n=str.length();
    for(int i=0;i<n/2;i++)
    {
        if(str[i]!=str[n-i-1])
        return false;
    }
    return true;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    if(isPalinrome(str))
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}