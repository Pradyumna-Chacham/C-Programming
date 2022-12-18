// Program to find even array elements
#include<stdio.h>
int main()
{
    int a[20],n,i;
    printf ("Enter how many elements you want to read:\n");
    scanf ("%d",&n);
    printf ("Enter %d elements:\n",n);
    // Scanning elements
    for(i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    //Checking for even elements
    for (i=0;i<n;i++)
    {
        if (a[i]%2==0)
        {
            printf ("%d  ",a[i]);
        }
    }
    return 0;
}
