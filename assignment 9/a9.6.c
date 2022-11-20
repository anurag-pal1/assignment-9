//To check whether a year is leap year or not.
#include<stdio.h>
int main()
{
    int year,y;
    printf("Enter a year:\n");
    scanf("%d",&year);
    y=((year%4==0)&&(year%100 !=0) || (year%400==0));
    switch(y)
    {
    case 1:
        printf("\n%d is leap year.",year);
        break;
    case 2:
        printf("\n%d is not a leap year.",year);
        break;
    default :
        printf("\n%d is not a leap year.",year);

    }
    return 0;
}
