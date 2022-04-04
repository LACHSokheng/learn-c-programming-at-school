#include <stdio.h>
int main(){
	int i,n,Sn;
	printf(" Enter number of n:");
	scanf(" %d ",&n);
	
	for (i = 0; i < n; i ++){
		printf(" %d ",i);
		printf("+");
		printf(" %d ",n);
	}
	Sn +=i;
	printf("The result is %d",Sn);
	
}
