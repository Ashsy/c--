#include<stdio.h>  
int main(void) 
{
	int day,money,max; 
	 printf("Please enter your max:\n"); 
	scanf("%d",&max); 
	day=0; 
	money=0; 
	while(day++<max) 
	    money=money+day; 
	printf("money=%d\n",money); 
	return 0;
}