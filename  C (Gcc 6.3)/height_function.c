#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define mod 1000000007
int cmpfunc (const void * a, const void * b)
{
   return ( *(long long int*)a - *(long long int*)b );
}
int main(){
int t;
scanf("%d",&t);
while(t--){
       unsigned long long int q,p,r,i;
        scanf("%llu %llu %llu",&q,&p,&r);
        long long int x[q],y[p],z[r];
        for(i=0;i<q;i++) scanf("%lld",&x[i]);
        qsort(x, q, sizeof(long long int), cmpfunc);
        for(i=0;i<p;i++) scanf("%lld",&y[i]);
        qsort(y, p, sizeof(long long int), cmpfunc);
        for(i=0;i<r;i++) scanf("%lld",&z[i]);
        qsort(z, r, sizeof(long long int), cmpfunc);
         unsigned long long int sumx=0,sumz=0,j=0,k=0,c1=0,c2=0,total=0;
        for(i=0;i<p;i++){
            for(;j<q;){
                if(y[i]>=x[j]){sumx=sumx%mod+x[j]%mod;j++;c1++;}
                else{break;}
            }
            for(;k<r;){
                if(y[i]>=z[k]){sumz=sumz%mod+z[k]%mod;k++;c2++;}
                else{break;}
            }
            if(c1!=0&&c2!=0)total=((total%mod)+((sumx+((y[i]*c1)%mod))*(((c2*y[i])%mod)+sumz))%mod)%mod;
 
        }
 
        printf("%llu\n",total);
 
}
} 