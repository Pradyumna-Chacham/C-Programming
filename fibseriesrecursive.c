// To print fibonacci series using recursive function
int fib(int n);
#include<stdio.h>
int main()
{
    int x,n,i;
    printf ("Enter a number:\n");
    scanf ("%d",&n);
    printf ("Fibonacci series upto %dth number:\n",n);
    for (i=1;i<=n;i++)
    {
        x=fib(i);
        printf ("%d ",x);
    }
    return 0;
}
// Function definition
int fib(int a)
{
    if (a==1)
    return 0;
    else if (a==2)
    return 1;
    else
    return (fib(a-1)+fib(a-2));      
}