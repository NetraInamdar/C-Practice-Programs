#include<stdio.h>
#include<stdlib.h>

void printNos(int);

int main(int argc, char *argv[])
{
	int n=100;
	printNos(n);
	return 0;
}

void printNos(int n)
{
	if(n>0)
	{
		printNos(n-1);
		printf("%d",n);
	}
}
