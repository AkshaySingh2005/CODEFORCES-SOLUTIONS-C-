// Problem: A. Design Tutorial: Learn from Math
// Contest: Codeforces - Codeforces Round 270
// URL: https://codeforces.com/problemset/problem/472/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)


#include <iostream>
#include <vector>
using namespace std;

void sieve(vector<bool> &primes, int n) {
    primes.assign(n + 1, true);
    primes[0] = primes[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (primes[i]) {
            for (int j = i * i; j <= n; j += i) { // j is the multiple of i
                primes[j] = false;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<bool> primes;
    sieve(primes, n);

    for (int i = 4; i <= n / 2; i++) {
        if (!primes[i] && !primes[n - i]) {
            cout << i << " " << n - i << "\n";
            break;
        }
    }

    return 0;
}
