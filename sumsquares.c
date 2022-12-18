// Find the sum of squares of the first n numbers
#include<stdio.h>
int main()
{
    int sum,n,i;
    printf ("Enter 'n' value:\n");
    scanf ("%d",&n);
    i=1;
    sum=0;
    while (i<=n)
    {
        sum+=i*i;
        i++;
    }
    printf ("Sum of squares of first %d natural numbers is: %d\n",n,sum);
    return 0;
}