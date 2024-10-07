/*
Q4.Write a Program to print and find the sum of all boundary elements from a given 5x5 2D array.

Enter array's elements:
a[0][0] = 2
a[0][1] = 4
a[0][2] = 1
a[0][3] = 6
a[0][4] = 3
a[1][0] = 9
a[1][1] = 5
a[1][2] = 4
a[1][3] = 6
a[1][4] = 7
a[2][0] = 8
a[2][1] = 2
a[2][2] = 6
a[2][3] = 3
a[2][4] = 5
a[3][0] = 3
a[3][1] = 4
a[3][2] = 8
a[3][3] = 5
a[3][4] = 1
a[4][0] = 2
a[4][1] = 3
a[4][2] = 9
a[4][3] = 5
a[4][4] = 7

Output:
2 4 1 6 3  : 16
9       7  : 16
8       5  : 13
3       1  : 4
2 3 9 5 7  : 26

The sum of boundary elements of an Array: 75
*/
#include <stdio.h>
void main()
{
    int a[5][5], sum = 0, rsum = 0;
    printf("Enter array's elements:\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nOutput:\n");  

    for (int i = 0; i < 5; i++)
    {
        rsum = 0;
        for (int j = 0; j <= 5; j++)
        {
            if (i == 0 || i == 4 || j == 0 || j == 4)
            {
                if (j == 5)
                {
                    printf(" : %d", rsum);
                }
                else
                {
                    printf("%d ", a[i][j]);
                    rsum += a[i][j];
                }
            }
            else if (j == 5)
            {
                printf(" : %d", rsum);
            }
            else
            {
                printf("  ");
            }
        }
        sum += rsum;
        printf("\n");
    }
    printf("\nThe sum of boundary elements of an Array: %d\n\n", sum);
}