/*
Write a Program to print the below Floyd’s Triangle pattern using nested for loop.
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include<stdio.h>
void main(){
    int n=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }
}