#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);

signed main() {
    fast

    char c;
    cin >> c;
    string s;
    cin >> s;
    string str = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string q = "";
    if (c == 'R') {
        for (int i = 0; i < s.size(); i++) {
           
            if (s[i] == ' ') {
                q += " ";
            } else {
                q += str[str.find(s[i]) - 1];
            }
        }
    } else {
        for (int i = 0; i < s.size(); i++) {
        
            if (s[i] == ' ') {
                q += " ";
            } else {
                q += str[str.find(s[i]) + 1];
            }
        }
    }
    cout << q << endl;
    return 0;
}
