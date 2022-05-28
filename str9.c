/*
    Write a program in C to count the number of punctuation characters exists in a string
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
        if (ispunct(a[i]))
        {
            count += 1;
        }
    }
    printf("%d", count);
    return 0;
}