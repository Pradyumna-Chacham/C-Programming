// To write a user defined function to concatenate two strings
void stringconcat(char[],char[]);
int main()
{
    char x[20],y[20];
    printf ("Enter 2 strings:\n");
    gets(x);
    gets(y);
    stringconcat(x,y);
    printf ("After concatenation:\n");
    puts(x);
    return 0;

}
// Function definition
void stringconcat(char x[],char y[])
{
    int i,j;
    for (i=0;x[i]!='\0';i++);
    for (j=0;y[j]!=0;j++,i++)
    {
        x[i]=y[j];
    }
    x[i]='\0';
}
