#include <stdio.h>
#include<stdbool.h>  
//#define n 10
int n = 10;
int arr[10];
int top = 0;




bool IsFull(){
	if(top==n){
		return true;
	}
	else{
		return false;
	}
}

bool IsEmpty(){
	if(top==0){
		return true;
	}
	else{
		return false;
	}
}

void pop(){
	if(IsEmpty()){
		printf("Stack UnderFlow\n");
	}
	else{
		arr[top] = -1;
		top--;
	}
}


void push(int n){
	if(IsFull()){
		printf("Stack OverFlow\n");
	}
	else{
		arr[top] = n; 
		top++;	
	}
}

int peek(){
	return arr[top];
}

void transverse(){
	for(int i = 0; i<top; i++){
		printf("%d ", arr[i]);
	}
}



int main(){

	push(1);
	push(2);
	push(3);
	pop();
	printf("%d\n", peek());
	transverse();
	
	
	return 0;
}
