#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        int digit = x % 10;
        int presses = (digit - 1) * 10;

        int length = 0;
        while (x > 0) {
            x /= 10;
            length++;
        }

        presses += (length * (length + 1)) / 2;

        cout << presses << endl;
    }

    return 0;
}
