#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;cin>>t;
    while(t--){
    int n, k;
    cin >> n >> k;
    
    
   int ji = 4*(n-1);
   int ans = 0;


   if(k > ji){
      ans = ji / 2 + (k - ji);
      cout <<ans << endl;
     
   }
   else{
     ans = (k + 1) / 2;
     cout << ans<<endl;


   }

   

    }
}
