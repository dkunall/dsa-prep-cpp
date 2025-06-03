/*

****
*  *
*  *
****

*/

#include <iostream>
using namespace std;
int main() {
    int n = 4;

    // Top row
    for (int i = 1; i <= n; i++) {
        cout << "*";
    }
    cout << endl;

    // Middle rows
    for (int i = 1; i <= n - 2; i++) {
        cout << "*";
        for (int j = 1; j <= n - 2; j++) {
            cout << " "; // Space
        }
        cout << "*";
        cout << endl;
    }

    // Bottom row
    for (int i = 1; i <= n; i++) {
        cout << "*";
    }
    cout << endl;

    return 0;
}