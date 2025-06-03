/*
ABCDE
ABCD
ABC
AB
A
*/

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << char('A' + j - 1);
        }
        cout << endl;
    }

    return 0;
}