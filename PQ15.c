/*

15. Write a program in C to show how a function returning pointer. Go to the editor
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

 The number 6 is larger.       

*/

#include <stdio.h>
#include <stdlib.h>
int *larger(int *a, int *b)
{
    if (*a>*b)
    {
        return a;
    }
    else 
    {
        return b;
    }
}
int main()
{
    int a , b;
    printf("Enter One elements: ");
    scanf("%d", &a);
    printf("Enter One elements: ");
    scanf("%d", &a);
    int *p = &a, *q = &b;
    printf("The number %d is larger.",*larger(p, q));
    
    
    return 0;
}