/*
    Write a program in C to check whether a character is digit or not
*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char a;
    scanf("%c", &a);
    bool flag = false;
    int x = a;
    for(int i = 48; i<= 57;i++)
    {
        if(x == i)
        {
            flag = true;
        }
    }
    if(flag == true)
    {
        printf("Digit");
    }
    else
    {
        printf("Not Digit");
    }
    return 0;   
}
    