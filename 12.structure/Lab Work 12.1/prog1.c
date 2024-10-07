/*
Q1.Write a Program to create a Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
*/

#include <stdio.h>

struct stud
{
    int stu_id;
    char stu_name[20];
    int stu_age;
    char stu_course[20];
    char stu_city[20];
    int stu_standard;
    char stu_school[20];
} s1, s2, s3;

void main()
{
    // Student 1
    printf("Student1\n----------------\n");
    printf("Enter student id : ");
    scanf("%d", &s1.stu_id);
    printf("Enter student name : ");
    scanf(" %[^\n]%*c", s1.stu_name); 
    printf("Enter student age : ");
    scanf("%d", &s1.stu_age);
    printf("Enter Course : ");
    scanf(" %[^\n]%*c", s1.stu_course);
    printf("Enter City : ");
    scanf(" %[^\n]%*c", s1.stu_city);
    printf("Enter student standard : ");
    scanf("%d", &s1.stu_standard);
    printf("Enter School : ");
    scanf(" %[^\n]%*c", s1.stu_school);

    // Student 2
    printf("\nStudent2\n----------------\n");
    printf("Enter student id : ");
    scanf("%d", &s2.stu_id);
    printf("Enter student name : ");
    scanf(" %[^\n]%*c", s2.stu_name);
    printf("Enter student age : ");
    scanf("%d", &s2.stu_age);
    printf("Enter Course : ");
    scanf(" %[^\n]%*c", s2.stu_course);
    printf("Enter City : ");
    scanf(" %[^\n]%*c", s2.stu_city);
    printf("Enter student standard : ");
    scanf("%d", &s2.stu_standard);
    printf("Enter School : ");
    scanf(" %[^\n]%*c", s2.stu_school);

    // Student 3
    printf("\nStudent3\n----------------\n");
    printf("Enter student id : ");
    scanf("%d", &s3.stu_id);
    printf("Enter student name : ");
    scanf(" %[^\n]%*c", s3.stu_name);
    printf("Enter student age : ");
    scanf("%d", &s3.stu_age);
    printf("Enter Course : ");
    scanf(" %[^\n]%*c", s3.stu_course);
    printf("Enter City : ");
    scanf(" %[^\n]%*c", s3.stu_city);
    printf("Enter student standard : ");
    scanf("%d", &s3.stu_standard);
    printf("Enter School : ");
    scanf(" %[^\n]%*c", s3.stu_school);
}
