// To write a program to compare two strings
int stringcompare(char [],char []);
#include<stdio.h>
int main()
{
    int x;
    char s1[20],s2[20];
    printf ("Enter 2 strings:\n");
    gets(s1);
    gets(s2);
    x=stringcompare(s1,s2);
    if (x==0)
    printf ("Strings are equal\n");
    else if (x==-1)
    printf ("String 1 is less than String 2\n");
    else
    printf ("String 1 is less than String 2\n");
    return 0;
}
// Function definition
int stringcompare(char a[20],char b[20])
{
    int i,flag=1;
    for(i=0;a[i]!='\0'&&b[i]!='\0';i++)//until null in one string or both the strings
    {
        if(a[i]!=b[i])//when we get unmatching characters
        {
            break;
        }

    }
    if(a[i]!='\0' || b[i]!='\0')
    {
        if(a[i]<b[i])
            return -1;
        else return 1;
    }
    else
        return 0;
}
