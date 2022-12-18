// To find the sum of digits of an integer
#include<stdio.h>
int sumofdigits(int);
int main()
{
    int n,l;
    printf ("Enter a number:\n");
    scanf ("%d",&n);
    l=sumofdigits(n);
    printf ("Sum of digits of %d is %d\n",n,l);
    return 0;
}
// Function definition
int sumofdigits(int a)
{
    if (a==0)
    return 0;
    else
    return (a%10+sumofdigits(a/10));
}