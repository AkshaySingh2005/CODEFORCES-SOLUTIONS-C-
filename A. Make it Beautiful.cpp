#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;cin>>t;

    while(t--){
   int n;
   cin >> n;
	vector<int> arr(n);

	for(int i=0 ; i < n ; i++ ) cin >> arr[i];
	if( arr[0] == arr [n-1] )
	{
		cout << "NO\n" ;
	}
	else 
	{
	    cout << "YES\n" ;
		reverse ( arr.begin () + 1, arr.end() );
		for (int i=0  ; i < n ; i++){
			cout << arr [i] << " ";
		}cout << endl ;
	}

    }
}