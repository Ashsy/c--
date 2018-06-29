#include<stdio.h>  
int main(void) 
{
	 char first_name[40]; 
 	printf("Please enten your first_name :") ;  
 	scanf("%s",first_name);  
 	printf("\"%s\"\n",first_name); 
 	printf("\"%20s\"\n",first_name); 
 	printf("\"%-20s\"\n",first_name); 
 	return 0;
}