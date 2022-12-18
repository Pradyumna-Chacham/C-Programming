// To calculate the simple interest
#include<stdio.h>
int main()
{
    int a,p,t,r;
    float i;
    printf ("Enter principal amount=\n");
    scanf ("%d",&p);
    printf ("Enter rate of interest per year=\n");
    scanf ("%d",&r);
    printf ("Enter time period in years=\n");
    scanf ("%d",&t);
    i=(p*t*r)/100;
    a=p+i;
    printf ("The simple interest is=%f\n",i);
    printf ("The amount after the time period is=%d\n",a);    
    return 0;
}