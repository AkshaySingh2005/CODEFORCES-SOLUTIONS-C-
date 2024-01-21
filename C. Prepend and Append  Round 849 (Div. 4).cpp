#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int lo = s[0];
        int hi = s[s.size() - 1];

        for(int i = 0; i < n; i++){
            if((lo == '1' && hi == '0') || (lo == '0' && hi == '1')){
                s.erase(s.begin());
                s.erase(s.begin() + s.length() - 1);
                
                if(s.size() > 0){
                    lo = s[0];
                    hi = s[s.size() - 1];
                } else {
                    hi = lo = '0'; 
                }
            }
            else{
                cout<<s.size() << endl;
                break;
            }
        }
    }
    return 0;
}
