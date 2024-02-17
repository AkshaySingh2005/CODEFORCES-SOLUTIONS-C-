#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);

signed main(){
     fast

     int n, m;
     cin >> n >> m;

     vector<int> arr(m);

     for(int i = 0; i < m; i++){
        cin >> arr[i];
     }

     sort(arr.begin(), arr.end());

     int minn = INT_MAX;

     for(int i = 0; i <= m - n; i++){
        minn = min(minn, arr[i + n - 1] - arr[i]);
     }

     cout << minn << endl;
}
