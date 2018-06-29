#include<stdio.h>  
#include<string.h>
int main(void)  
{ 
    char first_name[40],family_name[40];
	printf("Please enten your first_name and family_name:"); 
	scanf("%s",first_name); 
	scanf("%s",family_name); 
	printf("%-10s %-10s\n",first_name,family_name); 
	printf("%-10d %-10d\n",strlen(first_name),strlen(family_name)); 
	printf("%10s %10s\n",first_name,family_name); 
	printf("%10d %10d\n",strlen(first_name),strlen(family_name)); 
	return 0;
}