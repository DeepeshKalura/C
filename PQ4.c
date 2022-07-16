/*

4. Write a program in C to add two numbers using pointers. Go to the editor
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

The sum of the entered numbers is : 11 
         
    

*/

#include <stdio.h>

int main()
{
    int n, m, *k, *p;
    printf("Input the first number : ");
    scanf("%d", &n);
    printf("Input the second number : ");
    scanf("%d", &m);
    k = &n;
    p = &m;
    printf("The sum of the entered number is %d", (*k+*p));
    
    return 0;
}
