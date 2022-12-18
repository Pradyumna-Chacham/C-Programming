//To check whether a given year is alepa yeaar or not
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a ye2016ar:\n");
    scanf("%d",&n);
    //A year divisible by 400
    if(n%400==0)
    printf("%d is a leap year\n",n);
    //A year divisible by 100
    else if(n%100==0)
    printf("%d is not a leap year\n",n);
    //A year divisible by 4
    else if(n%4==0)
    printf("%d is a leap year\n");
    else
    printf("%d is not a leap year\n",n);
    return 0;
}