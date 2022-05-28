/*
     Write a C programming to count of each character in a given string.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char a[100];
    gets(a);
    printf("%lu", strlen(a)-1);
    
    return 0;
}