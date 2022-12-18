// To print half pyramid of letters
#include<stdio.h>
int main()
{
    int rows=0,m=66,i,j;
    printf("Enter no.of rows:\n");
    scanf("%d",&rows); 
    for(i=0;i<rows;i++)
    {
        m=65;
        for(j=0;j<=i;j++,m++)
        {
            printf("%c ",m);
            if(m>=90)
            {
                m=64;
            }
        }
        printf("\n");
    }
 return 0;
}