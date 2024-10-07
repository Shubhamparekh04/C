#include <stdio.h>
#include <stdlib.h>
#define capacity 5
int stack[capacity], top = -1;

int isFull()
{
    if (top == capacity - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int push(int a)
{
    if (isFull())
    {
        printf("\nStack is full...!\n");
    }
    else
    {
        top++;
        stack[top] = a;
        printf("%d is pushed.", a);
    }

    return top;
};

int pop()
{
    int ele;
    if (isEmpty())
    {
        return 0;
    }
    else
    {
        ele = stack[top--];
        printf("Element : %d is popped !\n",ele);
    }

    return ele;
};

void peek()
{
    if (isEmpty())
    {
        printf("Stack is empty...!\n");
    }
    else
    {
        printf("Element : %d\n",stack[top]);
    }
}

void traverse()
{
    if (isEmpty())
    {
        printf("\nNo elements inside stack...!\n");
    }
    else
    {
        printf("Stack elements are :");
        for (int i = top; i >= 0; i--)
        {
            printf("\n%d", stack[i]);
        }
    }
}

void main()
{
    int ch;
     while (1)
    {
        printf("\n\n1.push\n");
        printf("2.pop\n");
        printf("3.peek\n");
        printf("4.traverse\n");
        printf("5.Quit\n");
        printf("Enter choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            if (isFull())
            {
                printf("Stack is Overflow..!\n");
            }
            else
            {
                int ele;
                printf("Enter element :");
                scanf("%d", &ele);
                push(ele);
            }
            break;
        case 2:
            if (isEmpty())
            {
                printf("No element to pop...!\n");
            }
            else
            {
                pop();
            }
            break;
        case 3:
            if (isEmpty())
            {
                printf("No elements...!\n");
            }
            else
            {
                peek();
            }
            break;
        case 4:
            if (isEmpty())
            {
                printf("No element...!\n");
            }
            else
            {
                traverse();
            }
            break;
        case 5:
            exit(0);
        break;

        default:
            printf("Invalid input...!\n");
        }
    }
}
