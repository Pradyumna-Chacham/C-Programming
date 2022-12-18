// To find the HCF of two given numbers
#include<stdio.h>
int main()
{
    int a,b,x,gcd;
    printf ("Enter 'a' value:\n");
    scanf ("%d",&a);
    printf ("Enter 'b' value:\n");
    scanf ("%d",&b);
    for (x=1;x<=a && x<=b;x++)
    {   if (a%x==0 && b%x==0)
        gcd=x;
    }
    printf ("HCF of %d and %d is: %d\n",a,b,gcd);
    return 0;

}