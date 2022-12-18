// To solve the expression
#include<stdio.h>
int main()
{
    int a,b,c,d;
    float e;
    printf ("Enter 'a' value=\n");
    scanf ("%d",&a);
    printf ("Enter 'b' value=\n");
    scanf ("%d",&b);
    printf ("Enter 'c' value=\n");
    scanf ("%d",&c);
    printf ("Enter 'd' value=\n");
    scanf ("%d",&d);
    e=(a*b*c)/d;
    printf ("Value of the expression (%d*%d*%d)/%d is= %f",a,b,c,d,e);
    return 0;
}