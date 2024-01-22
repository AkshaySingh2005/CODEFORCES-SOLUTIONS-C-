#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count = 0;
    int k = 0;
    int sum = 0;

    for (int j = 0; j < n; j++) {
        sum = sum + a[j];
        if (sum <= t) {
            count++;
        } else {
            sum = sum - a[k];
            k++;
        }
    }

    cout << count << endl;

    return 0;
}
