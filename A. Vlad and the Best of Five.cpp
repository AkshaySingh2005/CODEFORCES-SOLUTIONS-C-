#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
signed main(){
fast
int t;cin>>t;


    while(t--){
    string s;
    cin>>s;
       int counta = 0;
       int countb = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A'){
                counta++;

            }
            else{
                countb++;
            }
        }

        if(counta>countb){
            cout<<"A"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }
    }
}
