#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,r1,r2,D;
    printf("Enter values of a b and c respectively");
    scanf("%d %d %d",&a,&b,&c);
    D=(b*b)-(4*a*c);
    switch(D>0)
    {
    case 1:
        r1=((-b)+pow(D,1/2))/(2*a);
        r2=((-b)-pow(D,1/2))/(2*a);
        printf("Roots of equation are %d %d",r1,r2);
        break;
    case 0:
        switch(D==0)
        {
        case 1:
        r1=((-b)+pow(D,1/2))/(2*a);
        r2=((-b)-pow(D,1/2))/(2*a);
        printf("Roots of equation are %d %d",r1,r2);
        break;
    case 0:
        switch(D<0)
        {
        case 1:

            printf("Roots are imaginary.");
            break;
        case 0:
            return 0;
        }

        }
    }
    return 0;
}
