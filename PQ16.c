/*
16. Write a program in C to compute the sum of all elements in an array using pointers. Go to the editor
Test Data :
Input the number of elements to store in the array (max 10) : 5
Input 5 number of elements in the array :
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
element - 5 : 6
Expected Output :

 The sum of array is : 20 
  
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);
    int *p, sum = 0;
    for (int  i = 0; i<n; i++)
    {
        printf("\nelement - %d : ", i+1);
        scanf("%d", &*(p+i));
        sum = sum + *(p+i);
    }
    printf("\nThe sum of array is :%d",sum);

    return 0;
}