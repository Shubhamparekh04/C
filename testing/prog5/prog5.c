#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b)
{
    printf("%d\n", abs(*a + *b));
    // printf("%d\n", *a - *b < 0 ? (*a - *b) * -1 : *a - *b);
    printf("%d\n", abs(*a - *b));
}

void main()
{
    int a, b;

    printf("Enter value of a & b : ");
    scanf("%d %d", &a, &b);

    update(&a, &b);
}