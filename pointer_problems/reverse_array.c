#include<stdio.h>
#include<stdlib.h>

 int main(int argc, char *argv[]) 
 {
	int i,arr[5];
  	int *ptr=(int *)calloc(5,sizeof(int));
	ptr=arr;	
	for(i=0;i<5;i++)
	{
		printf("\nEnter number %d:\n",i+1);
		scanf("%d",ptr);
		ptr++;
	}
	ptr=&arr[4];
	printf("Array elements in reverse order:\n");
	for(i=5;i>0;i--)
	{
	   printf("element %d is %d\n",i,*ptr);
	   ptr--;
        }
	//printf("The sum of array elements: %d\n",sum);
	return 0;
 }

