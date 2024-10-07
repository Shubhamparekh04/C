/*
Q5.Write a Program to print leap years between two given numbers using a while loop.
For example,
Input:
Enter the first number: 2020
Enter the second number: 2040
Output:
2020, 2024, 2028, 2032, 2034, 2040
*/

#include<stdio.h>
void main(){
    int fy,sy;
    printf("Enter 1st Year : ");
    scanf("%d",&fy);
    printf("Enter 2nd Year : ");
    scanf("%d",&sy);

   while(fy<sy){
        if(fy%4==0){
        printf("%d ",fy);
        }
        fy++;
    }

}