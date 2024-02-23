#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);

signed main()
{
    fast
    int t; cin >> t;
    vector<int> v1;
    int sum = 0;
    for(int i=0; i<=200010; i++)
    {
        int num = i;
        int sm = 0;
        while(num!=0)
        {
            sm += num%10;
            num /= 10;
        }
        sum += sm;
        v1.push_back(sum);
    }

  
    while(t--)
    {
        int n;
        cin >> n;
        cout << v1[n] << endl;
        
    }
}
