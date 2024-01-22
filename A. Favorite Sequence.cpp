#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> v1(n * 2);

        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            v[i] = temp;
        }

        int lo = 0, hi = n - 1;
        for (int i = 0; i < n; i += 2) {
            v1[i] = v[lo++];
            v1[i + 1] = v[hi--];
        }

        for (int i = 0; i < n; i++) {
            cout << v1[i] << " ";
        }
        cout<<endl;

        
    }

    return 0;
}
