// To search for an element in an array
#include<stdio.h>
int main()
{
    int n,key,i,a[20];
    printf ("Enter how many elements you want to read:\n");
    scanf ("%d",&n);
    printf ("Enter %d elements:\n",n);
    // For scanning elements
    for (i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    // Linear search
    printf ("Enter the element which you want to search:\n");
    scanf ("%d",&key);
    for (i=0;i<n;i++)
    {
        if (a[i]==key)
        break;
    }
    if (i==n)
    printf ("%d not found\n",key);
    else
    printf ("%d found at position %d",key,i+1);
    return 0;
}