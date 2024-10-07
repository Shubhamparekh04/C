/*
//Q3. Write a Program to evaluate the formula: (x + y)3
*/

#include<stdio.h>
void main(){
    int x,y;

    printf("Enter x & y:\n");
    scanf("%d %d",&x,&y);

    printf("\nAns is : %d",(x*x*x)+(y*y*y)+3*x*y*(x+y));
}