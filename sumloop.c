// To find the sum of first n natural numbers
#include<stdio.h>
int main()
{
    int n,i,sum;
    printf ("Enter 'n' value=\n");
    scanf ("%d",&n);
    i=1;
    sum=0;
    while (i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf ("Sum of first n numbers=%d\n",sum);
    return 0;
}