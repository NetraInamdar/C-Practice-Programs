#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
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
	for(int i = 0; str[i]; i++)
	{
            str[i] = tolower(str[i]);
        }	

	len=calc_length(str);
	printf("\nNo of vowels in string is: %d\n",len); 

	return 0;
 }

 int calc_length(char *ch) //this is the address of str getting passed
 {
 	int vowel_ctr=0, consonant_ctr=0;
	while(*ch!= '\0')
	{
		if(*ch=='a'||*ch=='e'||*ch=='i'||*ch=='o'||*ch=='u')
		{
			vowel_ctr++;
			ch++;
		}
		else { consonant_ctr++; ch++; }
	}	
	return vowel_ctr;
 }
