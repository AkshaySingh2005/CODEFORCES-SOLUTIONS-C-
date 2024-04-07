// Problem: A. Problemsolving Log
// Contest: Codeforces - Codeforces Round 916 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1914/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);

signed main(){
	fast 
	int t;
	cin>>t;
	while(t--){
		int n, c=0;
		cin>>n;
		string s;
		cin>>s;
		map<int,int> mp;
		for(auto& i: s){
			mp[i-'A'+1]++;
		}
		for(auto& i: mp){
			if(i.second>=i.first) c++;
		}
		cout<<c<<endl;
	}
}