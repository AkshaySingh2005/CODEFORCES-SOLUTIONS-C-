#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    int count = 0;
 
    while (n > 0) {
        n--; 
        count++;
 
        if (count % m == 0) { 
    //if count is divisble by m then that means her mom is gonna buy new pair of socks on that day thus increasing n .
            n++; 
        }
    }
 
    cout << count << endl;
 
    return 0;
}