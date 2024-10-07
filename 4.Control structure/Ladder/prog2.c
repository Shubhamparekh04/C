/*
//Project: Student Grading System with Flowchart and Nested Control Structures
*/

#include<stdio.h>
void main(){
int choice,flag=0;
float s1,s2,s3,total,avg;

do{
    printf("\nStudent Grading System\n1. Add Student Scores\n2. Display Grades\n3. Exit\nEnter your choice: ");
    scanf("%d",&choice);

    if(choice==1){
        flag=1;
        printf("\nEnter Subject1 marks : ");
        scanf("%f",&s1);
        printf("Enter Subject2 marks : ");
        scanf("%f",&s2);
        printf("Enter Subject3 marks : ");
        scanf("%f",&s3);
    }else if(choice==2){
        total=s1+s2+s3;
        avg=total/3;

        if(flag==0){
            printf("\nError : 'Enter Subject marks first !'\n");
            continue;
        }else{
        if(avg>=90){
            printf("\nTotal: %.2f , Average : %.2f , Grade is : A\n",total,avg);
        }else if(avg>=80){
            printf("\nTotal: %.2f , Average : %.2f , Grade is : B\n",total,avg);
        }else if(avg>=70){
            printf("\nTotal: %.2f , Average : %.2f , Grade is : C\n",total,avg);
        }else if(avg>=60){
            printf("\nTotal: %.2f , Average : %.2f , Grade is : D\n",total,avg);
        }else{
            printf("\nTotal: %.2f , Average : %.2f , Grade is : F\n",total,avg);
        }
        }

    }else if(choice==3){
        printf("Exiting portal...");
        break;
    }else{
        printf("\nError: 'Invalid Choice !'\n\n");
    }

}while(choice!=3);

}