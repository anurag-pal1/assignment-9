#include<stdio.h>
int main()
{
    int n;
    printf("Enter the day number:\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("It's Monday today.\nWishing you a great day.\n");
        break;
    case 2:
        printf("It's Tuesday today.\nMay you be loved more and more everyday\n");
        break;
    case 3:
        printf("It's Wednesday today.\nNever give up,hurdles do come your way learn to overcome them and reach your goal.\n");
        break;
    case 4:
        printf("It's Thursday today.\nDo not live only once so make great things and enjoy life.\n");
        break;
    case 5:
        printf("It's Friday today.\nDo not let yesterday stress ruin your today.\n");
        break;
    case 6:
        printf("It's Saturday today.\nEnjoy your weekend.\n");
    case 7:
        printf("It's Sunday today.\nEnjoy your weekend.\n");
    default :
        printf("Day number is not valid.");
    }
    return 0;
}
