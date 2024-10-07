#include <stdio.h>
struct node
{
    int data;
    struct node *link;
};

struct node *top = NULL;

void push()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    printf("Enter Data : ");
    scanf("%d", &temp->data);

    temp->link = top;
    top = temp;

    
};

void main()
{
}