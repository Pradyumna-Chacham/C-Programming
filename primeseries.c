// To print prime series upto a given number
#include<stdio.h>
int main()
{
    int n,i,j,count;
    printf ("Enter a number:\n");
    scanf ("%d",&n);
    // for taking every number from 2
    for (i=2;i<=n;i++)
    {
        { for (j=2,count=0;j<=i/2;j++)
          if (i%j==0)
          count++;
        }
    if (count==0)
    printf ("%d\t",i);
    }
    return 0;
}