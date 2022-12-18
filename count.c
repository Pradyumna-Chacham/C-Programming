// To count the digits, sum and product of a number
#include<stdio.h>
int main()
{
    int n,r,temp,count,sum,product;
    printf ("Enter a number:\n");
    scanf ("%d",&n);
    temp=n;
    count=0;
    sum=0;
    product=1;
    while (n!=0)
    {
        r=n%10;
        sum=sum+r;
        product=product*r;
        n=n/10;
        count ++;
    }
    printf ("No.of digits in %d is: %d\n",temp,count);
    printf ("Sum of digits in %d is: %d\n",temp,sum);
    printf ("Product of digits in %d is: %d\n",temp,product);
    return 0;
}