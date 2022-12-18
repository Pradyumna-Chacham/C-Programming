// to find the absolute value of a number using fabs
#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("Enter a number=\n");
    scanf ("%d",&a);
    printf ("Absolute value of %d is %d\n",a,fabs(a));
    return 0;
}