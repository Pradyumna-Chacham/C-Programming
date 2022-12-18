#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char  x[20];
    int p;
    printf("Enter a string:\n");
    scanf("%s",x);
    p=strlen(x);
    qsort(x,p,sizeof(char),strcmp);
    printf("%s\n",x);
    return 0;
}