#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
signed main(){
  fast
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
   char a[n][n];
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cin>>a[i][j];
      }
    }
    
    bool ans = false;
    for(int i =0;i<n;i++){
      for(int j = 1;j<n-1;j++){
        if(a[i][j] == '1' && a[i][j-1] == '0' && a[i][j+1] == '0'){
          ans = true;
        }
      }
    }
    if(ans){
      cout<<"TRIANGLE"<<endl;
    }
    else{
      cout<<"SQUARE"<<endl;
    }
  }
} 