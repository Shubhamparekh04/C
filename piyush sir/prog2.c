// Recusrsion Factorial

#include <stdio.h>

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int fact(int);
void main()
{
    int n;

    printf("Enter number : ");
    scanf("%d", &n);

    printf("Factorial is : %d", fact(n));
}