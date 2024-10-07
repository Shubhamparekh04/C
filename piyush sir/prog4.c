// ((b*b) + (2*a*b)) / 2*a     nested function
#include <stdio.h>

int square(int b)
{
    return b * b;
}

int calcAB(int a, int b)
{
    return 2 * a * b;
}

int calcA(int a)
{
    return 2 * a;
}
int calculation(int a, int b)
{

    int first, second, third;

    first = square(b);
    second = calcAB(a, b);
    third = calcA(a);

    return (first + second) / third;
}

int square(int);
int calcAB(int, int);
int calcA(int);

void main()
{

    int a, b, ans;

    printf("Enter a & b : ");
    scanf("%d %d", &a, &b);

    ans = calculation(a, b);

    printf("Answer is : %d", ans);
}
