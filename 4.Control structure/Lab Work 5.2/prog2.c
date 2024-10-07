/*
Q2.Write a Program to find the maximum number from the given 4 numbers using nested
if else. Also, draw a Flowchart in your book.
*/

#include<stdio.h>
void main(){
    int a,b,c,d;
    printf("Enter 4 Numbers : ");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a>b){
        if(a>c){
            if(a>d){
                printf("The maximum value is: %d",a);
            }else{
                printf("The maximum value is: %d",d);
            }
        }else{
            if(c>d){
                printf("The maximum value is: %d",c);
            }else{
                printf("The maximum value is: %d",d);
            }
        }

    }else{
        if(b>c){
            if(b>d){
                printf("The maximum value is: %d",b);
            }else{
                printf("The maximum value is: %d",d);
            }
        }else{
            if(c>d){
                printf("The maximum value is: %d",c);
            }else{
                printf("The maximum value is: %d",d);
            }
        }
    }
}