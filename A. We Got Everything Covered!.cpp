#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){

    int n,k;cin>>n>>k;

    string alpha = "abcdefghijklmnopqrstuvwxyz";
    string s  = "";

    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            s+=alpha[j];
        }
    }


    if(s.length()<(n*k)){
        s+=s.substr(0,(n*k - s.length()));

    }

    cout<<s<<endl;

    }



}