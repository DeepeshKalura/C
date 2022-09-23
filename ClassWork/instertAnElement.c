#include <stdio.h>

void push(int *arr, int item, int postion, int size){
    int temp;
    for(int i = postion; i<size; i++){
        temp = *(arr+i);
        *(arr+i) = item;
        item = temp;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n+1];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int item;
    scanf("%d", &item);
    int postion;
    scanf("%d", &postion);
    push(arr, item, postion, n+1);
    
    for(int i = 0; i<n+1; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
