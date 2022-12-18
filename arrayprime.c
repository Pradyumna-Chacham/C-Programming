//To find prime numbers in an array
#include<stdio.h>
int main()
{
    int a[20],n,i,j,count=0;
    printf("Enter how many elements you want to read:\n");
    scanf ("%d",&n);
    printf("Enter %d elements:\n",n);
    //Scanning elements
    for(i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    //To check for prime numbers
    for(i=0;i<n;i++)
    {
        for(j=0;j<a[i]/2;j++)
        {
            if (a[i]%j==0)
            count++;
            
        }
    }
    if (count==0)
            printf("Prime numbers in array:\n");
            printf ("%d\t",a[i]);
    return 0;
}