#include<stdio.h>
#include<stdlib.h>
/*
************ METHOD 1: ************* 

 int main() 
 {
	char str[20]="w3resource";
	char *ch=str;
	int counter=0;
	while(*ch!='\0')
	{
		counter++;
		ch++;		
	}
	printf("Length of string using pointer: %d\n",counter);
	return 0;
 }
*/

// METHOD 2:

 int  calc_length(char*);

 int  main()
 {
	char str[25];
	int len;
	printf("Input a string: ");
	fgets(str, sizeof str, stdin);

	len=calc_length(str);
	printf("\nThe length of given string is: %d\n",len-1); 

	return 0;
 }

 int calc_length(char *ch) //this is the address of str getting passed
 {
 	int counter=0;
	while(*ch!= '\0')
	{
		counter++;
		ch++;
	}
	return counter;
 }
