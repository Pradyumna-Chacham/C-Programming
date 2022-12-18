//To search for an element using binaary seaarch
#include<stdio.h>
int main()
{
    int n,i,key,a[20],low,high,mid;
    printf("Enter how many elements you want to read:\n");
    scanf ("%d",&n);
    printf("Enter %d elements:\n",n);
    //Scanning Elements
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element which you want to search:\n");
    scanf("%d",&key);
    //Binary Search
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        break;
        if(key>a[mid])
        low=mid+1;
        else
        high=mid-1;
    }
    if(low>high)
    printf("%d not found\n",key);
    if (low<high)
    printf("%d found at position %d",key,mid+1);
    return 0;
}