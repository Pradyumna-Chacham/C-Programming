// To check if a given alphabet is a vowel or not
#include<stdio.h>
int main()
{
    char x;
    printf ("Enter a letter:\n");
    scanf ("%c",&x);
    if (x=='a' || x=='A'|| x=='e' || x=='E' || x=='i' || x=='I' || x=='o' || x=='O' || x=='u' || x=='U')
    printf ("%c is a vowel\n",x);
    else
    printf ("%c is a consonant",x);
    return 0;
}