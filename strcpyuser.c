// To write a user defined function to copy one string into another
void stringcopy(char[],char[]);
#include<stdio.h>
int main()
{
    char x[50],y[50];
    printf ("Enter a string:\n");
    gets(x);
    stringcopy(y,x);
    printf ("After copying string:\n");
    puts(y);
    return 0;
}
// Function definition
void stringcopy(char y[],char x[])
{
    int i;
    for (i=0;x[i]!='\0';i++)
    {
        y[i]=x[i];
    }
    y[i]='\0';
}
