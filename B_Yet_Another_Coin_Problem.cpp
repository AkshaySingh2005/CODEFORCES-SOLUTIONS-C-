#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
signed main(){
fast
int t;cin>>t;
while(t--){

    int n;
    cin>>n;

    map<int,int>mp;

    mp[0]=0;
    mp[1]=1;
    mp[2]=2;
    mp[3]=1;
    mp[4]=2;
    mp[5]=3;
    mp[6]=1;
    mp[7]=2;
    mp[8]=3;
    mp[9]=2;
    mp[10]=1;
    mp[11]=2;
    mp[12]=2;
    mp[13]=2;
    mp[14]=3;

    int fifteen = n/15;
    n%=15;
    if(fifteen == 0){
        cout<<mp[n]<<"\n";
    }

    else{
        int ans = fifteen + mp[n];
        
        if(n>=5){
            ans = min((fifteen + mp[n]),fifteen+1+mp[n-5]);
            
            
        }
        cout<<ans<<'\n';
        

        


    }

}
}