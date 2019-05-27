#include<stdio.h>
#include<stdlib.h>

 int main() 
 {
	int var1=10,n,o; 
	int *ptr1=&var1;
	printf("ptr1 stores address of var1=%p\n",ptr1);
	printf("*ptr1 stores value of var1=%d\n",*ptr1);
	printf("Actual address of var1=%p\n",&var1);

	var1=34;
	printf("address of var1 after changing var1=%p\n",ptr1);
        printf("value at *ptr1 after updating var1= %d\n",*ptr1);
        printf("Actual address of updated var1=%p\n",&var1);

	*ptr1=7;
	printf("addr of var1 after changing *ptr1=%p\n",ptr1);
        printf("updated value at *ptr1=%d\n",*ptr1);
        printf("Actual address of var1=%p\n",&var1);
	printf("Updated value of var1 after changing *ptr1=%d\n",var1);
	return 0;
 }

