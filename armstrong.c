//To check whether a given number si armstrong number or not
#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,t,temp,count,sum;
    printf("Enter a number:\n");
    scanf("%d",&n);
    temp=n;
    count=0;
    //Counting no.of digits in the number
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        count++;
    }
    //TO check whether armstrong number or not
    t=temp;
    sum=0;
    while(t!=0)
    {
        r=t%10;
        sum+=pow(r,count);
        t=t/10;
    }
    if(sum==temp)
    printf("%d is an armstrong number",temp);
    else
    printf("%d is not an armstrong number",temp);
    return 0;
}