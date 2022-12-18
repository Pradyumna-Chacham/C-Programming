// modulo function
#include<stdio.h>
int main()
{
    int a,b,c;
    printf ("Enter first number=\n");
    scanf ("%d",&a);
    printf ("Enter second number=\n");
    scanf ("%d",&b);
    c=a%b;
    printf ("Remainder when %d is divided by %d is = %d",a,b,c);
    return 0;
}