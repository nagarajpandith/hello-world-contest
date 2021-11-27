#include<bits/stdc++.h> 
using namespace std; 
#define int long long
#define M 1000000007
int fun(int *a,int *b,int *c,int p,int q,int r) { 
    int p1[p],p2[r];
    p1[0]=a[0];
    p2[0]=c[0];
    for(int i=1;i<p;i++) p1[i]=p1[i-1]+a[i];
    for(int i=1;i<r;i++) p2[i]=p2[i-1]+c[i];
    int s=0;
    for(int j=0;j<q;j++) {
        int i=lower_bound(a,a+p,b[j]+1)-a;
        int k=lower_bound(c,c+r,b[j]+1)-c;
        if(i==0||k==0) continue;
        int part1=(p1[i-1]+(i*b[j])%M)%M;
	    int  part2=(p2[k-1]+(k*b[j])%M)%M;
	        s=(s%M+(part1*part2)%M)%M;
    }
    return s;
}

signed main() { 
  int t;
  cin>>t;
  while(t--)
  {
      int p,q,r;
      cin>>p>>q>>r;
      int *a=new int[p];
      int *b=new int[q];
      int *c=new int[r];
      for(int i=0;i<p;i++) cin>>a[i];
      for(int i=0;i<q;i++) cin>>b[i];
      for(int i=0;i<r;i++)  cin>>c[i];
      sort(a,a+p);
      sort(b,b+q);
      sort(c,c+r);
      cout<<fun(a,b,c,p,q,r)<<endl;
  }
  
	return 0; 
} 