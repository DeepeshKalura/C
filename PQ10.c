/*
10. Write a program in C to Calculate the length of the string using a pointer. Go to the editor
Test Data :
Input a string : w3resource
Expected Output :

The length of the given string w3resource                                                                    
is : 10    
*/
#include <stdio.h>

int stringlen(int *a)
{
    int count = 0;
    while(*a != "/0")
    {
        count += 1;
        a++;
    }
    return count;
}

int main()
{
    char a[100];
    fgets(a, sizeof a, stdin);
    int count = stringlen(a);
    printf("The length of the given string is : %d ", count);
    return 0;
}
