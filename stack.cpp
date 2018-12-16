#include <iostream>
#include <vector>

using std::vector;
#define ERROR 		(-1)

// declare array to store data
int v[10];
int stack_size = 0;

 
// Declare function
void push(int key){
	stack_size++;
	v[stack_size-1] = key;
}

int top(){
	return v[stack_size-1];
}

int pop(){
	int result = v[stack_size-1];
	stack_size--;
	return result;
}

int empty(){
	if(stack_size == 0){
		return 1;
	}
	else{
		return 0;
	}
}

void print_stack(){
	for(int i = 0; i < stack_size; i++){
		std::cout << v[i] << " ";
	}
	std::cout << std::endl;
}

// Delare main
int main(){
	push(1);
	push(2);
	push(3);
	push(4);
	print_stack();
	pop();
	pop();
	print_stack();
}