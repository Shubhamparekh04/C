/*
Write a Program to print even numbers from 1 to N using a do-while loop.
For example,
Input:
Enter any number: 9
Output:
2 4 6 8
*/

#include<stdio.h>
void main(){
    int n,i=2;
    printf("Enter number : ");
    scanf("%d",&n);

    do{
        printf("%d ",i);
        i+=2;
    }while(i<=n);

}