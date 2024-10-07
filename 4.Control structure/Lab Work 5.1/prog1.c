//Q1.Write a Program to find the minimum number from the given 2 numbers using if else.

#include<stdio.h>
void main(){
    int a,b;
    printf("Enter 2 Numbers: ");
    scanf("%d %d",&a,&b);

    if(b<a){
        printf("The minimum value is: %d",b);
    } else{
        printf("The minimum value is: %d",a);
    }
}