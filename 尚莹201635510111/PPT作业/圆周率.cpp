#include<stdio.h>
#include<math.h>
#define PI 3.1415926
void main()
{
	float r,s;
	printf("请输入圆的半径:");
	scanf("%f",&r);
	s=PI*r*r;
    printf("%lf %f\n",PI,r);
	printf("圆的面积为：%f\n",s);
		return 0;
}