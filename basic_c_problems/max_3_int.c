#include<stdio.h>
#include<stdlib.h>

 int main(int argc,char **argv) 
 {
     int a=10,b=15,c=8,max_2_nos,max_3_nos;
     printf("The 3 nos are:%d %d %d",a,b,c);
     max_2_nos=(a + b + abs(a-b) )/2;
     max_3_nos=(max_2_nos + c + abs(max_2_nos-c) )/2;
     printf("\nMax of 3 nos: %d\n",max_3_nos);
     return 0;
 }
