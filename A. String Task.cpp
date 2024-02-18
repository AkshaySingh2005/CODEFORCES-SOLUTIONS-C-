#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);

signed main() {
    fast

    string s;
    cin >> s;

    for (int i = 0; i < s.length();i++) {
        s[i]=tolower(s[i]);
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i]== 'y') {
            continue;
        } 
        else {
            cout<<'.'<<s[i];
        }
    }


    return 0;
}
