#include<stdio.h> 
int main (void) 
{
	float quart;
	printf("please input quart of water:"); 
	scanf("%f",&quart); 
	printf("The quality of water is %e\n",quart*950/3.0e-23); 
	 
	 return 0;
}