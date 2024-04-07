// Problem: B. Preparing for the Contest
// Contest: Codeforces - Codeforces Round 916 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1914/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);

signed main() {
    fast
    int t;
    cin >> t;
    while (t--) {
    	
    	int n,k;
    	cin>>n>>k;
    	
    	for(int i= n-k;i<=n;i++){
    		cout<<i<<" ";
    	}
    	for(int i = n-k-1;i>=1;i--){
    		cout<<i<<" ";
    	}
    	cout<<"\n";
    	
      
}
}