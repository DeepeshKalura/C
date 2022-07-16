/*

8. Write a program in C to print all permutations of a given string using pointers. Go to the editor
Expected Output :

The permutations of the string are :                                                                         
abcd  abdc  acbd  acdb  adcb  adbc  bacd  badc  bcad  bcda  bdca  bdac  cbad  cbda  cabd  cadb  cdab  cdba  db
ca  dbac  dcba  dcab  dacb  dabc

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char c[10], a[10];
    gets(c);
    printf("The Permutationsbof the String are: ");
    a = c;
    while(a[i] !='\0')
    {
          for(int i = 0; i<strlen(a); i++)
          {
              a+i
          }
    }
    return 0;
}