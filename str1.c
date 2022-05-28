/*
    Write a C programming to convert vowels into upper case character in a given string.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() 
{
    char a[100];
    gets(a);
    for(int i = 0; i<strlen(a); i++)
    {
        if ((a[i]== 'a') || (a[i] == 'e') || (a[i] == 'i') || (a[i] == 'o') || (a[i] == 'u'))
        {
            a[i] = toupper(a[i]);
        }
    }
    puts(a);

    return 0;
}
