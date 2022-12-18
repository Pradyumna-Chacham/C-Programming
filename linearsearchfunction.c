// To write a program to implement linear search
int linearsearch(int c[20],int,int);
#include<stdio.h>
int main()
{   int a[20],n,key,i,l;
    printf ("Enter how many elements you want to read:\n");
    scanf ("%d",&n);
    printf ("Enter %d elements:\n",n);
    // For scanning elements
    for (i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    printf ("Enter element you want to find:\n");
    scanf ("%d",&key);
    l=linearsearch(a,n,key);
    if (l==-1)
    printf ("%d not found.\n",key);
    else
    printf ("%d found at position %d",key,l+1);
    return 0;
}
// Function definition
int linearsearch(int b[20], int p, int q)
{
    int r;
    for (r=0;r<=p;r++)
    {
        if (b[r]==q)
        return r;
        else if (r==p)
        return -1;
    }
}