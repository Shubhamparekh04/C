// Enter purchase price & saling price print if it's profit or loss and how much if no profit or no loss print the same as well

#include<stdio.h>
void main(){
    float p,s;
    printf("Enter Puchase price & Saling Price...\n");
    scanf("%f %f",&p,&s);

    if(s>p){
        printf("it's profit of %.2f ",s-p);
    } else if(p>s){
        printf("it's loss of %.2f ",p-s);
    } else {
        printf("No Profit No Loss");
    }
}