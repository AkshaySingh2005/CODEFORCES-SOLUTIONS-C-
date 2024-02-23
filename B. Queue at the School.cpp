#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);

signed main() {
    fast

    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;
    int l = s.length();

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < l - 1; j++) {
            if (s[j] == 'B' && s[j + 1] == 'G') {
                swap(s[j], s[j + 1]);
                j++; 
            }
        }
    }

    cout << s << endl;

    return 0;
}
