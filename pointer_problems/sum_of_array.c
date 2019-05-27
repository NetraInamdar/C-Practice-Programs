#include<stdio.h>
#include<stdlib.h>

 int main(int argc, char *argv[]) 
 {
	int i,arr[5],sum=0;
  	int *ptr=(int *)calloc(5,sizeof(int));
	ptr=arr;	
	for(i=0;i<5;i++)
	{
		printf("\nEnter number %d:\n",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
	   sum=sum+ *ptr;
	   ptr++;
        }
	printf("The sum of array elements: %d\n",sum);
	return 0;
 }

