#include<bits/stdc++.h>
using namespace std;
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int>arr(n+2);

    

        for(int i = 1;i<=n;i++){
            cin>>arr[i];
        }

        arr[n+1]=x;
        int ans =0;

        for(int i=1;i<=n;i++){
            ans = max(ans,arr[i]-arr[i-1]);
        }

        cout<<max(2*(x-arr[n]),ans)<<endl;


 
}
}

