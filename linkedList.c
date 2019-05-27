// C program to implement a linked list:

#include<stdio.h>
#include<stdlib.h>

typedef struct St1 node;

    int n=7;
    struct St1 
    {
        int var1;
 	node* next;
    }; 

    node* newNode1(int);
    node* newNode1(int n)  //newnode function using malloc         
    {
	//struct St1 obj1;
	node* newNode1=(node*)malloc(sizeof(node));
        newNode1->var1=n;
        printf("Var1 = %d\n",newNode1->var1);
	return newNode1;	
    }



 int main(int argc,int* argv[])
 {
   int a=5,b=10,i;

   int arr[7]={123,65,87,35,568,49,240};  // array of structures with n=4
   node *ptr1;   // pointer to structure
   node *ptr2;
   node *head1;
   
   
   // initializing the structure members using malloc:
   printf("Linked list using malloc:\n");
   //printf("Value\tAddress\n");
   for(i=0;i<n;i+=2)
     {  
          ptr1=newNode1(arr[i]); 
          if(i != 0)
          {  
            ptr2->next = ptr1; 
          }
        if(i==0)
        {
	 	head1=ptr1;
       	}
	if(i==n-1)
	{
		ptr1->next=NULL;
		break;	
	}
        ptr2=newNode1(arr[i+1]);
        ptr1->next=ptr2;
     }
	
     node* temp=head1;
     temp->next=head1->next;
     while(temp->next!=NULL)
	{
		printf("Node address= %p\tNext Address : %p\n",temp,temp->next);
		temp=temp->next;
        }
     //printf("%d",temp->var1);	
     printf("\n");
     
     // initialize structure members using calloc:
     //printf("\n");
     //node* ptr_to_struct; 
    
     return 0;
 }
