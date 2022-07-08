/*
    Develop a program to find total and average sales done by "N"
    employees (empcode, emp name, emp sales) using array of strutures.

    Made By Deepesh Kalura
*/

#include <stdio.h>


typedef struct employees
{
    int empcode;
    char empname[100];
    int empsales;
}emp;

int main()
{
    int n;
    scanf("%d", &n);
    emp a[n];
    int sum = 0;
    for( int i = 0; i<n; i++)
    {
        scanf("%d", &a[i].empcode);
        scanf("%s", a[i].empname);
        scanf("%d", &a[i].empsales);
        sum += a[i].empsales;
    }
    
    printf("Total Sales = %d and Average Sales = %d", sum, sum/n);
    
    
}