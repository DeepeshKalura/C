 /*
    Write a program in C to split string by space into words. 
 */
 #include <stdio.h>
 #include <string.h>
 
 int main()
 {
    char a[100];
    printf("Enter The Sentence\n");
    gets(a);
    int x;
    for(int i = 0; i<strlen(a); i++)
    {
        x = a[i];
        if(x != 32)
        {
            printf("%c", a[i]);
        }
        else
        {
            printf("\n");
        }
    }
    
 }
