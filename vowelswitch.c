// To check if a letter is a vowel or consonant using switch case
#include<stdio.h>
int main()
{
    char x;
    printf (" Enter a letter=\n");
    scanf ("%c",&x);
    switch(x)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U': printf ("%c is a vowel\n",x);
        break;
        default: printf ("%c is a consonant\n",x);
        break;
    }
    return 0;
}