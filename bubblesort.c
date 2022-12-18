// To write a program to implement bubble sort
#include<stdio.h>
int main()
{
    int a[20],i,n,j,temp;
    printf ("Enter how many elements you want to read:\n");
    scanf ("%d",&n);
    printf ("Enter %d elements:\n",n);
    // For scanning elements
    for (i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    //Printing array before sorting
    printf("Array before sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n\n");
    // Bubble sort
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    // Sorting array
    printf ("After sorting array:\n");
    // Printing sorted array
    for (i=0;i<n;i++)
    {
        printf ("%d\t",a[i]);
    }
    return 0;    
}
