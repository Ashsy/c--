#include<stdio.h>
int main()
{
	int a=2,b=1;
	int c,n,i;
	double s=0;
	scanf("%d",&n);
	if(n>10||n<1)return 0;
	for(i=1;i<=n;i++)
	{
		s+=(1.0*a/b);
		c=b;
		b=a;
		a=a+c;
	}
	printf("%.6f\n",s);
	return 0;
}