//program to swap two numbers using call by reference
#include<stdio.h>
void swap(int *p,int *q);
int main()
{
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d%d",&x,&y);
    printf("IN MAIN:\nBefore swapping x=%d\ty=%d\n",x,y);
    swap(&x,&y);    
    printf("IN MAIN:\nAfter swapping x=%d\ty=%d\n",x,y);
    return 0;
}
//Function definition
void swap(int *p,int *q)
{
    int temp;
    printf("IN FUNCTION\nBefore swapping x=%d\ty=%d\n",*p,*q);
    temp=*p;
    *p=*q;
    *q=temp;
    printf("After swapping x=%d\ty=%d\n",*p,*q);
    return;
}