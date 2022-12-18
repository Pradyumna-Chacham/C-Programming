// TO write a program to implement bubble sort
void bubblesort(int a[20],int);
#include<stdio.h>
int main()
{
    int a[20],i,n;
    printf ("Enter how many elements you want to read:\n");
    scanf ("%d",&n);
    printf ("Enter %d elements:\n",n);
    // For scanning elements
    for (i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    // Sorting array
    printf ("After sorting array:\n");
    bubblesort(a,n);
    // Printing sorted array
    for (i=0;i<n;i++)
    {
        printf ("%d  ",a[i]);
    }
    return 0;    
}
// Function definition
void bubblesort(int x[20],int p)
{   
    int r,s,temp;
    for (r=1;r<p;r++)
    {
        for (s=0;s<p-r;s++)
        {
            if (x[s]>x[s+1])
            {
                temp=x[s];
                x[s]=x[s+1];
                x[s+1]=temp;
            }
        }
    }
}