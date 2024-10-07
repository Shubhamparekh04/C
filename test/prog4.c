// Take input number from user & if it's +ve then convert it into -ve & if it's -ve convert it to +ve

#include<stdio.h>
void main(){
    int num;
    printf("Enter number:\n");
    scanf("%d",&num);

    num = -num;

    printf("Number = %d",num);
}