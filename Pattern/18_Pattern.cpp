/*
E
DE
CDE
BCDE
ABCDE
*/

#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++) {
        // decreasing part
        for (int j = n - i + 1; j <= n; j++) {
            cout << char('A' + j - 1);
        }
        cout << endl;
    }

    return 0;
}