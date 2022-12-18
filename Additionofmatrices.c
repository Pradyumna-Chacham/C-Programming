// Addition of two matrices
#define ROWSIZE 5
#define COLUMNSIZE 5
#include<stdio.h>
int main()
{
    int a[ROWSIZE][COLUMNSIZE],b[ROWSIZE][COLUMNSIZE],c[ROWSIZE][COLUMNSIZE];
    int r1,c1,r2,c2,i,j;
    printf ("Enter size of first matrix(rows and columns):\n");
    scanf ("%d%d",&r1,&c1);
    printf ("Enter size of second matrix(rows and columns):\n");
    scanf ("%d%d",&r2,&c2);
    if (r1!=r2 || c1!=c2)
    printf ("Addition of matrices not possible,enter matrixes of equal size\n");
    else
    // reading first matrix elements
    printf ("Enter first matrix elements:\n");
    { for (i=0;i<r1;i++)
    { for (j=0;j<c1;j++)
     scanf ("%d",&a[i][j]);
    }
    // reading second matrix elements
    }
    printf ("Enter second matrix elements:\n");
    { for (i=0;i<r2;i++)
    { for (j=0;j<c2;j++)
     scanf ("%d",&b[i][j]);
    }
    }
    // printing first matrix
    printf ("First matrix elements:\n");
    { for (i=0;i<r1;i++)
    { for (j=0;j<c1;j++)
     printf ("%d ",a[i][j]);
     printf ("\n");
    }
    }
    // printing second matrix
    printf ("Second matrix elements:\n");
    { for (i=0;i<r1;i++)
    { for (j=0;j<c1;j++)
     printf ("%d ",b[i][j]);
     printf ("\n");
    }
    }
    // Addition of matrices
    { for (i=0;i<r1;i++)
    { for (j=0;j<c1;j++)
     c[i][j]=a[i][j]+b[i][j];
    }
    }
    // printing resultant matrix
    printf ("Addition of two matrices:\n");
    { for (i=0;i<r1;i++)
    { for (j=0;j<c1;j++)
     printf ("%d ",c[i][j]);
     printf ("\n");
    }
    }
    return 0;
}
