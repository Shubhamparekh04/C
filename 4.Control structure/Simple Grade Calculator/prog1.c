/*
1.take a score out of 100 as input from the user.
2.calculate the corresponding grade using a ternary operator,
3.provide additional comments based on the grade using a switch-case statement,
4. if else check eligblity.
*/

#include <stdio.h>
void main()
{
    float s1, s2, s3, total, avg;
    char grade;
    printf("\nEnter 3 subject marks: ");
    scanf("%f %f %f", &s1, &s2, &s3);

    total = s1 + s2 + s3;
    avg = total / 3;

    grade = avg >= 90 ? 'A' : avg >= 80 ? 'B' : avg >= 70   ? 'C': avg >= 60   ? 'D' : 'F';

    printf("Average :%.f\n",avg);

    switch (grade)
    {
    case 'A':
        printf("Your grade is %c. Excellent work!", grade);
        break;
    case 'B':
        printf("Your grade is %c. Great Work!", grade);
        break;
    case 'C':
        printf("Your grade is %c. Nice Work!", grade);
        break;
    case 'D':
        printf("Your grade is %c. Good!", grade);
        break;
    default:
        printf("Your grade is %c. You Are fail!", grade);
        break;
    }

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        printf("\nCongratulations! You are eligible for the next level, your grade is : %c\n\n", grade);
    }
    else
    {
        printf("\nPlease try again next time your grade is %c.\n", grade);
    }
}