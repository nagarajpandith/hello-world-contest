#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int arr[n];
	    int a,b;
	    int diff=INT_MAX;
	    for(int i=0;i<n;i++) {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    for(int i=0;i<n-1;i++) {
	        if(arr[i+1]-arr[i]<diff) {
	            diff=arr[i+1]-arr[i];
	        }
	    }
	    cout<<diff<<endl;   
	}
	return 0;
}