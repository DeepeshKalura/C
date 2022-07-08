// Develop a program to concatenate two strings and display the concatenated string to the output screen
#include <stdio.h>
#include <string.h>
int main() {
    char s1[50];
    char s2[50];
    char s3[100];
    printf("Enter first string :\n");
    gets(s1);
    printf("Enter second string :\n");
    gets(s2);  
    // strcat(s1,s2);
    int k=0;
    for(int i=0;s1[i]!='\0';i++){
        s3[k++]=s1[i];
    }
    for(int i=0;s2[i]!='\0';i++){
        s3[k++]=s2[i];
    }
    s3[k++]='\0';
    printf("%s\n",s3);
    
    return 0;
}