#include<stdio.h>
#include<stdlib.h>

 //long add_nums_by_reference(long *, long *);

 int main() 
 {
	int i,arr[5];
	int *ptr=arr;
	printf("Enter 5 array elements: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nAccessing array elements through pointer:\n");
	for(i=0;i<5;i++)
	{
		printf("Address of element %d=%p\n",arr[i],ptr);
		ptr++;
	}
	
	return 0;
 }
