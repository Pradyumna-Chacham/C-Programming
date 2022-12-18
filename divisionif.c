// To divide two numbers
#include<stdio.h>
int main()
{
    int a,b,d;
    float c;
    printf ("Enter dividend=\n");
    scanf ("%d",&a);
    printf ("Enter divisor=\n");
    scanf ("%d",&b);
    if (b==0)
    printf ("Division by zero not possible\n");
    else
    c=a/b;
    d=a%b;
    printf ("Quotient when a is divided by b=%f\n",c);
    printf ("Remainder when %d is divided by%d is=%d\n",a,b,d);
    return 0;
}