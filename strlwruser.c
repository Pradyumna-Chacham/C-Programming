// To write a program to convert a string into lowercase
char stringlower(char []);
#include<stdio.h>
int main()
{
    char x[20];
    printf ("Enter a string:\n");
    gets(x);
    stringlower(x);
    printf ("String in lowercase:\n");
    puts(x);
    return 0;
}
// Function definition
char stringlower(char a[])
{
    int i;
    for (i=0;a[i]!='\0';i++)
    {
        if (a[i]>='A' && a[i]<='Z')
        {
            a[i]+=32;
        }        
    }
}
