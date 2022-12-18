//Program to sort an array using selection sort
#include<stdio.h>
int main()
{
    int n,i,a[20],j,temp,min;
    printf("Enter how many elements you want to read:\n");
    scanf("%d",&n);
    printf ("Enter %d elements:\n",n);
    //Scanning elements
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //Printing array elements before sorting
    printf("Array elements before sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");
    //Selection sort
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=1;j<n;j++)
        {
            if(a[j]<a[min])
            min=j;
        }
    if (i!=min)
    {
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    }
    //Printing array elements after sorting
    printf("Ascending order:\n");
    for(i=0;i<n;i++)
    {
        printf ("%d  ",a[i]);
    }
    return 0;     
}