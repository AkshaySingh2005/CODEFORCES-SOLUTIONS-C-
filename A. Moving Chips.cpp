#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);

signed main(){
    fast
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> chips(n);
        for (int i = 0; i < n; ++i) {
            cin >> chips[i];
        }
        
        int first = 0, last = 0;
        for (int i = 0; i < n; ++i) {
            if (chips[i] == 1) {
                first = i;
                break;
            }
        }
        
        for (int i = n - 1; i >= 0; --i) {
            if (chips[i] == 1) {
                last = i;
                break;
            }
        }
        
        int zeroes = 0;
        for (int i = first; i < last; ++i) {
            if (chips[i] == 0) {
              zeroes++;
            }
        }
        
        cout << zeroes << endl;
    }
    
    return 0;
}
