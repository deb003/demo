#include<stdio.h>
main()
{
int n,num;
printf("Enter the amount:");
scanf("%d",&num);
printf("Enter the value of notes from which you want to start:");
scanf("%d",&n);
switch(n)
    {
    case 100:
        n=num/100;
        printf("The no. Of 100 Rs notes :%d\n",n);
        num=num%100;
    case 50:
        n=num/50;
        printf("The no. Of 50 Rs notes :%d\n",n);
        num=num%50;
    case 20:
        n=num/20;
        printf("The no. Of 20 Rs notes :%d\n",n);
        num=num%20;
    case 10:
        n=num/10;
        printf("The no. Of 10 Rs notes :%d\n",n);
        num=num%10;
    case 5:
        n=num/5;
        printf("The no. Of 5 Rs notes :%d\n",n);
        num=num%5;
    case 2:
        n=num/2;
        printf("The no. Of 2 Rs notes :%d\n",n);
        num=num%2;
    case 1:
        n=num/1;
        printf("The no. Of 1 Rs notes :%d\n",n);
        break;
    default:
        printf("Enter valid values please\n");
    }
}
