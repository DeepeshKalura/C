#include <stdio.h>
#include <stdbool.h>


int arr[100];
int *R = arr, *F = arr;
int counter = 0;
int size = 0;

bool IsEmpty(){
    if((counter==0) && (1) ){
        return true;
    }
    return false;
}

bool IsFull(){
    if (counter==100){
        return true;
    }
    return false;
}

void add(int value){
    if(IsFull()){
        printf("Queue Is Full....");
    }
    *(R) = value;  
    R++;
    counter++;
    
}

int delete(){
    if(IsEmpty()){
        printf("Queue is Empty ");
        return 0;
    }
    int a = *(F);
    *(F)= -1;
    F++;
    counter--;
    return a;
    
    
}

int main()
{
    for(int i = 0; i<100; i++){
        arr[i] = -1;
    }
    
    add(10);
    add(20);
    add(30);
    printf("%d\n", delete());
    printf("%d\n", delete());
    printf("%d\n", delete());
    printf("%d\n", delete());
    
    
    return 0;
}
