//Program to find maximum and minimum of given array elements
#include<stdio.h>
int main()
{
    int a[20],n,i,max,min;
    printf("Enter how many elements you want to read:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    //Scanning elements
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //Maximum and minimum
    max=min=a[0];
    for(i=0;i<n;i++)
    {
        if (a[max]<a[i])
        max=a[i];
        if( a[min]>a[i])
        min=a[i];
    }
    printf ("Maximum of array elements:%d\n",max);
    printf("Minimum of array elements:%d\n",min);
    return 0;
}