/*
Q.4 Develop a program that prints the given Inverted Left half triangle pattern using a nested for loop.
1 0 1 0 1
  1 0 1 0
    1 0 1
      1 0
        1
*/

#include <stdio.h>
void main()
{
  for (int i = 1; i <= 5; i++)
  {
    for (int k=2;k<=i;k++)
    {
      printf("  ");
    }
    for (int j = 5; j >= i; j--)
    {
      printf("%d ", j % 2 == 0 ? 0 : 1);
    }
    printf("\n");
  }
}