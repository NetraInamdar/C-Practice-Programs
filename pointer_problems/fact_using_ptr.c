#include<stdio.h>
#include<stdlib.h>

//************ METHOD 1: ************* 

 void factorial(int, int*);
 int main() 
 {
	int fact,num;
	
	printf("Enter the number:");
	scanf("%d",&num);
	
	factorial(num, &fact);	
	
	printf("\nFactorial of given number: %d\n",fact);
	return 0;
 }

 void factorial(int n, int *f)
 {
	int i;
	*f=1;
	for(i=1;i<=n;i++)
	{
		*f=*f*i;
	}
 }
