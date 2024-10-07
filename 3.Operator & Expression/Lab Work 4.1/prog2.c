/*
//Q2. Write a Program to evaluate the formula: (x − y)2
*/

#include<stdio.h>
void main(){
    int x,y;

    printf("Enter x & y:\n");
    scanf("%d %d",&x,&y);

    printf("\nAns is : %d",x*x-2*x*y-y*y);
}