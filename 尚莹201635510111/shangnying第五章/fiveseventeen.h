#include<stdio.h>
int main()
{
	int i,j,k;
	for(i='X';i<='Z';i++)
	 for(j='X';j<='Z';j++)
	 {
		 if(i!=j)
			 for(k='X';k<='Z';k++)
			 {
				 if(i!=k&&j!=k)
				 {
					 if(i!='X'&&k!='X'&&k!='Z')
						 printf("a-%c\nb-%c\nc-%c",i,j,k);
				 }
			 }
	 }
	 return 0;
}