/*
     Develop a program to reverse a string using pointers. Display the reserved string to the
     console.(Pointers)
     
     Made by Deepesh Kalura
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str , 100, stdin);
    char *ptr1, *ptr2;
    int c = strlen(str);
    ptr1 = &str[0]; ptr2 = &str[c-1];
    char temp;
    for (int i = 0; i<(c/2); i++)
    {
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2--;
    }
    puts(str);
    return 0;
}