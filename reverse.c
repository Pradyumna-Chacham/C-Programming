// To reverse a given number
#include<stdio.h>
int main()
{
    int n,r,temp,reverse;
    printf ("Enter a number:\n");
    scanf ("%d",&n);
    temp=n;
    reverse=0;
    while (n!=0)
    {
        r=n%10;
        reverse=reverse*10+r;
        n=n/10;
    }
    printf ("Reverse of %d is %d\n",temp,reverse);
    return 0;
}