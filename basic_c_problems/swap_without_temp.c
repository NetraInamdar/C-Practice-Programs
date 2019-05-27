#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int x=10, y=15;
	printf("Before swapping:%d %d\n",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("After swapping:%d %d\n",x,y);
	return 0;
}
