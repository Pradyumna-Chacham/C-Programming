// To write a user defined function to reverse a string
#include<stdio.h>
#include<string.h>
char stringreverse(char []);
int main()
{
    char x[20];
    printf ("Enter a string:\n");
    gets(x);
    stringreverse(x);
    printf ("After reversal of string:\n");
    puts(x);
    return 0;
}
// Function definition
char stringreverse(char s[])
{
    int i,l;
    char t;
    // To find length of string
    for (l=0; s[l]!='\0';l++);
    // To reverse characters in strings
    for(i=0;i<=l/2;i++)
    {
        t=s[i];
        s[i]=s[l-i-1];
        s[l-i-1]=t;
    }
}


