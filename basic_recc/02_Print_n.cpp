#include<iostream>
#include<algorithm>
using namespace std;

void print_n(int n)
{
    if(n<=0)
    return;
    

    cout<< "pikachu" << " " << endl;
    print_n(n-1);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Printing " << n << " times " << endl;
    print_n(n);
    
    return 0;
}