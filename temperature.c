// To convvert temperature into kelvin and fahrenheit scale
#include<stdio.h>
int main()
{
    int c,f,k;
    printf ("Enter temperature in Celsius scale=\n");
    scanf ("%d",&c);
    k=c+273;
    f=(c*9/5)+32;
    printf ("Temperature in Kelvin scale is=%d\n",k);
    printf ("Temperature in Fahrenheit scale=%d\n",f);
    return 0;
    }