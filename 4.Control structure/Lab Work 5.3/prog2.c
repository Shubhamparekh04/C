// Q2.Write a Program to create a menu-driven program for Telecom call service conversation using nested switch case.

#include <stdio.h>
void main()
{
    int ch, sl;
    printf("Press 1 for English\nPress 2 for Hindi\nPress 3 for Gujarati\nEnter your choice: ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:

        printf("\nPress 1 for Internet Recharge\nPress 2 for Top-up Recharge\nPress 3 for Special Recharge\nEnter your choice: ");
        scanf("%d", &sl);

        switch (sl)
        {
        case 1:
            printf("\nYou have successfully done a Internet Recharge.");
            break;

        case 2:
            printf("\nYou have successfully done a Top-up Recharge.");
            break;

        case 3:
            printf("\nYou have successfully done a Special Recharge.");
            break;

        default:
            printf("\nInvalid Choice");
            break;
        }
        break;

    case 2:
        printf("\nInternet Recharge ke liye 1 dabaiye\nTop-up Recharge ke liye 2 dabaiye\nSpecial Recharge ke liye 3 dabaiye\nEnter your choice: ");
        scanf("%d", &sl);
        switch (sl)
        {
        case 1:
            printf("\nAapne safaltapurvak Internet Recharge kar liya he.");
            break;

        case 2:
            printf("\nAapne safaltapurvak Top-up Recharge kar liya he.");
            break;

        case 3:
            printf("\nAapne safaltapurvak Special Recharge kar liya he.");
            break;

        default:
            printf("\nInvalid Choice");
            break;
        }
        break;

    case 3:
        printf("\nInternet Recharge mate 1 dabavo\nTop-up Recharge mate 2 dabavo\nSpecial Recharge mate 3 dabavo\nEnter your choice: ");
        scanf("%d", &sl);
        switch (sl)
        {
        case 1:
            printf("\nTame safaltapurvak Internet  Recharge karyu chhe.");
            break;

        case 2:
            printf("\nTame safaltapurvak Top-up Recharge karyu chhe.");
            break;

        case 3:
            printf("\nTame safaltapurvak Special Recharge karyu chhe.");
            break;

        default:
            printf("\nInvalid Choice");
            break;
        }
        break;

    default:
        printf("Invalid Choice");
        break;
    }
}