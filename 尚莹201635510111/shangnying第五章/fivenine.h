#include<stdio.h>
int main()
{
	int i,j,s,sum;
	sum=0;
	for(i=2;1<=1000;i++)
	{
		s=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				s+=j;
			}
		}
		if(s==i)
		{
			printf("%d\n",i);
			sum++;
		}
	}
	printf("�����ĸ���:%d\n",sum);
	return 0;
}

