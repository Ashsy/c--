#include<stdio.h>  
#define INCH 2.54 
int main (void) 
{
	float height,feet;  
	printf("Enter a height in centimeters:\n");   
    scanf("%f",&height); 
	while(height>0) 
	{ 
		printf("%.1f cm=%d feet, %.1f inches\n",height,(int)(height/INCH/12),height/INCH-(int)(height/INCH/12)*12); 
        printf("Enter a height in centimeters (<=0 to quit)\n");
		scanf("%f",&height);
	} 
	printf("bye"); 
	return 0;
}