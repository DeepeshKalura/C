/*
    Write a program in C to find the number of times a given word 'the' appears in the given string.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    gets(a);
    int count = 0;
    for(int i = 1; i<strlen(a); i++)
    {
        if(((a[i-1]=='t')|| (a[i-1]=='T')) && (a[i]=='h') && (a[i+1]== 'e'))
        {
            count+=1;
        }
         
    }
    printf("The frequency of the word 'the' is : %d ", count);
    return 0;
}