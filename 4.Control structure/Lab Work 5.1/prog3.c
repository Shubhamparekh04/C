//Q3.Write a Program to find an average mark from a total of three subject marks of a student. Each subject’s marks must be given out of 100.

#include<stdio.h>
void main(){
    float maths,english,science;
    printf("Enter Maths Marks : ");
    scanf("%f",&maths);
    printf("Enter english Marks : ");
    scanf("%f",&english);
    printf("Enter science Marks : ");
    scanf("%f",&science);

    printf("\nAverage mark: %.2f",(maths+english+science)/3);
}