#include<stdio.h>
#include<stdlib.h>

 int main(int argc, char *argv[]) 
 {
	int num=168, x, r_num=0;
	printf("Original number:%d\n",num);
	while(num>=1)
	{
		x= num % 10;
		r_num= r_num*10 + x;
		num=num/10;
	}
	printf("Reveresed number:%d\n",r_num);
	return 0;
 }
