#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
signed main(){
    fast
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            sum +=v[i];
        }

        if(n == 1) {
            cout << "YES" << endl;
        }

        else{
            int k = sum / n;
            bool ans = true;

            for(int i=0;i<v.size();i++){
                v[i+1]+= v[i]-k;
                if(v[i] < k){
                    cout<<"NO"<<endl;
                    ans = false;
                    break;
                }
               
            }

            if(ans){
                cout<<"YES"<<"\n";
            }
            

        }

       
    }
    return 0;
}
