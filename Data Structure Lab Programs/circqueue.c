#include<stdio.h>
#define MAX 5
int queue[MAX];
int front = -1, rear = -1;
int isFull()
{
if((rear + 1) % MAX == front)
{
return 1;
}
return 0;
}
int isEmpty()
{
if(front == -1 && rear == -1)
{
return 1;
}
return 0;
}
void display(){
int i ;
if(isEmpty())
{
printf("\n Queue is empty \n");
return ;
}
printf("\n Queue  Elements: ");
i = front;
do
{
printf("%d",queue[i]);
i = (i+1)%MAX;
}
while(i! = (rear+1)%MAX);
}
void dequeue(){
if(isEmpty()){
printf("\n Queue is empty \n");
return;
}
printf("\n %d is deleted \n", queue[front]);
if(front == rear){
front = rear =-1;
}
else{
front = (front+1)%MAX;
}
}
void enequeue(){
int x;
if(isFull()){
printf("\n Queue is full \n");
return;
}
printf("Enter the element to insert: ");
scanf("%d",&x);
if(isEmpty()){
front = rear = 0;
}else
{
rear = (rear+1)%MAX;
}
queue[rear]=x;
printf("\n Element %d inserted sucessfuly\n", queue[rear]);
}
void search(){
int key, i, found = 0;
if(isEmpty)
{
printf("\n Queue is empty \n");
return;
}
printf("\n Enter the element to search");
scanf("%d", &key);
i = front;
do{
if (queue[i] == key){
printf("\n Element %d found at position %d \n", key,i);
found = 1;
}
i=(i+1)%MAX;
}
while(i !=(rear+1)%MAX);
if(!found){
printf("\n Element %d not found in the queue \n",key);
}
}
int main ()
{
int choice ;
printf("\n Circular queue using array\n");
do
{
printf("\n 1.Enequeue\n 2.Dequeue \n 3.Display \n 4.Search \n 5.Exit \n"); 
printf(" Enter your choice; ");
scanf("%d", &choice);
switch(choice){
case 1:
enequeue();
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
search();
break;
case 5:
printf("\n Exiting....\n");
return 0;
default: printf(" \n Invalid choice \n");
}
}while(choice! = 5);
return 0;
}
