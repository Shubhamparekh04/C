// prog3
/*
 */
#include <stdio.h>
void main()
{
    int n1, n2;
    float fn1, fn2;
    printf("Enter 2 Numbers ");
    scanf("%d %d", &n1, &n2);

    printf("Enter 2 float Numbers ");
    scanf("%f %f", &fn1, &fn2);

    printf("%d %d\n%.1f %.1f", n1 + n2, n1 - n2, fn1 + fn2, fn1 - fn2);
}