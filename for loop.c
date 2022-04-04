#include<stdio.h>
main(){
	
	int face=1,i,n;
	
	printf(" Enter the number of n:");
	scanf("%d",&n);
	for (i=1; i<= n; i++){
		printf(" %d ",i);
		printf("*");
		face *=i;
	}
	
	printf(" =%d ",face);
}
