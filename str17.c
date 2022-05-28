/*
    Write a program in C to read a sentence and replace lowercase characters by uppercase and vice-versa.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char a[1000];
    gets(a);
    int count = 0;
    for(int i = 0; i<strlen(a); i++)
    {
        if(islower(a[i]))
        {
            a[i] = toupper(a[i]);
        }
        else if(isupper(a[i]))
        {
            a[i] = tolower(a[i]);
        }
         
    }
    puts(a);
    return 0;
}