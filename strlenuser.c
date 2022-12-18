// TO write a user defined function to find the string length
#include<stdio.h>
int stringlength(char[]);
int main()
{
    char x[20];
    int l;
    printf ("Enter a string:\n");
    gets(x);
    l=stringlength(x);
    printf ("Length of string is: %d",l);
    return 0;
}
// Function definition
int stringlength(char x[])
{
    int count=0,i;
    for (i=0;x[i]!='\0';i++)
    {
        count++;
    }
    return count;
}