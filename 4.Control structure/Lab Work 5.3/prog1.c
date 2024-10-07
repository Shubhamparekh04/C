//Q1.Write a Program to find the minimum number from the given 3 numbers using the ternary operator.

#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter 3 values: ");
    scanf("%d %d %d",&a,&b,&c);

    printf("The minimum value is: %d",a<b?a<c?a:c:b<c?b:c);
}