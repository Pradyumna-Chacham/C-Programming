// To find greater of two numbers 
#include<stdio.h>
int main()
{
    int a,b;
    printf ("Enter first number=\n");
    scanf ("%d",&a);
    printf ("Enter second number=\n");
    scanf ("%d",&b);
    if (a>b)
    printf ("%d is greater than %d\n",a,b);
    else
    printf ("%d is greater than %d\n",b,a);
    return 0;
}