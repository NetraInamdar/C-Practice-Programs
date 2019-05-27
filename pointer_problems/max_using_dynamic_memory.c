#include<stdio.h>
#include<stdlib.h>

 int main() 
 {
	int i,num_of_elem=5;
	float *element=(float *)calloc(num_of_elem,sizeof(float));
	
	if(element==NULL)
	{	printf("No memory allocated.\n");
		exit(0);
	}
	for(i=0;i<5;i++)
	{
		printf("\nEnter number %d:",i+1);
		scanf("%f",element+i);
	}
	for(i=1;i<5;i++)
	{
		if(*element < *(element+i))
		{ *element=*(element+i); }
	}
	printf("The largest number using dynamic memory allocation is:%f\n",*element);
	return 0;
 }

