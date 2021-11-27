#include <stdio.h>
#include <stdlib.h>
int main(void) {
	// your code goes here
	int t,N,i,j;
	scanf("%d",&t);
	while(t--) {
	    scanf("%d",&N);
	    long int a[N],min;
	    for(i=0;i<N;i++)
	    scanf("%ld",&a[i]);
	    min=abs(a[0]-a[1]);
	    for(i=0;i<N-1;i++) {
	        for(j=0;j<N;j++) {
	            if(j==i)
	            continue;
	            long int temp;
	            temp=abs(a[i]-a[j]);
	            if(min>=temp)
	            min=temp;
	        }
	    }
	    printf("%ld\n",min);
	}
	return 0;
}