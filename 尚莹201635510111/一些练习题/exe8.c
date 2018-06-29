#include<stdio.h> 
int main (void) 
{
	float pint, glass, ounce, soup_spoon, tea_spoon; 
	printf("please enter the glass number:"); 
	scanf("%f",&glass);  
	pint=glass/2;
	printf("There are %f pint.\n",pint);  
	ounce=glass*8;
	printf("There are %f ounce\n", ounce);  
	soup_spoon=ounce*2;
	printf("There are %f soup_spoon\n",soup_spoon);  
	tea_spoon=soup_spoon*3;
	printf("There are %f tea_spoon\n",tea_spoon); 
	return 0;
	
}