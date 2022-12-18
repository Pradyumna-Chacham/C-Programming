// To find fibonnaci series using recursive function
int fib(int);
#include<stdio.h>
int main()
{
    int n,fibonacci;
    printf ("Enter a number N:\n");
    scanf ("%d",&n);
    fibonacci= fib(n);
    printf ("Nth Fibonacci number:%d\n",fibonacci);
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
