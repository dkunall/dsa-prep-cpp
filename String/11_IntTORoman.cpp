#include<bits/stdc++.h>
using namespace std;


string intToRoman(int num)
{
    string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
    string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string hrns[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string ths[]={"","M","MM","MMM"};
    
    return ths[num/1000] + hrns[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
}

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    
    if (num < 1 || num > 3999) {
        cout << "Input must be between 1 and 3999." << endl;
        return 1;
    }
    
    string romanNumeral = intToRoman(num);
    cout << "Roman numeral: " << romanNumeral << endl;
    
    return 0;
}   