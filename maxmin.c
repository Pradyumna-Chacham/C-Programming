//Program to find the maximum and minum of a set of numbers wihtout ousing arrays
#include<stdio.h>
int main()
{
    int n,i,num,max,min;
    printf("Enter how many numbers you want to read:\n");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    scanf("%d",&num);
    max=min=num;
    for(i=2;i<=n;i++)
    {
        scanf("%d",&num);
        if(num>max)
        max=num;
        if (num<min)
        min=num;
    }
    printf("Maximum number:%d\tMinimum number:%d\n",max,min);
    return 0;
}