// Recursion  123 to 321

#include <stdio.h>

int rev(int x)
{

    static int reverse = 0;
    if (x == 0)
    {
        return reverse;
    }
    else
    {
        reverse = reverse * 10 + x % 10;
        return rev(x / 10);
    }
}

int rev(int);
void main()
{
    int n;
    printf("Enter number :");
    scanf("%d", &n);

    printf("Reverse is :%d ", rev(n));
}


