//Program to print pascal's triangle
#include<stdio.h>
int main()
{
    int x,n,i,j,s;
    printf("Enter how many rows of pascal's triangle you want to print:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        //Loop for printing spaces
        for(s=1;s<=n-i;s++)
        {
            printf("  ");
        }
        //Loop for printing numbers
        for(j=1;j<=i;j++)
        {
            if(j==1)
            {
                x=1;
                printf("%d  ",x);
            }
            else
            {
                x=(x*(i-j+1)/(j-1));
                printf("  %d  ",x);
            }
        }
        printf("\n");
    }
    return 0;
}