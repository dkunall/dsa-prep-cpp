/*
**********
****  ****
***    ***
**      **
*        *
**      **
***    ***
****  ****
**********
*/

#include <iostream>
using namespace std;
int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        // decreasing part
        for (int j = 1; j <= n - i + 1; j++) {
            cout << "*";
        }
        // spaces
        for (int j = 1; j <= 2 * (i - 1); j++) {
            cout << " ";
        }
        // increasing part
        for (int j = 1; j <= n - i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--) {
        // decreasing part
        for (int j = 1; j <= n - i + 1; j++) {
            cout << "*";
        }
        // spaces
        for (int j = 1; j <= 2 * (i - 1); j++) {
            cout << " ";
        }
        // increasing part
        for (int j = 1; j <= n - i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}