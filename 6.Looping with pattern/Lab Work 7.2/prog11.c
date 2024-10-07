/*

Write a Program to print the below Full Pyramid pattern using nested for loop.

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/


#include<stdio.h>
void main(){
  for(int i=1;i<=25;i++){
    for(int j=1;j<=40-i;j++){
      printf("  ");
    }

    for(int k=1;k<=(2*i)-1;k++){
      printf("* ");
    }
    printf("\n");
  }
}