#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node*link;
};
struct node*head = NULL;
	void insertFirst(){
struct node*newnode;
newnode = (struct node*) malloc(sizeof(struct node));
	if(newnode == NULL){
	printf("\n No Space available \n");
	return ;
}
newnode ->link = NULL;
	printf("\n Enter the value to insert to front \n");
	scanf("%d" , & newnode -> data);
	if(newnode == NULL){
	head  = newnode;
}else{
	newnode -> link = head;
	head = newnode;
	}
	printf("\n Element inserted %d", newnode -> data);
}
void insertLast(){
	struct node*temp = head,*newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
		if(newnode == NULL){
		printf("\n No space available \n");
	return ;
}
newnode -> link = NULL;
	printf("\n Enter The element to insert Last \n");
	scanf("%d",&newnode -> data);
		if(head == NULL){
		head = newnode;
	}else{
		while(temp -> link != NULL){
		temp = temp -> link;
}
	temp -> link = newnode;
}
	printf("Element inserted successfully %d", newnode -> data);
}
void insertLocation(){
	int key;
	struct node*temp = head,*newnode;
	newnode = (struct node* )malloc(sizeof(struct node));
		if(newnode == NULL){
		printf("\n No SPace available \n");
	return;
}
	newnode -> link = NULL;
		if(head == NULL){
		printf("\n LIST Empty\n");
	return ;
}
	printf(" \n Enter the key were after you want to add element \n");
	scanf("%d", & key);
		while(temp!= NULL && temp -> data !=key){
		temp = temp -> link;
}
	if(temp==NULL){
	printf("\n Value not exists \n");
	return ;
}
	printf("\n Enter The element to insert \n");
	scanf("%d" , &newnode -> data);
	newnode -> link = temp -> link;
	temp -> link = newnode;
	printf("Value inserted successfully %d", newnode -> data);
}
void deleteFirst(){
	struct node*temp = head;
		if(head == NULL){
		printf("\n List Empty\n");
	return;
}
	head = temp -> link;
	printf("\n Value deleted %d \n", temp -> data);
	free(temp);
}
void deleteLast(){
	struct node*temp = head,*prev = NULL;
		if(head == NULL){
		printf("\n Empty List \n");
	return;
}
	if(temp -> link == NULL){
	printf(" \n value %d deleted \n", temp -> data);
	head = NULL;
	free(temp);
	return;
}
		while(temp -> link != NULL) {
	prev = temp;
	temp = temp ->link;
}
	printf("\n Value %d  deleted\n", temp -> data);
	prev -> link = NULL;
	free(temp);
}
void deleteLocation(){
	int key;
	struct node * temp = head,*prev = NULL;
		if(head == NULL){
		printf("\n Empty List \n");
	return;
}
	printf("\n Enter the key that you want to delete \n");
	scanf("%d", &key);
		if(temp -> data == key){
		head = temp -> link;
		printf("\n value %d is deleted \n", temp -> data);
		free(temp);
	return;
}
while(temp!= NULL && temp -> data != key ) {
	prev = temp;
	temp = temp -> link;
}
if(temp == NULL){
	printf("\n Value not exists \n");
	return ;
}
	prev -> link = temp -> link;
	printf("Value %d is delted", temp -> data);
	free(temp);
}
void search(){
	struct node*temp = head;
	int pos = 0, found = 0, val;
		if(head == NULL){
		printf("\n Empty List \n");
	return;
}
	printf("\n Enter the value to search ");
	scanf("%d", &val);
	while(temp != NULL){
		if(temp -> data == val){
		printf("%d value found at location %d \n", temp -> data, pos + 1);
		found = 1;
}
	pos ++;
	temp = temp -> link;
}
	if(!found){
		printf("Value %d not exist", val);
	}
}
void display(){
	struct node*temp = head;
		if(temp == NULL){
		printf("\n Empty List \n");
	return;
}
	printf("\n Elements in the list \n");
		while(temp != NULL){
		printf("%d", temp -> data);
		temp = temp -> link;
	}
}
void main() {
	int choice;
	printf("\n****SINGLY LINKED LIST****\n");
	do{
	printf("\n 1-> Insert First\n 2-> Insert Last\n 3-> Insert Location\n 4-> Delete First\n 5-> Delete Last\n 6-> Delete Location\n 7-> Search\n 8-> Display\n 9-> Exit \n");
		
	printf("\n Enter choice: \n");
		scanf("%d", &choice);
	switch(choice){
		case 1: insertFirst();
	break;
		case 2: insertLast();
	break;
		case 3: insertLocation();
	break;
		case 4: deleteFirst();
	break;
		case 5: deleteLast();
	break;
		case 6: deleteLocation();
	break;
		case 7: search();
	break;
		case 8: display();
	break;
		case 9:printf("\n Exit \n");
	exit(0);
	default: printf("\n Invalid Choice \n");
	}
}
while(choice!= 9);
}
