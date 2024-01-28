#include<bits/stdc++.h>
using namespace std;

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        int minn=0;
        int maxn=0;

        if (i == 0) {
            minn = abs(arr[i] - arr[i + 1]);
            maxn = abs(arr[i] - arr[n - 1]);
        } else if (i == n - 1) {
            minn = abs(arr[i] - arr[i - 1]);
            maxn = abs(arr[i] - arr[0]);
        } else {
            minn = min(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1]));
            maxn = max(abs(arr[i] - arr[0]), abs(arr[i] - arr[n - 1]));
        }

        cout << minn << " " << maxn <<endl;
    }

    return 0;
}
