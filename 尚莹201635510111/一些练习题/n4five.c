#include<stdio.h> 
int main(void) 
{
	float speed,size,time;  
	printf("Please enter speed and size:"); 
	scanf("%f,%f",&speed,&size); 
	time=size*8/speed;
	printf("At %5.3f megabits per second,a file of %5.2f megabytes downloads in %5.2f seconds\n",speed,size,time); 
	return 0;
	
}