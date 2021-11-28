// https://www.codechef.com/HWRL2021/problems/HWRL2106
//There are different approaches to this problem
//Watch the video by Codechef experts for a different approach - https://www.youtube.com/watch?v=cKruLo61-Bw
#include<bits/stdc++.h> 
/* It is basically a header file that includes every standard library. 
In programming contests, using this file is a good idea, when you want to reduce 
the time wasted in doing other tasks, especially when your rank is time sensitive. 
However it has it's own disadvantages as it increases compilation time. */
using namespace std; 
/* Why we need modulo 10^9+7 in some programming questions - https://www.geeksforgeeks.org/modulo-1097-1000000007/ */
long long int mod = 1000000007;
/* In this approach we go with the binary search method as it can search in lesser time.
However you can also go with linear search */
long long int binarysearch(long long int data[],long long int key,long long int len ) {
    long long int low  = 0;
    long long int high = len-1;
    long long int mid;
    while( low < high) {
        mid = low + ((high - low+1) / 2);
        if (data[mid] > key) high = mid - 1;
        else low = mid;
    }
    if(data[low] > key) return -1;
    return low;
}
int main() {
	int t;
	//Test Cases
	cin>>t;
	while(t--) {
	    long long int ans = 0;
	    long long int p,q,r;
	    cin>>p>>q>>r;
	    long long int x[p],y[q],z[r];
		/* The scanf() function in C++ is used to read the data from stdin. 
		It is defined in the cstdio header file. And lld is datatype for long long int */
	    for(int i = 0;i < p;i++)scanf("%lld",&x[i]); 
	    for(int i = 0;i < q;i++)scanf("%lld",&y[i]);
	    for(int i = 0;i < r;i++)scanf("%lld",&z[i]);
	    /* You might have seen problems which say “Warning: Large I/O data, be careful with certain 
		languages (though most should be OK if the algorithm is well designed)”. These usually require 
		Fast I/O. scanf() is faster than cin - Learn more: https://www.geeksforgeeks.org/cincout-vs-scanfprintf/#
		Fast I/O in Competitive programming: https://www.geeksforgeeks.org/fast-io-for-competitive-programming/ */
	    sort(x,x+p);
	    sort(z,z+r);
		/* Sort is a C++ STL function which can sort array elements. It takes 2 parameters, starting point
        and ending point of sorting. Learn more - https://www.geeksforgeeks.org/sort-c-stl/ 
        However,You can also write a manual sort function to sort array elements. */
	    long long int sumx[p];
	    long long int sumz[r];
	    sumx[0] = x[0];
	    sumz[0] = z[0];
	    for(int i = 1;i < p;i++) {
	        sumx[i] =(sumx[i-1]+x[i])%mod;
	    }
	    for(int i = 1;i < r;i++) {
	        sumz[i] = (sumz[i-1] + z[i])%mod;
	    }
	    long long int indx,indz;
	    long long int termx,termz;
	    for(int i = 0;i < q;i++) {  
			// Search for y[i] among the sorted elements of array x 
	        indx = binarysearch(x,y[i],z);
			//Continue until binsearch return is not -1 that is till the search for y[i] in x is not failed
			if(indx<0)continue;
	        termx  = (sumx[indx] + (indx +1)*y[i])%mod;
	        indz=binarysearch(z,y[i],r);
			if(indz<0)continue;
	        termz = (sumz[indz]+(indz+1)*y[i])%mod;
	        ans+=(termx*termz)%mod;
			// Output the required sum modulo 1000000007 for each test case
	        ans=ans%mod;      
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
