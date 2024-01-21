#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v;
    int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }

    int sums = 0;
    int sumd = 0;
    int plays = 0;

    while (v.size() != 0) {
        int lo = v[0];
        int hi = v[v.size() - 1];

        if ((lo >= hi) && (plays == 0)) {
            sums += lo;
            v.erase(v.begin());
            plays = 1;
        } else if ((lo >= hi) && (plays == 1)) {
            sumd += lo;
            v.erase(v.begin());
            plays = 0;
        } else if ((lo < hi) && (plays == 0)) {
            sums += hi;
            v.erase(v.begin() + v.size() - 1);
            plays = 1;
        } else if ((lo < hi) && (plays == 1)) {
            sumd += hi;
            v.erase(v.begin() + v.size() - 1);
            plays = 0;
        }
    }

    cout << sums << " " << sumd;
}
