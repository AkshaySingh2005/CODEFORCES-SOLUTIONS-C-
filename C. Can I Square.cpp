// Problem: C. Can I Square?
// Contest: Codeforces - Codeforces Round 918 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1915/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);



signed main() {
    fast
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> v(n);
        int sum = 0;
        for(int i = 0; i < n; ++i) {
            cin >> v[i];
            sum += v[i];
        }
        
        int square_root = sqrt(sum);
        if (square_root * square_root == sum) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

