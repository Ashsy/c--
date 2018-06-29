#include<stdio.h> 
int main(void) 
{
	float count; 
	printf("Please enten a count:"); 
	scanf("%f",&count); 
	printf("The count is %.1f or %.1e\n",count,count);  
	printf("The count is %.3f or %.3e\n",count,count); 
	return 0;
	
}