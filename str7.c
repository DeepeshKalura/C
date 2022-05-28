/*
    Write a program in C to check whether a letter is lowercase or not.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char a;
    scanf("%c", &a);
    if(islower(a))
    {
        printf("It is in a lowecase");
    }
    else
    {
        printf("It is a not a lowecase");
    }
}