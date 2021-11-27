#include <stdio.h>
#include <stdlib.h>
int compare(const void *x,const void *y) {
    return(*(int*)x-*(int*)y);
}
int main(void) {
	int a,n,x,i,j, count;
	int *ptr;

	scanf("%d", &a);
	for(i = 0; i < a; i++) {
	    scanf("%d %d", &n, &x);
	    count = 0;
	    ptr = (int *) malloc(sizeof(int)*n);
	    for(j=0; j < n; j++) {
	        
	        scanf("%d", &ptr[j]);
	        
	    }
	    qsort(ptr,n,sizeof(int),compare);
	      for(j=0;j<n;j++){ 
              if(ptr[j]!=ptr[j+1])
	          count++;
	       }
	      
	      if(count>=n-x)
	      printf("%d\n",n-x);
	      else
	      printf("%d\n",count);
	}

	return 0;
}