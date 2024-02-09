#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;                                                                      
        cin >> s;

        int left=0, right = 0;

        for(int i = 0; i < n; i++) {
            if(s[i] == 'B') {
                left = i;
                break;
            }
        }

        for(int i = n - 1; i >= 0; i--) {
            if(s[i] == 'B') {
                right = i;
                break;
            }
        }

        cout << (right- left + 1) << endl;
    }
    return 0;
}
