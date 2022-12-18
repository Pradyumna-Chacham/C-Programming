// To find the roots of a quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,D;
    float r,r1,r2;
    printf ("Enter non-zero coefficient of x^2:\n");
    scanf ("%d",&a);
    printf ("Enter coefficient of x:\n");
    scanf ("%d",&b);
    printf ("Enter constant:\n");
    scanf ("%d",&c);
    D=(b*b)-4*a*c;
    if (D>0)
    {
        printf ("Roots are real and distinct\n");
        r1=(-b+sqrt(D))/(2*a);
        r2=(-b-sqrt(D))/(2*a);
        printf ("The roots of equation are %d and %d",r1,r2);
    }
    if (D==0)
    {
        printf ("Roots are real and equal\n");
        r=-b/(2*a);
        printf ("The roots of equation are %d and %d",r,r);
    }
    if (D<0)
    printf ("Roots are imaginary\n");
    return 0;
}
