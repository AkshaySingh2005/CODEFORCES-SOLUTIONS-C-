#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
signed main(){
fast

int t;cin>>t;

while(t--){
    int n;cin>>n;

    int len = 2*n;

    int v[len];

    for(int i=0;i<len;i++){
        cin>>v[i];
    }
    sort(v,v+len);
   
    int ans = 0;

    for(int i=0;i<len;i=i+2){
        ans += min(v[i],v[i+1]) ;
       
        


        
    }

    cout<<ans<<endl;


}





}