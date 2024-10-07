// Display table

#include<stdio.h>
void main(){
    int num;
    printf("Which table do you want to see ?\n");
    scanf("%d",&num);

    for(int i = 1;i<=10;i++){
        printf("%d x %d = %d\n",num,i,num*i);
    }
}