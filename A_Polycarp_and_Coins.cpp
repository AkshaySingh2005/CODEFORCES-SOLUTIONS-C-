#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
signed main(){
    fast
    int t; cin >> t;
    while(t--){
        int n;cin>>n;

       int c1 = n / 3;
       int c2 = n / 3;
       int rem = n % 3;
        if (rem == 1)
            c1++;
        else if (rem == 2)
            c2++;
        cout << c1 << " " << c2 << endl;
    }
}
