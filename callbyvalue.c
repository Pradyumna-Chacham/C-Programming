//Program to swap two numbers using call by value
#include<stdio.h>
void swap(int a, int b);
int main()
{
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d%d",&x,&y);
    swap(x,y);
    printf("IN MAIN:\n\nBefore swapping x=%d\ty=%d\n\n",x,y);
    printf("After swapping x=%d\ty=%d\n\n",x,y);
    return 0;
}
//Function definition
void swap(int a, int b)
{
    int temp;
    printf("IN FUNCTION:\n\nBefore swapping x=%d\ty=%d\n\n",a,b);
    //Swapping
    temp=a;
    a=b;
    b=temp;
    printf("After swapping x=%d\ty=%d\n\n",a,b);
    return;
}