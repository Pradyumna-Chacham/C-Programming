// TO write a program to add two matrices using a user defined function
void matrixadd(int mat1[5][5], int mat2[5][5], int mat3[5][5]);
int r1,c1;
#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],c[5][5];
    int r2,c2,i,j;
    printf ("Enter size of first matrix(rows and columns):\n");
    scanf ("%d%d",&r1,&c1);
    printf ("Enter size of second matrix(rows and columns):\n");
    scanf ("%d%d",&r2,&c2);
    if (r1!=r2 || c1!=c2)
    printf ("Addition of matrices not possible,enter matrixes of equal size\n");
    else
    {
        // reading first matrix elements
        printf ("Enter first matrix elements:\n");
        for (i=0;i<r1;i++)
        {
            for (j=0;j<c1;j++)
            {
                scanf ("%d",&a[i][j]);
            }
        }
        // reading second matrix elements
        printf ("Enter second matrix eleme nts:\n");
        for (i=0;i<r2;i++)
        {   
            for (j=0;j<c2;j++)
            {
                scanf ("%d",&b[i][j]);
            }
        }
        // printing first matrix
        printf ("First matrix elements:\n");
        for (i=0;i<r1;i++)
        {   
            for (j=0;j<c1;j++)
            {   
                printf ("%d ",a[i][j]);
            }
            printf ("\n");
        }
        // printing second matrix
        printf ("Second matrix elements:\n");
        for (i=0;i<r1;i++)
        {
            for (j=0;j<c1;j++)
            {
                printf ("%d ",b[i][j]);
            }
            printf ("\n");
        }
        // Addition of matrices
        matrixadd( a , b , c );    
        // printing resultant matrix
        printf ("Addition of two matrices:\n");
        for (i=0;i<r1;i++)
        {
            for (j=0;j<c1;j++)
            {
                printf ("%d ",c[i][j]);
            }
            printf ("\n");            
        }
    }
    return 0;
}
// Function Definition
void matrixadd(int mat1[5][5],int mat2[5][5],int mat3[5][5])
{
    int i,j;
    for (i = 0; i<r1; i++) 
    {
        for (j = 0; j<c1; j++) 
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    return;
}
