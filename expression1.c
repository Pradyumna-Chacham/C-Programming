// To find the value of expression
#include<stdio.h>
int main()
{
    int a,b,c,d,m,n;
    float x,y;
    printf ("Enter the value of a=\n");
    scanf ("%d",&a);
    printf ("Enter the value of b=\n");
    scanf ("%d",&b);
     printf ("Enter the value of c=\n");
    scanf ("%d",&c);
     printf ("Enter the value of d=\n");
    scanf ("%d",&d);
     printf ("Enter the value of m=\n");
    scanf ("%d",&m);
     printf ("Enter the value of n=\n");
    scanf ("%d",&n);
    x=((m*d)-(b*n))/((a*d)-(c*b));
    y= ((n*a)-(m*c))/((a*d)-(c*b));
    if (((a*d)-(c*b))!=0)
    {
        printf ("Value of x1 is:%f\n",x);
        printf ("Value of x2 is:%f\n",y);
    }
    if (((a*d)-(c*b))==0)
    printf ("Denominator is equal to zero, division not possible\n");
    return 0;
}