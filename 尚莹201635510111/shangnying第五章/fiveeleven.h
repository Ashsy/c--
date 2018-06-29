#include<stdio.h>
int main()
{
	double sum=100,i=sum/2;
	int j=0;
	for(j=1;j<10;j++)
	{
		sum+=(2*i);
		i=i/2;
	}
	printf("%f\n",sum);
	system("pause");
	return 0;
}
