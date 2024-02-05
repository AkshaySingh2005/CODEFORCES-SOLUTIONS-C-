#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;

    while(t--){

        int n,k;cin>>n>>k;

        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
       int count =0;
       for(int i=1;i<n;i++){
        if(arr[i-1]<=arr[i])
        {
            count =1;
        }
        else 
        {
          count =0;
          break;
        }
      }
      if(n==1) cout<<"YES"<<endl;
      else if(k==1&&count==1)cout<<"YES"<<endl;
      else if(k==1&&count==0) cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
 }


     
    }
