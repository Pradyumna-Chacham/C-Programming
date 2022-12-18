// To find the factorial of n numbers
#include<stdio.h>
int main()
{
    int n,i,fact;
    printf ("Enter 'n' value=\n");
    scanf ("%d",&n);
    i=1;
    fact=1;
    while (i<=n)
    {
        fact*=i;
        i++;
    }
    printf ("Factorial of %d numbers is:%d\n",n,fact);
    return 0;
}
