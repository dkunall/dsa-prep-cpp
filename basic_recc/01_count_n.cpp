#include<iostream>
using namespace std;


// Function to count from 0 to n using recursion
void Aprint(int n)
{
    if(n<0)
    {
        return;
    }

    Aprint(n-1);
    cout << n << " ";
}

// Function to count from n to 0 using recursion
void Bprint(int n)
{
    if(n<0)
    {
        return;
    }

    cout << n << " ";
    Bprint(n-1);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Counting from 0 to " << n << ": ";
    Aprint(n);
    cout << endl;

    cout << "Counting from " << n << " to 0: ";
    Bprint(n);
    cout << endl;

    return 0;
}