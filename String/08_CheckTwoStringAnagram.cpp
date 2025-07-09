#include <iostream>
#include <string>
#include <vector>
// C++ standard library headers: This project uses the <iostream>, <string>, and <vector> headers.
using namespace std;

//when s.length()>t.length()
bool isAnagram1(string s, string t)
    {
        for(auto it : s)
        {
            if(t.find(it)== string :: npos)
            return false;
        } 
        return true;   
    }

    bool isAnagram(string s, string t)
    {
        if(s.length()!=t.length())
        {
            return false;
        }
        vector<int> freq(26,0);

        for(int i=0;i<s.length();i++)
        {
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }

        for(int i=0;i<freq.size();i++)
        {
            if(freq[i]!=0)
            {
                return false;
            }
        }
        return true;
    }

    int main()
    {
        string s, t;
        cout << "Enter first string: ";
        cin >> s;
        cout << "Enter second string: ";
        cin >> t;

        if(isAnagram(s, t))
        {
            cout << "The strings are anagrams." << endl;
        }
        else
        {
            cout << "The strings are not anagrams." << endl;
        }

        return 0;
    }