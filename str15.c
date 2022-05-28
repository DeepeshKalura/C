/*
    Write a program in C to remove characters in String Except Alphabets.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    gets(a);
    for(int i = 0; i<strlen(a); i++)
    {
        if (isalpha(a[i]))
        {
            printf("%c", a[i]);
        }
    }
    return 0;
}