#include <stdio.h> 
int main (void) 
{ 
	char a; 
	char b;
	printf("Please enter a character.\n"); 
	scanf("%d",&a); 
	printf("The code of %d is %c.\n",a,a); 
	 
    printf("Please enter a ASCII code.\n");
	scanf("%c",&b); 
	printf("The code of %c is %d.\n",b,b);
	 
	 return 0;
}