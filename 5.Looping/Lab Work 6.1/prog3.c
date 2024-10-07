/*
Q3.Write a Program to print 1 to N using a while loop.
For example,
Input:
Enter any number: 7
Output:
1 2 3 4 5 6 7
*/

#include<stdio.h>
void main(){
    int i=1,n;
    printf("Enter number :");
    scanf("%d",&n);

    while(i<=n){
        printf("%d ",i);
        i++;
    }
}