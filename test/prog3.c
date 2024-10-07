//Take input from user if number>100 print num-10 else print as it is.
#include<stdio.h>
void main(){

    int num;

    printf("Enter Number\n");
    scanf("%d",&num);

    if(num>100){
        num = num -10;
    } 
        printf("Number is %d",num);
}