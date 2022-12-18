// To print factorial series upto n
#include<stdio.h>
int main()
{
    int n,i,j,fact;
    printf ("Enter 'n' value:\n");
    scanf ("%d",&n);
    {   for(i=1;i<=n;i++)
        {  for (j=1,fact=1;j<=i;j++)
            fact=fact*j;
            printf ("%d\t",fact);
        }
    
    }
    return 0;
}