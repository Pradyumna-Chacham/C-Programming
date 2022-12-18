// Program to print reverse of array elements
#include<stdio.h>
int main()
{
    int a[20],n,i;
    printf ("Enter how many elements you want to read:\n");
    scanf ("%d",&n);
    printf ("Enter %d elements:\n",n);
    //Scanning elements
    for (i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    printf ("\n\n");
    //Printing reverse elements of array
    printf ("Array elements in reverse:\n");
    for (i=n-1;i>=0;i--)
    {
        printf ("%d  ",a[i]);
    }
    return 0;
}