#include<stdio.h>
int main()
{
    while(1)
    {
        int n,a,b,c;
        printf("Press 1 to check whether a given set of three numbers are lengths of an isosceles triangle or not.");
        printf("\nPress 2 to check whether a given set of three numbers are lengths of sides of a right angled triangle or not.");
        printf("\nPress 3 to check whether a given set of three numbers are equilateral triangle or not.");
        printf("\nPress 4 for Exit.\n");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            printf("Enter sides of triangle:\n");
            scanf("%d %d %d",&a,&b,&c);
            if(a==b||b==c||c==a)
                printf("Triangle is isosceles triangle.\n\n");
            else
                printf("Triangle is not isosceles triangle.\n\n");
                break;
        case 2:
            printf("Enter sides of triangle:\n");
            scanf("%d %d %d",&a,&b,&c);
            if(((a*a)==((b*b)+(c*c)))||((b*b)==((a*a)+(c*c)))||((c*c)==((b*b)+(a*a))))
                printf("Triangle is right angled  triangle.\n\n");
            else
                printf("Triangle is not right angled triangle.\n\n");
                break;
        case 3:
            printf("Enter sides of triangle:\n");
            scanf("%d %d %d",&a,&b,&c);
            if((a==b)&&(b==c))
                printf("Triangle is equilateral triangle.\n\n");
            else
                printf("Triangle is not equilateral triangle.\n\n");
                break;
        case 4:
            return 0;
            break;
        default :
            printf("Choice is not valid.\n\n");
            break;
        }
    }
    return 0;
}
