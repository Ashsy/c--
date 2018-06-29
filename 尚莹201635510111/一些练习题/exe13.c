#include<stdio.h> 
int main(void) 
{
	float toobig=3.4E38*100.0f; 
	float toosmall=1.234E-6; 
	printf("%e\n",toobig); 
	printf("%f\n",toosmall/10); 
	return 0; 
}