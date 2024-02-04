#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long ans = b;

        for (int i = 0; i < n; i++) {
            ans += min(static_cast<long long>(arr[i]), a - 1);

            //Casted arr[i] to long long to match the type of ans during the addition to avoid potential overflow issues.
        }

        cout << ans << "\n";
    }

    return 0;
}
