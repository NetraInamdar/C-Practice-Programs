#include<stdio.h>
#include<stdlib.h>

 int main(int argc, char *argv[]) 
 {
	int i,j,tmp;
  	int *a=(int *)calloc(5,sizeof(int));	
	for(i=0;i<5;i++)
	{
		printf("\nEnter number %d:\n",i+1);
		scanf("%d",a+i);
	}
	for(i=0;i<5;i++)
	{
	 for(j=i+1;j<5;j++)
	 {
		if(*(a+i) > *(a+j))
		{
			tmp=*(a+i);
			*(a+i)=*(a+j);
			*(a+j)=tmp;
		}
         }
        }
	printf("The array elements after sorting:");
	for(i=0;i<5;i++)
	{
	printf("element %d is %d\n",i+1, *(a+i));
	}
	return 0;
 }

