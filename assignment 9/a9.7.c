#include<stdio.h>
int main()
{
    int unit,count=0;
    float bill;
    printf("Enter electricity unit charges: ");
    scanf("%d",&unit);
    switch(unit>0&&unit<=50)
    {
    case 1:
        bill=0.50*unit;
        bill=(bill+(bill/5));
        printf("\nTotal electricity bill is %f",bill);
        break;
    case 0:
        switch(unit>50&&unit<=150)
        {
        case 1:
        bill=0.75*unit;
        bill=(bill+(bill/5));
        printf("\nTotal electricity bill is %f",bill);
        break;
        case 0:
            switch(unit>150&&unit<=250)
            {
            case 1:
            bill=1.20*unit;
            bill=(bill+(bill/5));
            printf("\nTotal electricity bill is %f",bill);
             break;
            case 0:
                switch(unit>250)
                {
                case 1:
                    bill=1.50*unit;
                    bill=(bill+(bill/5));
                    printf("\nTotal electricity bill is %f",bill);
                    break;
                case 0:
                    break;
                }
            }
        }
    }
    return 0;
}
