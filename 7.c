/* Online C Compiler and Editor */
#include <stdio.h>
#include<string.h>
#include<ctype.h>


int main()
{
    char s1[100];
    int arr[26]={0};
    printf("Enter a string\n");
    scanf("%[^\n]s",s1);
   
    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]<'a'){
            s1[i]=tolower(s1[i]);
        }
        arr[s1[i]-'a']++;
    }
    printf("Occurences are\n");
    for(int i=0;i<26;i++){
        if(arr[i]>0){
            printf("%c are %d\n",'a'+i,arr[i]);
        }
    }

    return 0;
}