// To find the ascending order of 3 numbers using nested if-else
#include<stdio.h>
int main()
{
    int a,b,c;
    printf ("Enter 'a' value=\n");
    scanf ("%d",&a);
    printf ("Enter 'b' value=\n");
    scanf ("%d",&b);
    printf ("Enter 'c' value=\n");
    scanf ("%d",c);
    if (a>b)
    {
    {   if (a>c)
     {  if (b>c)
        printf ("Ascending order is %d<%d<%d\n",c,b,a);
        else
        printf ("Ascending order is %d<%d<%d\n",b,c,a);
        }
        else
        printf ("Ascending order is %d<%d<%d\n",b,a,c);
    }
    }
    else
    {
    { if (b>c)
    {   if (a>c)
        printf ("Ascending order is %d<%d<%D\n",c,a,b);
        else 
        printf ("Ascending order is %d<%d<%d\n",a,c,b);
    }
    else
    printf ("Ascending order is %d<%d<%d\n",a,b,c);
    }
    }
    return 0;
}
