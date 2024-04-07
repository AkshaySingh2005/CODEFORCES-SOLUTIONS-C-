// Problem: B. Turtle Math: Fast Three Task
// Contest: Codeforces - Codeforces Round 929 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1933/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
    while(t--)
    {
        int n;cin>>n;
        int sum=0;
        vector<int> v(n);
        int cnt=0;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            sum=sum+v[i];
            if(v[i]%3==1)
            {
                cnt++;
            }
 
        }
        if(sum%3==0)
        {
            cout<<0<<endl;
        }
        else if(sum%3==1)
        {
               if(cnt>0)    
               {
                cout<<1<<endl;
               }
               else
 
               {
                cout<<2<<endl;
               }
        }
        else if(sum%3==2)
        {
            cout<<1<<endl;
        }
 
        
        
    }
}