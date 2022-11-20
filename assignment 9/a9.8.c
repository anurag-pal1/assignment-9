#include<stdio.h>
int main()
{
    int x,count=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    switch(x>0)
    {
    case 1:
        printf("Negative of number is %d",x-2*x);
        break;
    case 0:
        switch(x<0)
        {
        case 1:
           printf("Positive of number is %d",x-(2*x));
        break;
        case 0:
            printf("Don't Enter zero.");
            break;
        }
    }
    return 0;
}
