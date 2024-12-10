#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int que [SIZE];
int front=-1,rear=-1;
void main ()
{
	void insertq(int);
	int deleteq();
	int searchq();
	int data,opt,tfront,ans;
	
	do
	 {
	  printf ("\n1.Insert\n");
	  printf ("2.Delete\n");
	  printf ("3.Search\n");
	  printf ("4.Exit\n");
	  printf ("\n Enter your option :\n");
	  scanf ("%d",&opt);
	   
	   switch (opt)
	    {
	    
	    case 1: printf("Data :");
	    scanf ("%d",&data);
	    insertq (data);
	    break;
	    
	 case 2: data=deleteq();
				printf("Deleted item= %d",data);
				break;
	    
	    case 3: printf ("Item to search : ");
	    scanf ("%d",&data);
	    ans=searchq(data);
	    if (ans==1)
	    printf ("Found \n");
	     else 
	    printf ("Not found \n");
	    break;
	    
	    case 4:exit(0);
	    }
	   
	   }
	 while (1);
}

void insertq (int item)
{
	if (rear==SIZE -1)
	printf ("Queue is full\n");
	else
	que [++rear]=item;
}

int deleteq ()
{
	if (front == rear)
	   {
	   printf ("Qeue is empty\n");
	   exit(1);
	   }
	    return que [++front];
	  }
int searchq(int item)
{
	int tfront;
	if(front!=rear)
		{
			tfront=front+1;
	while(tfront!=rear && que[tfront]!=item)
		++tfront;
	if(que[tfront]==item)
		return 1;
	else
		return 0;
		}
		else
		{
		printf("Queue is empty ");
		exit(1);
		}
}

	    
