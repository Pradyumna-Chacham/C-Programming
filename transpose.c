// To find the transpose of a matrix
#define ROWSIZE 5
#define COLUMNSIZE 5
#include<stdio.h>
int main()
{
    int a[ROWSIZE][COLUMNSIZE],b[ROWSIZE][COLUMNSIZE];
    int r1,c1,i,j;
    printf ("Enter size of first matrix (rows and columns):\n");
    scanf ("%d%d",&r1,&c1);
    printf ("Enter first matrix elements:\n");
    // reading first matrix elements
    { for (i=0;i<r1;i++)
    {   for (j=0;j<c1;j++)
     scanf ("%d",&a[i][j]);
    }
    }
    // printing first matrix elements
    printf ("First matrix:\n");
    { for (i=0;i<r1;i++)
    {   for (j=0;j<c1;j++)
      printf ("%d ",a[i][j]);
      printf ("\n");
    }
    }
    // TRANSPOSE OF MATRIX
    // assigning value to transpose matrix
    { for (i=0;i<r1;i++)
    { for (j=0;j<c1; j++)
     b[i][j]=a[j][i];
    }
    }
    // printing transpose matrix
     printf ("Transpose of matrix is:\n");
    { for (i=0;i<r1; i++)
    { for (j=0;j<c1; j++)
        printf ("%d  ",b[i][j]);
        printf ("\n"); 
    }   
    }
    return 0;
}
