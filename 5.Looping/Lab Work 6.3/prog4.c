/*
1
1 2
1 3 5
1 6 11 16
1 17 33 49 65
*/

/*
#include <stdio.h>
void main()
{
    for (int i = 1; i <= 5; i++)
    {
        int sum = 0, a = 1;
        for (int j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                printf("1 ");
            }
            else if (i == 2 && j != 1)
            {
                sum = a + 1;
                printf("%d ", sum);
            }
            else if (i == 3 && j != 1)
            {
                sum = a + 2;
                printf("%d ", sum);
                a = sum;
            }
            else if (i == 4 && j != 1)
            {
                sum = a + 5;
                printf("%d ", sum);
                a = sum;
            }
            else
            {
                sum = a + 16;
                printf("%d ", sum);
                a = sum;
            }
        }
        printf("\n");
    }
}
*/


#include<stdio.h>
void main(){
    int a,b,c=0;
    for(int i=1;i<=5;i++){
        a=1;
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            b=a;
            a=c+a;
        }
        c=b;
        printf("\n");
    }
}