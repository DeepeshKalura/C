/* Online C Compiler and Editor */
#include <stdio.h>
#include<string.h>

int compare(char s1[], char s2[]){
    if(strcmp(s1,s2)==0){
        return 1;
    }
    return 0;
}
int main()
{
    char s1[100];
    char s2[100];
    printf("Enter first string \n");
    scanf("%[^\n]s",s1);
    getc(stdin);
    printf("Enter second string \n");
    scanf("%[^\n]s",s2);
    int c=compare(s1,s2);
    if(c==1){
        printf("Strings are equal\n");
    }
    else{
        printf("Strings are not equal");
    }
    

    return 0;
}