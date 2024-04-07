// Problem: A. Rudolf and the Ticket
// Contest: Codeforces - Codeforces Round 933 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1941/A
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
    	int n,m,k;
    	cin>>n>>m>>k;
    	
    	vector<int>b(n);
    	vector<int>c(m);
    	
    	for(int i=0;i<n;i++){
    		cin>>b[i];
    	}
    	for(int i=0;i<m;i++){
    		cin>>c[i];
    	}
    	
    	int count =0;
    	
    	for(int i=0;i<n;i++){
    		for(int j=0;j<m;j++){
    			if(b[i]+c[j]<=k){
    				count++;
    			}
    		}
    	}
    	
    	cout<<count<<endl;
    	
    	
    	
    	
    	
    	







   }     
}