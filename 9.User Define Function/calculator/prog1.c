/*
Q1.Develop a menu-driven program to implement arithmetic operations such as +, -, *, /, and %
using UDF, switch case, and looping. Make sure that the program is endless until a certain letter
is pressed.
*/

#include <stdio.h>
void calculator()
{

    int ch, n1, n2;
    while (1)
    {
        printf("\nInput/Output:\n");
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n\n");

        printf("Enter your choice : ");
        scanf("%d", &ch);

        if (ch != 0 && ch >= 1 && ch <= 5)
        {
            printf("Enter the first number: ");
            scanf("%d", &n1);

            printf("Enter the second number: ");
            scanf("%d", &n2);
        }

        switch (ch)
        {
        case 1:
            printf("\nAddition of %d and %d is %d\n ", n1, n2, (n1 + n2));
            break;
        case 2:
            printf("\nSubstraction of %d and %d is %d\n ", n1, n2, (n1 - n2));
            break;
        case 3:
            printf("\nMultiplication of %d and %d is %d\n ", n1, n2, (n1 * n2));
            break;
        case 4:
            printf("\nDivision of %d and %d is %d\n ", n1, n2, (n1 / n2));
            break;
        case 5:
            printf("\nMod of %d and %d is %d\n ", n1, n2, (n1 % n2));
            break;
        case 0:
            printf("\nThanks for using calculator...!\n\n");
            break;

        default:
            printf("\nInvalid Entry...!!!\n");
            break;
        }
    }
}

void calculator();
void main()
{
    calculator();
}