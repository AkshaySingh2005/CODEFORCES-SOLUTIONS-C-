#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n > 45) {
            cout << "-1" << endl;
        } else {
            vector<int> digits;
            int current = 9;

            while (n > 0 && current> 0) {
                if (n >= current) {
                    digits.push_back(current);
                    n -= current;
                }
                current--;
            }

            if (n == 0) {
                for (int i = digits.size() - 1; i >= 0; i--) {
                    cout << digits[i];
                }
                cout << endl;
            } else {
                cout << "-1" << endl;
            }
        }
    }

    return 0;
}
