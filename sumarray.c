// Program to find sum of array elements
#include<stdio.h>
int main()
{
    int a[20],n,i,sum;
    printf ("Enter how many elements you want to read:\n");
    scanf ("%d",&n);
    printf ("Enter %d elements:\n",n);
    // Scanning elements
    for(i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    sum=0;
    // Sum of array elements
    for (i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf ("Sum of %d elements of array: %d\n",n,sum);
    return 0;
}
