// To write a program to convert a string into uppercase
char stringupper(char []);
#include<stdio.h>
int main()
{
    char x[20];
    printf ("Enter a string:\n");
    gets(x);
    stringupper(x);
    printf ("String in uppercase:\n");
    puts(x);
    return 0;
}
// Function definition
char stringupper(char a[])
{
    int i;
    for (i=0;a[i]!='\0';i++)
    {
        if (a[i]>='a' && a[i]<='z')
        {
            a[i]-=32;
        }        
    }
}
