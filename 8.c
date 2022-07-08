/* Online C Compiler and Editor */
#include <stdio.h>
#include<string.h>

    void swap(int *a,int *b){
        *a=*a+*b;
        *b=*a-*b;
        *a=*a-*b;
    }
int main(){
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("Before Swapping:\n");
    printf("a = %d\nb = %d\n",a,b);
    swap(&a,&b);
    printf("After Swapping\n");
    printf("a = %d\nb = %d\n",a,b);
    return 0;
}