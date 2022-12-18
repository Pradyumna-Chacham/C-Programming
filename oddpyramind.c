#include<stdio.h>
int main()
{
    int rows=0,m=1,i,j;
    printf("Enter no.of rows:\n");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++,m+=2)
    {
        if(m>9)
        {
            m=1;
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",m);
        }
        printf("\n");
    }
 return 0;
}

