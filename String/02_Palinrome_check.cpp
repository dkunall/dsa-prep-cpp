#include<iostream>
#include<string>
using namespace std;
bool isPalinrome(string s)
{
    int n=s.length();
    int left=0;
    int right=n-1;

    while(left<right)
    {
        if(s[left]!=s[right])
        {
            return false;
        }
    }
    return true;
}