// A program which takes the month number as an input and display number of days.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("Number of days in month is 31");
        break;
    case 2:
        printf("Number of days in month is 28");
        break;
    case 3:
         printf("Number of days in month is 31");
        break;
    case 4:
         printf("Number of days in month is 30");
        break;
    case 5:
         printf("Number of days in month is 31");
        break;
    case 6:
         printf("Number of days in month is 30");
        break;
    case 7:
         printf("Number of days in month is 31");
        break;
    case 8:
         printf("Number of days in month is 31");
        break;
    case 9:
         printf("Number of days in month is 30");
        break;
    case 10:
         printf("Number of days in month is 31");
        break;
    case 11:
         printf("Number of days in month is 30");
        break;
    case 12:
         printf("Number of days in month is 31");
        break;
    default :
         printf("Month number is not valid");
        break;

    }
    return 0;
}
