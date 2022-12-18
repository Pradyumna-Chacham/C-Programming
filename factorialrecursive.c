// To find the factorial of a number using recursive function
#include<stdio.h>
int factorial(int);
int main()
{
    int n,fact;
    printf ("Enter a number:\n");
    scanf ("%d",&n);
    fact=factorial(n);
    printf ("Factorial of %d is %d\n",n,fact);
    return 0;
}
// Function definition
int factorial(int a)
{   
    if (a>1)
    return a*factorial(a-1);
    if (a<=1)
    return 1;
}