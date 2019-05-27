#include<stdio.h>

int main()
{
	int a=349,x=0,y;
	y=a;
	
	x += y%10;
	y /= 10;
	x += y%10;
	y /= 10;
	x += y%10;
	printf("Sum of digits of %d is %d\n",a,x);

	return 0;
}
