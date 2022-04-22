#include <stdio.h>
#include <conio.h>

void main(){
   int n;
   input:
   	system("color F");

   do {
     printf("List of Problems\n");
     printf("================\n");
     printf("1. Fibonacci\n");
     printf("2. Factorial\n");
     printf("3. Area of Triangle.\n");
     printf("4. Exit\n");
     printf("Choose, one item from the list : ");
     scanf("%d", &n);
    
     if (n == 4){
       printf("Exit.\n");
       break;
       goto input;
     } else if (n==1){
    	printf("1 + 2 + 3 + ... + n!\n");
	    system("color 4");
		printf("\aYou can not input negative number!");
		getch();
		system("cls");
		goto input;
		
       getch();
     } else if (n==2){
       printf("Factorial\n");   
	   getch();
	   goto input;
     } else if (n==3){
       printf("Area of Triangle\n");  
	   getch();
	   goto input;
     }

   } while (4);
   getch();
}
