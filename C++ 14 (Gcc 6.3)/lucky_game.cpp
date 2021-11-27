#include <iostream>
#define ll long long
using namespace std;
int main() {
	ll t;
	cin >> t;
	while(t--)
	{
	    ll n, sum = 0;
	    cin >> n;
	    ll arr[n];
	    for(int i = 0; i < n; i++) {
	        cin >> arr[i];
	        sum += arr[i];
	    }
	    if(sum%2 == 0) {
	        cout << "1\n";
	    }
	    else {
	        cout << "2\n";
	    } 
	}
	return 0;
}