/*
    Write a program in C to Concatenate Two Strings Manually. 
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000], b[1000];
    gets(a);
    gets(b);
    printf("%s", strcat(a, b));
    
    return 0;
}