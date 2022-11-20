#include<stdio.h>
int main()
{
    int n,x,y,z;

    while(1)
    {
        printf("Press 1 for addition.\nPress 2 for subtraction.\nPress 3 for multiplication.\nPress 4 for division.\nPress 5 for Exit.\n");
    scanf("%d",&n);
      switch(n)
      {
        case 1:
        printf("Enter two numbers:\n");
        scanf("%d %d",&x,&y);
        z=x+y;
        printf("Addition of two numbers is %d\n\n",z);
        break;
    case 2:
        printf("Enter two numbers:\n");
        scanf("%d %d",&x,&y);
        z=x-y;
        printf("Subtraction of two numbers is %d\n\n",z);
        break;
    case 3:
        printf("Enter two numbers:\n");
        scanf("%d %d",&x,&y);
        z=x*y;
        printf("Multiplication of two numbers is %d\n\n",z);
        break;
    case 4:
        printf("Enter two numbers:\n");
        scanf("%d %d",&x,&y);
        z=x/y;
        printf("Division of two numbers is %d\n\n",z);
        break;
    case 5:
        return 0;
        break;
    default :
        printf("Not Valid\n\n");
        break;
    }

   }
    return 0;

}
