// To print first n natural numbers
#include<stdio.h>
int main()
{
    int n,i;
    printf ("Enter 'n' value upto which you want numbers to be printed:\n");
    scanf ("%d",&n);
    i=1;
    while (i<=n)
    {
        printf ("%d\t",i);
        i++;
    }
    return 0;
}