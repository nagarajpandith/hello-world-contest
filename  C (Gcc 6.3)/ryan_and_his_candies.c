#include <stdio.h>
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,k;
	    scanf("%d%d",&n,&k);
	    int ans=0;
	    for(int i=2;i<=k;i++){
	        if(ans<n%i){
	            ans=n%i;
	        }
	    }
	   printf("%d\n",ans);
	}
	return 0;
}