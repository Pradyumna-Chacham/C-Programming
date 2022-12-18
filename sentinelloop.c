// To find maximum and minimum of given elements using sentinel controlled loop
#include<stdio.h>
int main()
{
    int a,max,min;
    char x;
    printf ("Enter a number:\n");
    scanf ("%d",&a);
    max=min=a;
    printf ("Do you want to continue?(Y/N)?\n");
    scanf (" %c",&x);
    if (x=='y' || x=='Y')
    {   printf ("Enter a number:\n");
        scanf ("%d",&a);
        if (max<a)
        max=a;
        if (min>a)
        min=a;
        printf ("Do you want to continue(Y/N)?\n");
        scanf (" %c",&x);
    }
    printf ("maximum: %d\tMinimum:%d\n",max,min);
    return 0;
}