#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
signed main(){
fast
int t;cin>>t;
while(t--){
    int n;cin>>n;

    set<int>s;

    for(int i=1;i<=n;i++){
       s.emplace(i);
    }
    
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            cout<<*s.rbegin()<<" ";
            s.erase(*s.rbegin());

        }
        else{
            cout<<*s.begin()<<" ";
            s.erase(*s.begin());
        }
        
    }

    cout<<"\n";

    
}
}