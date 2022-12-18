/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int twoSum( int a[20], int p, int target);
    #include<stdio.h>
    int main()
{
    int nums[20],target,n,i,l[2];
    printf ("Enter how many elements you want to read:\n");
    scanf ("%d",&n);
    printf ("Enter %d elements of array:\n",n);
    // Scanning elements
    for (i=0;i<n;i++)
    {
        scanf ("%d",&nums[i]);
    }
    printf ("Enter target:\n");
    scanf("%d",target);
    l[2]= twoSum(nums,n,target);
    printf ("Address of indices are;\n");
    // Printing resultant array
    for (i=0;i<2;i++)
    {
    printf ("%d",l[i]);
    }
    return 0;
}
// Function definition
int twoSum( int a[20], int p, int target)
{
    int i,j;
    for (i=0;i<p;i++)
    {
        for(j=i+1;j<p;j++)
        {
            if (a[i]+a[j]==target) 
            return i;
            return j;
        }
    }
}