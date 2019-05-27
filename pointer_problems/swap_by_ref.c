#include<stdio.h>
#include<stdlib.h>

//************ METHOD 1: ************* 

 void swapNums(int *x,int *y, int *z);
 int main() 
 {
	int e1=5,e2=6,e3=7;
	
	swapNums(&e1,&e2,&e3);	
	
	printf("Swapped elements using reference: %d %d %d\n",e1,e2,e3);
	return 0;
 }

 void swapNums(int *x, int *y, int *z)
 {
	int tmp=*y;
	*y=*x;
	*x=*z;
	*z=tmp;
 }
