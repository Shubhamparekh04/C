/*
Q.7 Develop a program that prints the given Custom alphabetic pattern using a nested for loop.

* * * * *
*       *
* * * * *
*
*

*/

#include<stdio.h>
void main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if ((i==1 || i==3 || j==1))
            {
                printf("* ");
            } else if(i==2 && j==2){
                printf("      *");
            }
            
        }
        printf("\n");
    }
}