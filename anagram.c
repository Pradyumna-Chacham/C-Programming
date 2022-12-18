//Program to check if two given strings are anagrams or not
#include<stdio.h>
#include<string.h>
void sort(char a[], int l);
int main()
{
    int a,c[10],sum=0,i,p,q;
    char x[10],y[10];
    printf("Enter two strings:\n");
    scanf("%s%s",x,y);
    //Length of two strings
    p=strlen(x);
    q=strlen(y);
    //COnverting strings into lowercase
    strlwr(x);
    strlwr(y);
    //Sorting two strings
    sort(x,p);
    sort(y,q);
    //Printing two strings
    printf("\n\nTwo strings after sorting:\n");
    puts(x);
    puts(y);
    printf("\n\n");
    //Checking for anagram
    for(i=0;x[i]!='\0' && y[i]!='\0';i++)
    {
        a=strncmp(x,y,i);//Comparing first n elements
        c[i]=a;//storing return value
        
    }
    printf("\n\n");
    //Sum of return values in loop
    for(i=0;i<p;i++)
    {
        sum+=c[i];//sum of return values must be zero
    }
    if (sum==0)
    printf("The two strings are anagrams\n");
    else
    printf("The two strings are not anagrams\n");
    return 0;
}
//function definiton
void sort(char a[],int l)
{
    int j,k;
    char temp;
    for (j=1;j<l;j++)
    {
        for (k=0;k<l-j;k++)
        {
            if (a[k]>a[k+1])
            {
                temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }
}






