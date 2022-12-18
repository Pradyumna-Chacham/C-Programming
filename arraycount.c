//Program to count even and odd elements of array
#include<stdio.h>
int main()
{
    int a[20],n,i,ce=0,co=0;
    printf ("Enter how many elements you want to read:\n");
    scanf ("%d",&n);
    printf("Enter %d elements:\n",n);
    //Scanning elements
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //Even or odd elements
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        ce++;
        else
        co++;
    }
    printf("No.of even numbers:%d\n",ce);
    printf("no.of odd numbers:%d\n",co);
    return 0;
}