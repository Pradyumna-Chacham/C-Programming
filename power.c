// To find the power of a number
#include<stdio.h>
int main()
{
    int base,exp,result,temp;
    printf ("Enter a number(base):\n");
    scanf ("%d",&base);
    printf ("Enter the power to which you want to raise the given number(exponent)\n");
    scanf ("%d",&exp);
    result=1;
    temp=exp;
    while (exp!=0)
    {
        result*=base;
        exp=exp-1;
    }
    printf ("The result when %d is raised to the power %d is: %d",base,temp,result);
    return 9;
}