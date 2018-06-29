#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,h;
	printf("¶Ô½ÇÏßh=");
	scanf("%d",&h);
	for(i=0;i<h;i++)
	{
		k=abs(i-h/2);
		printf("\n:);
			for(j=0;j<k;j++)
				printf(" ");
			for(j=0;j<(h-2*k);j++)
				printf("*");
			return 0;
	}
}