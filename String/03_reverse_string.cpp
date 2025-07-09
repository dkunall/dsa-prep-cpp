#include<bits/stdc++.h>
using namespace std;

string reversewordsInString(string s)
{
    int n = s.length();
    stack<string> st;
    string word="";

    for(int i=0;i<n;i++)
    {
        if(s[i]==' ')
        {
            st.push(word);
            word="";
        }
        else
        {
            word+=s[i];
        }
    }
    st.push(word);

    string result="";
    while(!st.empty())
    {
        result+=st.top()+" ";
        st.pop();
    }

    if(!result.empty())
    result.pop_back();

    return result;
}


// Function to reverse the words in a string
// This function reverses the words in a given string.

string result(string s)
{
    int left = 0;
    int right = s.length()-1;
    
    string temp="";
    string ans="";
    
    //Iterate the string and keep on adding to form a word
    //If empty space is encountered then add the current word to the result
    while (left <= right) {
        char ch= s[left];
        if (ch != ' ') {
            temp += ch;
        } else if (ch == ' ') {
            if (ans!="") ans = temp + " " + ans;
            else ans = temp;
            temp = "";
        }
        left++;
    }
    
    //If not empty string then add to the result(Last word is added)
    if (temp!="") {
        if (ans!="") ans = temp + " " + ans;
        else ans = temp;
    }
    
    return ans;    
}



int main()
{
    string s = "Hello World from C++";
    string reversed = reversewordsInString(s);
    cout << reversed << endl; // Output: "C++ from World Hello"
    return 0;
}