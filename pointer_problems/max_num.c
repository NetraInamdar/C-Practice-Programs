#include<stdio.h>
#include<stdlib.h>

 long add_nums_by_reference(long *, long *);

 int main() 
 {
	long fno=5;
	long sno=6;
	long sum; 
	long *ptr=&fno;
	long *qtr=&sno;
	
	if (*ptr > *qtr) 
	{
		printf("Max number is fno=%ld\n",*ptr);
	}
	else { printf("Max number is sno=%ld\n",*qtr); }


	printf("value at *ptr1=%ld\n",*ptr);
	printf("value at *qtr=%ld\n",*qtr);
	//printf("sum using *ptr and *qtr=%ld\n",sum);

	return 0;
 }
