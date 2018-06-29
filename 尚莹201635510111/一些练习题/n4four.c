#include<stdio.h> 
int main(void) 
{
	float tall; 
	char name[40]; 
	printf("Please enter your tall:\n");
	scanf("%f",&tall); 
	printf("Please enter your name:\n"); 
	scanf("%s",&name); 
	printf("%s,you are %.3f meter tall\n",name,tall/100); 
	return 0;
}