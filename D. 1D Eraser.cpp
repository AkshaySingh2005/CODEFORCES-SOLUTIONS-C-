#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int count = 0;

        for (int i = 0; i < n; ) {
            if (s[i] == 'B') {
                count++;
                i += k;  
            } else {
                i++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
