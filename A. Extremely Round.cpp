#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin >> t;
while(t--)
{
  string s;
  cin >> s;
  int ans = 0;
  for (int i = 0; i < s.length(); i++) {
    if (i == 0) {
      ans += s[i] - '0';
    } 
    else {
      ans += 9;
    }
  }
  cout << ans << endl;
}
}