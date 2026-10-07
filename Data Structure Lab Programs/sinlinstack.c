#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *top = NULL;

void push()
{
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL) {
        printf("\nNo space available\n");
        return;
    }

    printf("\nEnter the element to insert: ");
    scanf("%d", &newnode->data);

    newnode->link = NULL;

    if (top == NULL) {
        top = newnode;
    }
    else {
        newnode->link = top;
        top = newnode;
    }

    printf("\n%d inserted successfully\n", newnode->data);
}

void pop()
{
    struct node *temp;

    if (top == NULL) {
        printf("\nStack underflow\n");
        return;
    }

    temp = top;

    printf("\n%d is popped\n", temp->data);

    top = temp->link;

    free(temp);
}

void peek()
{
    if (top == NULL) {
        printf("\nStack underflow\n");
        return;
    }

    printf("\nTop element is %d\n", top->data);
}

void display()
{
    struct node *temp = top;

    if (top == NULL) {
    printf("\nNo elements in stack\n");
        return;
    }

    printf("\nElements in stack are:\n");

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }

    printf("\n");
}

void search()
{
    struct node *temp = top;
    int key;
    int found = 0;

    if (top == NULL) {
        printf("\nStack underflow\n");
        return;
    }

    printf("\nEnter the element to search: ");
    scanf("%d", &key);

    while (temp != NULL) {

        if (temp->data == key) {
            printf("\n%d element found\n", key);
            found = 1;
            break;
        }

        temp = temp->link;
    }

    if (!found) {
        printf("\n%d element not found\n", key);
    }
}

int main()
{
    int choice;

    printf("\n**** SINGLY LINKED STACK ****\n");

    do {
        printf("\n-----------------------------");
        printf("\n1 -> PUSH()");
        printf("\n2 -> POP()");
        printf("\n3 -> PEEK()");
        printf("\n4 -> DISPLAY()");
        printf("\n5 -> SEARCH()");
        printf("\n6 -> EXIT");
        printf("\n-----------------------------");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                search();
                break;

            case 6:
                printf("\nExit\n");
                break;

            default:
                printf("\nInvalid choice\n");
        }

    } while (choice != 6);

    return 0;
}

