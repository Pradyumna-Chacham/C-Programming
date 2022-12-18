// To print fibonacci series
#include<stdio.h>
int main()
{
    int n,a,b,c,i;
    printf ("Enter 'n' value:\n");
    scanf ("%d",&n);
    a=0;
    b=1;
    if (n>2)
    {
        printf ("%d\t%d\t",a,b);
        for (i=3;i<=n;i++)
        {
            c=a+b;
            printf ("%d\t",c);
            a=b;
            b=c;
        }
    }
    else
    printf ("%d\t%d",a,b);
    return 0;
}