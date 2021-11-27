// https://www.codechef.com/HWRL2021/problems/HWRL2106
#include<bits/stdc++.h> 
/* It is basically a header file that includes every standard library. 
In programming contests, using this file is a good idea, when you want to reduce 
the time wasted in doing other tasks, especially when your rank is time sensitive. 
However it has it's own disadvantages as it increases compilation time. */
using namespace std; 
long long int mod = 1000000007;
 
long long int binarysearch(long long int data[],long long int key,long long int len )
{
    long long int low  = 0;
    long long int high = len-1;
    long long int mid;
    while( low < high)
    {
        mid = low + ((high - low+1) / 2);
 
        if (data[mid] > key) high = mid - 1;
        else low = mid;
    }
 
    if(data[low] > key) return -1;
    return low;
}
 
int main() {
	int t;
	cin>>t;
	while(t--) {
	    long long int ans = 0;
	    long long int p,q,r;
	    cin>>p>>q>>r;
	    long long int a[p],b[q],c[r];
	    for(int i = 0;i < p;i++)scanf("%lld",&a[i]);
	    for(int i = 0;i < q;i++)scanf("%lld",&b[i]);
	    for(int i = 0;i < r;i++)scanf("%lld",&c[i]);
	    
	    sort(a,a+p);
	    sort(c,c+r);
	    long long int suma[p];
	    long long int sumc[r];
	    suma[0] = a[0];
	    sumc[0] = c[0];
	    for(int i = 1;i < p;i++) {
	        suma[i] =(suma[i-1]+a[i])%mod;
	    }
	    for(int i = 1;i < r;i++) {
	        sumc[i] = (sumc[i-1] + c[i])%mod;
	    }
	    long long int inda,indc;
	    long long int terma,termc;
	    for(int i = 0;i < q;i++) {
	         
	        
	        inda = binarysearch(a,b[i],p);if(inda<0)continue;
	        terma  = (suma[inda] + (inda +1)*b[i])%mod;
	        indc=binarysearch(c,b[i],r);if(indc<0)continue;
	        termc = (sumc[indc]+(indc+1)*b[i])%mod;
	        ans+=(terma*termc)%mod;
	        ans=ans%mod;
	        
	        
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
//There are different approaches to this problem
// Watch the video by Codechef experts for solution - https://www.youtube.com/watch?v=cKruLo61-Bw&t=1196s
