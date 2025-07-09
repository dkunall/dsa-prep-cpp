#include<bits/stdc++.h>
using namespace std;

string LongestCommonPrefix(vector<string> str)
{
    int n=str.size();

    if(n==0)
    return "";

    if(n==1)
    return str[0];

    sort(str.begin(), str.end());

    string s1=str[0];
    string s2=str[n-1];

    int i=0;
    int j=0;

    string ans="";

    while(i<s1.length() && j<s2.length())
    {
        if(s1[i]!=s2[j])
        break;

        ans+=s1[i];
        i++;
        j++;
    }
    return ans;
}

int main()
{
    vector<string> str = {"flower", "flow", "flight"};
    cout << LongestCommonPrefix(str) << endl;
    return 0;
}