// To find the HCF of two numbers using recursive function
int hcf(int,int);
#include<stdio.h>
int main()
{
    int x,y,z;
    printf ("Enter 2 numbers:\n");
    scanf ("%d%d",&x,&y);
    z=hcf(x,y);
    printf ("HCF of %d and %d is: %d\n",x,y,z);
    return 0;
}
// Function definition
int hcf (int a,int b)
{
    if (b==0)
    return a;
    else
    return hcf(b,a%b);
}