// to find the greatest of three numbers using ternary operator
#include<stdio.h>
int main()
{
    int a,b,c;
    printf ("Enter first number=\n");
    scanf ("%d",&a);
    printf ("enter second number=\n");
    scanf ("%d",&b);
    printf ("Enter third number=\n");
    scanf ("%d",&c);
    if (a>b && a>c)
    { printf ("%d is greatest\n",a); }
    if (b>a && b>c);
    { printf ("%d is greatest\n",b); }
    if (c>a && c>b)
    { printf ("%d is greatest\n",c); }
    return 0;
}