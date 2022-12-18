// To find the absolute value of a number
#include<stdio.h>
int main()
{
    int a;
    printf ("Enter a number=\n");
    scanf ("%d",&a);
    if (a>0)
    printf ("Absolute value of %d is %d\n",a,a);
    else if (a<0)
    printf ("Absolute value of %d is %d\n",a,-a);
    else 
    printf ("The given number is equal to zero\n");
    return 0;
}