// To make a simple calculator using switch-case
#include<stdio.h>
int main()
{
    int a,b;
    float c;
    char x;
    printf ("Enter first number\n");
    scanf ("%d",&a);
    printf ("Enter second number\n");
    scanf ("%d",&b);
    printf ("Enter operator\n");
    scanf (" %c",&x);
    switch(x)
    {
        case '+': c=a+b;
        printf ("Sum of %d and %d is %f\n",a,b,c);
        case '-': c=a-b;
        printf ("Difference of %d and %d is %f\n",a,b,c);
        case '*': c=a*b;
        printf ("Product of %d and %d is %f\n",a,b,c);
        case '/' : c=a/b;
        if (b==0)
        printf ("Division by zero not possible\n");
        else
        printf ("Quotient when %d is divided by %d is %f\n",a,b,c);
        case '%' : c=a%b;
        if (b==0)
        printf ("Division by zero not possible\n");
        else
        printf ("Remainder when %d is divided by %d is %f\n",a,b,c);
        break;
        default : printf ("Not a valid operator\n");
        break;
    }
    return 0;
}