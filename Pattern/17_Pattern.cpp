/*
   A
  ABA
 ABCBA    
ABCDCBA
*/

#include <iostream>
using namespace std;
int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {
        //spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        //increasing part
        for (int j = 1; j <= i; j++) {
            cout << char('A' + j - 1);
        }

        //decreasing part
        for (int j = i - 1; j >= 1; j--) {
            cout << char('A' + j - 1);
        }

        cout << endl;
    }

    return 0;
}