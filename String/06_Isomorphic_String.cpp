#include<bits/stdc++.h>
using namespace std;

    bool isIsomorphic(string s, string t)
    {
        if(s.length()!=t.length())
        {
            return false;
        }

        int n = s.length();
        map<char,char> mp;

        for(int i=0;i<n;i++)
        {
            if(mp.find(s[i])!=mp.end())
            {
                if (mp[s[i]]==t[i])
                    continue;
                else
                    return false;
            }

            for (auto it : mp) {
                if (it.second == t[i] && it.first != s[i])
                    return false;
            }

            mp[s[i]] = t[i];
        }

        return true;    
    }





    bool isIsomorphic(string s, string t)
    {
        if (s.length() != t.length()) return false;

        int m1[256] = {0};
        int m2[256] = {0};

        for (int i = 0; i < s.length(); ++i)
        {
            if (m1[s[i]] != m2[t[i]])
                return false;

            // Use i+1 to differentiate from default zero
            m1[s[i]] = i + 1;
            m2[t[i]] = i + 1;
        }

        return true;
    }