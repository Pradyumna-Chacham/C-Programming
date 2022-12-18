//To check if a matrix is an identity matrix
#include<stdio.h>
int main()
{
    int a[20][20],n,i,j,temp,rows,columns,flag;
    printf ("Enter size of matrix(rows and columns):\n");
    scanf("%d%d",&rows,&columns);
    printf("Enter matrix elements:\n");
    //Scanning elements
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //Printing Elements
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    //Checking for identity matrix
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {       
            if(i==j)
            {
                if (a[i][j]!=1);
                {
                    flag=0;
                    break;
                }
            }
            else
            {
                if(a[i][j]!=0)
                {
                    flag=0;
                    break;
                }
            }
        }
    }
    if(flag==1)
    printf("The given matrix is an identity matrix.\n");
    if (flag==0)
    printf("The given matrix is not an identity matrix.\n");
    return 0;
}
    