#include<stdio.h> 
int main (void) 
{
	int count,sum,max; 
	 printf("Please enter your max:\n"); 
	scanf("%d",&max); 
	count=0; 
	sum=0; 
	while(count++<max) 
	    sum=sum+count*count; 
	printf("sum=%d\n",sum); 
	return 0;
}