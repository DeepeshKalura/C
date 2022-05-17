/*
14. Write a program in C to sort an array using Pointer. Go to the editor
Test Data :
testdata
Expected Output :

Test Data :
Input the number of elements to store in the array : 5
Input 5 number of elements in the array :
element - 1 : 25
element - 2 : 45
element - 3 : 89
element - 4 : 15
element - 5 : 82
Expected Output :
                                                                                           
 The elements in the array after sorting :                                                                    
 element - 1 : 15                                                                                             
 element - 2 : 25                                                                                             
 element - 3 : 45                                                                                             
 element - 4 : 82                                                                                             
 element - 5 : 89  
 */

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int *p, temp;
    for (int  i = 0; i<n; i++)
    {
        //printf("\nelement - %d : ", i+1);
        scanf("%d", &*(p+i));
    }
    printf("\nArray\n");
    for (int i = 0; i<n; i++)
    {
        printf("element - %d : %d\n", i+1, *(p+i));
    }
    for (int i = 0; i<n; i++)
    {
        for(int j = 0; j<n-i-1; j++)
        {
            if (*(p+j) > *(p+j+1))
            {
                temp = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = temp;
            }
            
        }
        printf("\n\nSituation after pass %d\n",i);
        for (int i = 0; i<n; i++)
        {
            printf("element - %d : %d\n", i+1, *(p+i));
        }
    }
    printf("The elements in the array after sorting\n");
    for (int i = 0; i<n; i++)
    {
        printf("element - %d : %d\n", i+1, *(p+i));
    }

    return 0;
}
