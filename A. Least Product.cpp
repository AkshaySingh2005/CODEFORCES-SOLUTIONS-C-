// Problem: A. Least Product
// Contest: Codeforces - Codeforces Round 917 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1917/A
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
    	int n;
    	cin>>n;
    	vector<int>v(n);
    	int count = 0;
    	bool flag = true;
    	for(int i=0;i<n;i++){
    		cin>>v[i];
    		if(v[i]==0){
    			flag = false;
    			
    		} 
            else{
    			if(v[i]<0){
    				count++;
    			}
    		}    		   		
    		
    	}
    	
    	if(flag){
    		if(count%2==0){
    		cout<<"1"<<"\n";
    		cout<<"1"<<" "<<"0"<<"\n";
    	    }
    	    else{
    		cout<<"0"<<"\n";
    	    }
    		
    	}
    	else{
    		cout<<"0"<<"\n";
    	}
    	
    	
    	
    	
    	
    	
    	
    	
    	
       
}
}

