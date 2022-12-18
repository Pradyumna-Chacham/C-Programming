// Reversing elements of array using swap
#include<stdio.h>
int main()
{
    int a[20],n,i,temp,mid;
    printf ("Enter how many elements you want to read:\n");
    scanf ("%d",&n);
    //Scanning elements
    printf ("Enter %d elements:\n",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n\n");
    printf("array elements before swapping:\n");
    //Printing array elements before swapping
    for(i=0;i<n;i++)
    {
        printf ("%d  ",a[i]);
    }
    printf("\n");
    // Swapping elements
    for(i=0,temp=0,mid=(n-1)/2;i<mid;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    printf ("Array elements after swapping:\n");
    //Printing elements after sorting
    for(i=0;i<n;i++)
    {
        printf ("%d  ",a[i]);
    }
    return 0;
}