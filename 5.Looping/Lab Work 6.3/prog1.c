/*
Write a Program to print the sum of all numbers from 1 to N using a for loop.
For example,
Input:
Enter any number: 8
Output:
The sum of all numbers: 36
*/

#include<stdio.h>
void main(){
    int n,sum=0;
    printf("Enter Number : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        sum+=i;
    }

    printf("The sum of all numbers: %d",sum);
}