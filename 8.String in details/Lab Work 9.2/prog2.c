/*
Q2.Write a Program to create a login mechanism by entering the right email & password. You can compare it with your desired email & password.
*/

#include <stdio.h>
#include <string.h>
void main()
{

    char ueml[20], upwd[20], oeml[20] = "admin@gmail.com", opwd[20] = "123456";

    printf("Enter your email:");
    gets(ueml);

    printf("Enter your password:");
    gets(upwd);

    printf("Login %s", (strcmp(oeml, ueml) == strcmp(opwd, upwd)) ? "Successful..." : "Failed. Invalid Credentials.");
}
