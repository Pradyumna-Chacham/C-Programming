//Program to check if two strings are anagrams
#include<stdio.h>
#include<string.h>
void sort(char a[], int l);
int main()
{
    int p,q,flag=0,i;
    char x[10],y[10];
    printf("Enter two strings:\n");
    scanf("%s%s",x,y);
    printf("\n\n");
    //Length of two strings
    p=strlen(x);
    q=strlen(y);
    if(p!=q)
    printf(" The two strings are not anagrams of each other\n");
    //COnverting strings into lowercase
    strlwr(x);
    strlwr(y);
    //Sorting character arrays
    sort(x,p);
    sort(y,q);
    //Comparing both strings
    for(i=0;x[i]!='\0';i++)
    {
        if (x[i]!=y[i])
        flag=1;
    }
    if (flag==0)
    printf("The two strings are anagrams of each other\n");
    else
    printf("The two strings are not anagrams of each other\n");
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