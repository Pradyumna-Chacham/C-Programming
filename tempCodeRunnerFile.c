// TO write a program to implement bubble sort
void bubblesort(long [], long);
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
void bubblesort(long list[], long n)
{
  long c, d, t;

  for (c = 0 ; c < n - 1; c++) 
  {
    for (d = 0 ; d < n - c - 1; d++) 
    {
      if (list[d] > list[d+1]) 
      {
         /* Swapping */
            t         = list[d];
            list[d]   = list[d+1];
            list[d+1] = t;
      }
    }

  }
}