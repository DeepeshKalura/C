/*
	Develop  a program to print transpose of a given Matrix

	Made by :- Deepesh Kalura
*/
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[n][n], b[n][n];
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
		{
			scanf("%d", &a[i][j]);	
		}	
	}
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
		{
			b[j][i] = a[i][j];		
		}	
	}
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
		{
			printf("%d ", b[i][j]);		
		}
		printf("\n");	
	}

	return 0;
}
