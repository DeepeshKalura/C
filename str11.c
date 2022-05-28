/*
     Write a program in C to check whether a letter is uppercase or not.. 
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char a;
    scanf("%c", &a);
    if(isupper(a))
    {
        printf("It is in a UpperCase");
    }
    else
    {
        printf("It is a not a UpperCase");
    }
    return 0;
}