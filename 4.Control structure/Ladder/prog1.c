/*
// Calculate average marks & assign Grade accordingly.

#include<stdio.h>
void main(){
int rno;
float sub1,sub2,sub3,total,avg;
char name[20];

printf("Enter Roll no:");
scanf("%d",&rno);

printf("Enter Name:");
scanf("%s",&name);

printf("Enter marks of subject1,subject2,subject3: ");
scanf("%f %f %f",&sub1,&sub2,&sub3);

total = sub1+sub2+sub3;
avg = total/3;


if(sub1>=35 && sub2>=35 && sub3>=35){
    printf("\nRoll no: %d\n",rno);
    printf("Name: %s\n",name);
    printf("Sub1: %.2f\nSub2: %.2f\nSub3: %.2f\ntotal: %.2f\nAvg : %.2f\n",sub1,sub2,sub3,total,avg);
    printf("Pass, Grade: ");
    if(avg>=90){
        printf("A");
    }else if(avg>=80){
        printf("B");
    }else if(avg>=70){
        printf("C");
    }else if(avg>=60){
        printf("D");
    }else{
        printf("F");
    }

}else{
    printf("FAIL😭");
}

}

*/



/*

//Calculate Bill & apply discount accordingly

#include<stdio.h>
void main(){
    float price,ntotal;
    int qty;
    char pname[20];

    printf("\nEnter Product Name: ");
    scanf("%s",&pname);

    printf("Enter Quantity: ");
    scanf("%d",&qty);

    printf("Enter price per product: ");
    scanf("%f",&price);

    ntotal=qty*price;

    if(ntotal>=1500){
        printf("Gross Amount : %.2f\nApplied discount : 15%%(%.2f)\nNet-total: %.2f",ntotal,(ntotal*0.15),ntotal-(ntotal*0.15));
    }else if(ntotal>=1000){
        printf("Gross Amount : %.2f\nApplied discount : 10%%(%.2f)\nNet-total: %.2f",ntotal,(ntotal*0.10),ntotal-(ntotal*0.10));
    }else if(ntotal>=800){
        printf("Gross Amount : %.2f\nApplied discount : 8%%(%.2f)\nNet-total: %.2f",ntotal,(ntotal*0.8),ntotal-(ntotal*0.8));
    }else{
        printf("Gross Amount : %.2f\nApplied discount : 0%%(%.2f)\nNet-total: %.2f",ntotal,(ntotal*0.0),ntotal-(ntotal*0.0));
    }
    printf("\n\n");
}
*/