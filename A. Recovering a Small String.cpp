#include<bits/stdc++.h>
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

        string s = "aaa";

        int curr = 3 , count = 2;

        while(curr != n){
            if(curr+25 <= n){
                s[count] = 'z';
                curr+=25;
                count--;
            }
            else{
                s[count]+= n-curr;
                curr = n;
            }
            
        }
        cout<<s<<endl;
    }
    return 0;
}


// Codeforces Round 925 (Div. 3)
