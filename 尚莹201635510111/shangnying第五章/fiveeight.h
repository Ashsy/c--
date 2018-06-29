#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Please input a three digit:\n",N);
	for(N=100;N<=999;N++)
	{
		a=N/100;
		b=(N/10)%10;
		c=N%10%10;
		d=a*a*a+b*b*b+c*c*c;
	}
	if(d==N)
	{
		printf("The number is:%d/n",N);
	}
	return 0;
}