#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;


    int next = n + 1;
    while (true) {
        bool is_prime = true;
        for (int i = 2; i * i <= next; i++) {
            if (next % i == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            break;
        }
        next++;
    }

    if (next == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
