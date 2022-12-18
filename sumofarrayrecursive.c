// TO find the sum of array elements using recursive function
int sumarray( int a[20]);
#include<stdio.h>
int main()
{
    int a[20],sum,i,n;
    printf ("Enter how many elements you want to read:\n");
    scanf ("%d",&n);
    printf ("Enter %d numbers:\n",n);
    // reading input
    for (i=0;i<=n;i++)
    {
        scanf ("%d",&a[i]);
    }
    sum=sumarray(a[]);
    printf ("Sum of array elements is: %d",sum);
    return 0;
} 
//Function Definition
int sumarray(int a[])
{   
    int n;
    if (n==1)
    return a[0];
    if (n>1)
    return (a[n]+sumarray(a[n-1]));
}