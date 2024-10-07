/*
Q.1 Alphabet Skipper
Develop a program that prints all alphabets from ‘a’ to ‘z’ by skipping 3 alphabets using a
do-while loop.
*/
#include<stdio.h>
void main(){
char c = 'a';
    do{
        printf("%c ",c);
        c=c+4;
    }while(c<='z');
}



