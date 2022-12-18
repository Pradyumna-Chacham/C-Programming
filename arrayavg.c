// Program to find sum of array elements
#include<stdio.h>
int main()
{
    int a[20],n,i,sum;
    float avg;
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
    avg=sum/n;
    printf ("Average of array elements is:%f",avg);
    return 0;
}
