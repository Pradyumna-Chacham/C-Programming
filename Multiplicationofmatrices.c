// Multiplication of matrices
#define ROWSIZE 5
#define COLUMNSIZE 5
#include<stdio.h>
int main()
{
    int a[ROWSIZE][COLUMNSIZE],b[ROWSIZE][COLUMNSIZE],c[ROWSIZE][COLUMNSIZE];
    int r1,c1,r2,c2,i,j,k;
    printf ("Enter size of first matrix(Rows and columns):\n");
    scanf ("%d%d",&r1,&c1);
    printf ("Enter size of second matrix(rows and columns:\n");
    scanf ("%d%d",&r2,&c2);
    if (c1==r2)
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
    // MULTIPLICATION OF MATRICES
    // assigning value to elements of third matrix
    { for (i=0;i<r1;i++)
    { for (j=0;j<c2;j++)
      c[i][j]=0;
    }
    // multiplying elements
    { for (i=0;i<r1;i++)
    { for (j=0;j<c2;j++)
      for (k=0;k<c1;k++)
       c[i][j]=a[i][k]*b[k][j];
    }
    }
    // printing resultant matrix
    printf ("Multiplication of two matrices:\n");
    { for (i=0;i<r1;i++)
    { for (j=0;j<c2;j++)
     printf ("%d ",c[i][j]);
     printf ("\n");
    }
    }
    if (c1!=r2)
    printf ("Matrix multiplication not possible\n");
    }
    return 0;
}

