/*
Q1.Write a Program to find the minimum number from the given 3 numbers using nested
if else. Also, draw a Flowchart in your book.
*/

#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter 3 Numbers : ");
    scanf("%d %d %d",&a,&b,&c);

    if(a<b){
        if (a<c)
        {
            printf("The minimum value is: %d",a);
        }else{
            printf("The minimum value is: %d",c);
        }
        
    }else{
        if (b<c)
        {
            printf("The minimum value is: %d",b);
        }else{
            printf("The minimum value is: %d",c);
        }
        
    }
}