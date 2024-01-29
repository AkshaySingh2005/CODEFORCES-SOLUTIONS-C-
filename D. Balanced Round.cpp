#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
      int n, k;
      cin>>n>>k;
      
      int a[n];
      
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      
      sort(a, a+n);
      
      if(n==1){
          cout<<"0"<<endl;
          continue;
      }
      int current = 1;
      int length = 1;
      
      for(int i=1;i<n;i++){
          if(a[i]-a[i-1] > k){
              current= 1;
          }
          else{
              current++;
              if(length < current){
                  length = current;
              }
          }
      }
      cout<< n - length <<endl;
    }
}