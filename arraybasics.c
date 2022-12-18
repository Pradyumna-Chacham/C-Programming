// To Declare, initialize, print the array and read elements and find sum of array elements
#define SIZE 10
#include<stdio.h>
int main()
{
    int a[SIZE],b[SIZE]={21,31,42,34,56},n,i;
    printf ("Enter how many elements you want to read:\n");
    scanf ("%d",&n);
    printf ("Enter %d elements:\n",n);
    // Reading elements
    for (i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    // printing elements
    printf ("Array a elements:\n");
    for (i=0;i<n;i++)
    {
        printf ("%d  ",a[i]);
    }
    printf("\n\n");
    // printing array b elements
    printf ("Array b elements:\n");
    for (i=0;i<5;i++)
    {
        printf ("%d  ",b[i]);
    }    
    return 0;
}