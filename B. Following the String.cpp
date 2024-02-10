#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        vector<int>v(26,0);

        string s="";

        for(int i=0;i<n;i++){
            int x = arr[i];
            for(char c = 'a';c<='z';c++){
                int in = c-'a';
                if(v[in]==x){
                    s+=c;
                    v[in]++;
                    break;

                }
            }
        }

        cout<<s<<"\n";

        
}

}
