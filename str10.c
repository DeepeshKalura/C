/*
     Write a program in C to replace the spaces of a string with a specific character. 
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    gets(a);
    int count = 0;
    for(int i = 0; i<strlen(a) ;i++)
    {
        if ((a[i]) == ' ')
        {
            a[i] = '*';
        }
    }
    printf("%s", a);
    return 0;
}