#include<stdio.h> 
int main (void) 
{
	char familyname[40],firstname[40];
	printf("Please enter your firstname :\n");
	scanf("%s",familyname);   
	printf("Please enter your familyname:\n"); 
	scanf("%s",familyname); 
	printf("%s,%s.\n",firstname, familyname);
	return 0;

}