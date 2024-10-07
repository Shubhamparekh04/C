/*
Q.2 Structures and Percentage Calculation
Develop a Program to generate mark sheets for a student. Enter the marks of 5 students in
Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes:
roll_no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each
student.
*/

#include <stdio.h>

struct marksheet
{
    int roll_no;
    char name[20];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};
void main()
{
    struct marksheet students[5];

    printf("Enter student details : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n-------\n", i + 1);
        printf("Enter roll no : ");
        scanf("%d", &students[i].roll_no);

        printf("Enter name : ");
        scanf(" %[^\n]%*c", students[i].name);

        printf("Enter Chemistry marks : ");
        scanf("%d", &students[i].chem_marks);
        printf("Enter Maths marks : ");
        scanf("%d", &students[i].maths_marks);
        printf("Enter Physics marks : ");
        scanf("%d", &students[i].phy_marks);
    }

    printf("\nPercentage of each students : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n-------\n", i + 1);
        printf("%s (%d)", students[i].name, students[i].roll_no);
        printf("\nChemistry=>%d", students[i].chem_marks);
        printf("\nMaths=>%d", students[i].maths_marks);
        printf("\nPhysics=>%d", students[i].phy_marks);
        printf("\nTotal => %d/300",(students[i].chem_marks + students[i].maths_marks + students[i].phy_marks));
        printf("\nPercentage : %.2f\n", (students[i].chem_marks + students[i].maths_marks + students[i].phy_marks) / 3.0);
    }
}
