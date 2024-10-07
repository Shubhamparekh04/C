/*
Q4.Write a Program to print odd numbers from N to 1 using a while loop.
For example,
Input:
Enter any number: 15
Output:
15 13 11 9 7 5 3 1
*/

#include<stdio.h>
void main(){
    int n;
    printf("Enter number :");
    scanf("%d",&n);

    while(n>=1){
        if(n%2!=0){
        printf("%d ",n);
        }
        n--;
    }
}
