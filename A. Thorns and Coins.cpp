#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
signed main(){
fast
int t;cin>>t;
while(t--){
    int  n;cin>>n;

    string s ; cin>>s;

    int ans  = 0;

    for(int i=0;i<n;i++){
       
        if (s[i]=='*' && s[i+1]=='*'){
            break;
        }
        else if(s[i]=='@'){
            ans++;
        }
        else if(s[i]=='.' && s[i]=='.'){
            continue;
        }
        else if(s[i]=='.'){
            continue;
        }
        

        }

        cout<<ans<<endl;
    }

    
}
