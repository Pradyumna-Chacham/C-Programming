// To find the value of cos(x) series
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,p=0,fact,j,sign;
    float x,y,sum=0;
    printf ("Enter 'n' value in degrees, no.of terms:\n");
    scanf ("%f%d",&x,&n);
    y=x;
    x=x*3.14159/180;
    for (i=1,sign=1;i<=n;i++)
    {
        for  (j=1,fact=1;j<=p;j++)
        {
            fact=fact*j;
        }
        sum=sum+sign*pow(x,p)/fact;
        sign=sign*-1;
        p=p+2;
    }
    printf ("cos(%f)=%f\n",y,sum);
    return 0;
}