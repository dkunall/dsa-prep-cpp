/*
    Print the following pattern:
    1
    12
    123
    1234
    12345
*/

#include <iostream>
using namespace std;
int main() {
    int n = 5; 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        cout << endl; 
    }
    return 0;
}