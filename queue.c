#include<stdio.h>
#define MAX 5
int queue[MAX];
int front =-1, rear =-1;
//-------Eneque using argument passing---------
void enequeue(int item)
	{
		if(rear==MAX-1)
	{
	printf("\n overflow \n");
	}
	else
		{
			if(front== -1)
			front=0;
			rear++;
			queue[rear] = item;
			printf("%d inserted into the queue.\n",item);
	}
}
//-----------Dequeue------------------
void dequeue()
{
	if(front == -1 || front >rear)
	{
		printf("Queue underflow \n");
	}
	else
	{
		printf("Deleted elements is %d \n", queue[front]);
	if(front == rear)
	{
		front = rear= -1;
	}
	else
	{
		front++;
		}
	}
}
//-------------Display--------------------
void display()
{
	int i;
	if(front == -1)
	{
		printf("Queue is empty \n");
	}
	else		
	{
		printf("Queue elements are : ");
	for(i = front; i<=rear; i++)
	{
		printf("%d", queue[i]);
	}
		printf("\n");
	}
}
//----------peek------------------
void peek()
{
	if(front == -1)
	{
		printf("Queue is empty \n");
	}
	else
		{
		printf("Front element is %d \n", queue[front]);
	}
}
int main()
{
int choice, item;
	do
		{
		printf("\n ----QUEUE OPERATION-----\n");
		printf("1. Enequeue \n");
		printf("2. Dequeue \n");
		printf("3. Display \n");
		printf("4. Peek \n");
		printf("5. Exit \n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		
switch(choice)
	{
	case 1:
	printf("Enter the element: ");
	scanf("%d", &item);
	enequeue(item);//Argument passing
	break;

	case 2:
	dequeue();
	break;

	case 3:
	display();
	break;

	case 4:
	peek();
	break;

	case 5:
	printf("Program Ended\n");
	break;
	
	default:
	printf("Invalid Choice \n");
	}
}
	while(choice!=5);
	return 0;
}
