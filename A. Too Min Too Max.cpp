#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
signed main(){
    fast
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());


        int ans  = 2*(v[n-1] - v[0] ) + 2*(v[n-2] - v[1] );
        cout<<ans<<endl;
    }
    return 0;
}
