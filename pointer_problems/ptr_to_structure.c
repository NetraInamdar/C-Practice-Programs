#include<stdio.h>
#include<stdlib.h>

 struct empAddr
 {
	char *ename;
	char stname[20];
	int pincode;
 }
 employee={"JOhn","Court street\n",659874},*pt=&employee;

 int main(int argc, char *argv[]) 
 {
	printf("Accessing ename with pt->ename since *ename is declared\n");
	printf("%s from %s with %d pincode\n",pt->ename, (*pt).stname, (*pt).pincode);
	printf("Another way to access ename is:\n");
	printf("using (*pt).ename: %s from %s:",(*pt).ename, (*pt).stname);
	return 0;
 }

