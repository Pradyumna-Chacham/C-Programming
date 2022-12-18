// To read a given integer and find the sum of digits of that integer
#include<stdio.h>
int main()
{
    int n,r,sum,temp;
    printf ("Enter a number:\n");
    scanf ("%d",&n);
    temp=n;
    sum=0;
    while (n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf ("Sum of digits of %d is: %d\n",temp,sum);
    return 0;
}