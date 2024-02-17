#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);



signed main(){
    fast

    string s;
    cin>>s;

    if(s.length()<3){
        cout<<s;
    }

    else{
    for(int i=0;i<s.length()-2;i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            s.erase(i,3);
            s.insert(i," ");
           
           

        }
    }

    cout<<s;
    }

}

