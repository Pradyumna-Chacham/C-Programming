//To find the area of a circle
#include<stdio.h>
int main()
{
    int r;
    float area,pi;
    printf ("Enter value of radius=\n");
    scanf ("%d",&r);
    pi=3.14159;
    area= pi*r*r;
    printf ("Area of circle=%f",area);
    return 0;

}