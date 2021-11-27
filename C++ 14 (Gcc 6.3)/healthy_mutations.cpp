//https://www.codechef.com/HWRL2021/problems/HWRL2101
#include <iostream>
using namespace std;
int main() {
    //Test Cases
	int t;
	cin>>t;
	while(t--) {
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for (int i=0;i<n;i++)
	    cin>>a[i];
        //Count Variable
	    int c=0;
	    for (int i=0;i<n;i++) {
            //Chef's method adds an integer K to each of the bacterias' characteristic value. 
	        a[i]+=k;
            //Chef knows that if the new characteristic value of a bacteria can be divisible by 7, then it will have healthy mutations.
	        if(a[i]%7==0)
	        c++;
	    }
        //Output the number of healthy mutations
	    cout<<c<<'\n';
	}
	return 0;
}