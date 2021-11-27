#include <stdio.h>
int main(void) {
	int t,x,y,z;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d",&x,&y);
	    int count=0;
	    for(int i=0;i<x;i++){
	        scanf("%d",&z);
	        if((z+y)%7==0){
	            count=count+1;
	        }
	    }
	    printf("%d\n",count);
	}
}