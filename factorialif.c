// To read a positive integer and find its factorial
#include<stdio.h>
int main()
{
    int n,i,fact;
    printf ("Enter a number:\n");
    scanf ("%d",&n);
    if (n<0)
    printf ("Please enter positive number.\n");
    if (n>=0)
    {   fact=1;
        for (i=1;i<=n;i++)
        {
            fact=fact*i;
        }   
        printf ("Factorial of %d is: %d\n",n,fact);
    }
    return 0;
}