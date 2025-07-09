#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;


string largestOddNumber(string num) {
    for (int i = num.size() - 1; i >= 0; i--) {
        if ((num[i] - '0') % 2 != 0) {
            return num.substr(0, i + 1);
        }
    }
    return "";
}


int main()
{
    string num;
    cout << "Enter a string of digits: ";
    cin >> num;
    
    string result = largestOddNumber(num);
    
    if (result.empty()) {
        cout << "No odd number found in the string." << endl;
    } else {
        cout << "Largest odd number in the string: " << result << endl;
    }
    
    return 0;
}