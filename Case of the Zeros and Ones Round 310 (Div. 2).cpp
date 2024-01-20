#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    int count1 = 0;
    int count0 = 0;
 
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            count1++;
        } else {
            count0++;
        }
    }
 
    cout << abs(count0 - count1);
 
    return 0;
}