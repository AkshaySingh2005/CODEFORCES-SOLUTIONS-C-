#include<bits/stdc++.h>
using namespace std;

int main(){

  int t;cin>>t;

  while(t--){

    int n,k;cin>>n>>k;

    string s;
    cin>>s;

    vector<int>v(26,0);

    for(char i:s){
        v[i - 'a']++;
    }

    int odd = 0;

    for(int i=0;i<v.size();i++){
        if(v[i]%2==1){
            odd++;
        }
    }
    if(n-k==1)
        {
        cout<<"yes"<<'\n';
        }
    else if(k>=odd-1)
       {
        cout<<"yes"<<'\n';
       }
    else
       {
        cout<<"no"<<'\n';
       }

   





    


    //bacacd
    //aabccd
    //aaccd
    //aacc
    //acca palindrome


  }

}