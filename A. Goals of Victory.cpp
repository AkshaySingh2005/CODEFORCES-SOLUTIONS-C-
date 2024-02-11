#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int sum= 0;


        for (int i = 0; i < n - 1; ++i) {
            int e;
            cin >> e;
            sum+= e;
        }

        
       

        cout << -(sum)<< endl;
    }

    return 0;
}
