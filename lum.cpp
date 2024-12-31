#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows

    for (int i = 0; i < n; i++) {
        char ch = 'A' + i;  // Calculate the character for the row
        for (int j = 0; j <= i; j++) {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
