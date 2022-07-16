/*
7. Write a program in C to store n elements in an array and print the elements using pointer. Go to the editor
Test Data :
Input the number of elements to store in the array :5
Input 5 number of elements in the array :
element - 0 : 5
element - 1 : 7
element - 2 : 2
element - 3 : 9
element - 4 : 8
Expected Output :

 The elements you entered are :                                                                               
 element - 0 : 5                                                                                              
 element - 1 : 7                                                                                              
 element - 2 : 2                                                                                              
 element - 3 : 9                                                                                              
 element - 4 : 8   
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Input the number of elements to store in an array:  ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i<n; i++)
    {
        printf("\nEnter Element %d - :", i);
        scanf("%d", arr+i);
    }
    printf("\nElements You enter:-\n");
    for (int j = 0; j<n; j++)
    {
        printf("%d  ", *(arr+j));
    }
    return 0;
}