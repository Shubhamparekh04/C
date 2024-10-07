/*
Write a Program to print the factorial of number N using a for loop.
For example,
Input:
Enter any number: 5
Output:
The factorial is: 120
*/

#include<stdio.h>
void main(){
    int n,sum=1;
    printf("Enter any number : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        sum*=i;
    }
    printf("The factorial is: %d",sum);
}