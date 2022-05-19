/*

5. Write a program in C to add numbers using call by reference. Go to the editor
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

 The sum of 5 and 6  is 11 
 

*/

#include <stdio.h>

int add(int *a, int *b)
{
    int sum;
    sum = (*a + *b);
    return sum;
}

int main()
{
    int n, m, *k, *p;
    printf("Input the first number : ");
    scanf("%d", &n);
    printf("Input the second number : ");
    scanf("%d", &m);
    k = &m;
    p = &n;
    printf("The sum of the entered number is %d", add(k, p));
    
    return 0;
}