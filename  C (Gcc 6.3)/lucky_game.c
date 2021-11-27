#include <stdio.h>
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int a[n],sum=0;
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	        sum+=a[i];
	    }
	    if(sum%2==0) printf("1\n");
	    else printf("2\n");
	}
	return 0;
}