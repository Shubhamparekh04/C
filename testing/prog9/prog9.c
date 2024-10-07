/*
5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5
*/
#include <stdio.h>
void main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    int num = n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j > i; j--)
        {
            printf("%d ", j);
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d ", i);
        }

        // for (int j = n; j > 5; j--)
        // {
        //     printf("%d ", j);
        // }
        printf("\n");
    }
}