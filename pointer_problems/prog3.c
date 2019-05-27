#include<stdio.h>
#include<stdlib.h>

 int main() 
 {
	int m=10;
	float fx=300.60;
	char cht='z'; 
	int *pt1=&m;
	float *pt2=&fx;
	char *pt3=&cht;
	printf("pt1 stores address of m=%p\n",pt1);
	printf("Actual address of m=%p\n",&m);
	printf("Value of m using *(&m)=%d\n",m);
	printf("Value of m using *pt1=%d\n",*pt1);

	/*
	var1=34;
	printf("address of var1 after changing var1=%p\n",ptr1);
        printf("value at *ptr1 after updating var1= %d\n",*ptr1);
        printf("Actual address of updated var1=%p\n",&var1);

	*ptr1=7;
	printf("addr of var1 after changing *ptr1=%p\n",ptr1);
        printf("updated value at *ptr1=%d\n",*ptr1);
        printf("Actual address of var1=%p\n",&var1);
	printf("Updated value of var1 after changing *ptr1=%d\n",var1);
	*/
	return 0;
 }

