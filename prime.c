// To check if a given number is prime or not
#include<stdio.h>
int main()
{
    int n,i,count;
    printf ("Enter a number:\n");
    scanf ("%d",&n);
    count=0;
    for (i=2;i<=n/2;i++)
    {
        if (n%i==0)
        count++;
    }
    if (count!=0)
    printf ("%d is not a prime\n",n);
    else
    printf ("%d is a prime\n",n);
    return 0;
}