#include<bits/stdc++.h>
using namespace std;

string frequencySort(string s)
{
    int freq[128] = {};
    
    for (char c : s)
    freq[c]++;

    sort(s.begin(), s.end(), [&](char a, char b)
    {
        return freq[a] > freq[b] || (freq[a] == freq[b] && a < b);
    });
    return s;
}



int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;

    string sortedString = frequencySort(s);
    cout << "Sorted string by frequency: " << sortedString << endl;

    return 0;
}