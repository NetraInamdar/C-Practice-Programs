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
	
	sum=add_nums_by_reference(ptr, qtr);

	printf("value at *ptr1=%ld\n",*ptr);
	printf("value at *qtr=%ld\n",*qtr);
	printf("sum using *ptr and *qtr=%ld\n",sum);

	return 0;
 }

 long add_nums_by_reference(long *n1, long*n2)
 {
	long sum1;
	sum1=*n1 + *n2;
	return sum1;
 }
