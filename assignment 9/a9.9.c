#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    switch(x%2==0)
    {
    case 1:
        printf("%d",x+1);
        break;
    case 0:
        printf("Enter even number.");
        break;
    }
    return 0;
}
