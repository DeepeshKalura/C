/*
6. Write a program in C to find the maximum number between two numbers using a pointer. Go to the editor
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

6 is the maximum number.  

*/

#include <stdio.h>
int main()
{
    int m , n, *p, *q;
    printf("Input the First Number : ");
    scanf("%d", &n);
    printf("Input the Second Number : ");
    scanf("%d", &m);
    p = &m;
    q = &n;
    if (*q > *p)
    {
        printf("%d is the maximum number", *q);
    }
    else
    {
        printf("%d is the maximum number", *p);
    }
    
    return 0;
}