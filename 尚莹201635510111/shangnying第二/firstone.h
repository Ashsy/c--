#include<stdio.h>
#include<math.h>
#define Pi 3.1415926
int main()
{
	float r,s;
	scanf("%f",&r);
	s=Pi*pow(r,2);
	printf("S=%f\nR=%f\n",s,r);
	return 0;
}
