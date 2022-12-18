// To swap two variables using third variable
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf ("First number=\n");
    scanf ("%d",&a);
    printf ("Enter second number=\n");
    scanf ("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf ("New first number=%d\n",a);
    printf ("New second number=%d\n",b);
return 0;
}