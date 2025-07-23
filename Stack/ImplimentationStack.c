#include<stdio.h>
#include<stdlib.h>
#define MAX 100 // Maximun Size of Stack

// Define The Stack Structure
typedef struct{
    int data[MAX];
    int top; // Index At the Top Element
}Stack;

// Function To InitilizeStack
 void initializeStack(Stack* stack){
    stack->top = -1; // Stack is Initally is Empty
 }

// Function To Check if the stack is Empty
 int isempty(Stack* stack){
    return stack->top = -1;
}

// Function To Check if the stack is Full
 int isfull(Stack* stack){
      return stack->top = MAX-1;
 }

// Function to Push an Element onto the stack
  void push(Stack* stack, int value){
    if(isfull(stack)){
        printf("Stack OverFlow! Cannot Push %d.\n", value);
        return;
    }
    stack->data[++stack->top] = value; // Phele Bhadado Or phir Value Daal Do
    printf("%d pushed onto the stack.\n", value);
  }

// Function to Pop an Element onto the stack 
int pop(Stack* stack){
    if(isempty(stack)){
        printf("Stack is Underflow! Cannot Pop.\n");
        return -1;
    }
    return stack->data[stack->top--];
}

// Function to peek at the top Element
 int peek(Stack* stack){
    if(isempty(stack)){
        printf("Stack is Empty! Cannot peek.\n");
        return -1;
    }
    return stack->data[stack->top];
 }

int main(){
    Stack stack;
    initializeStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Top Element: %d\n", peek(&stack));

    printf("Pop Element: %d\n", pop(&stack));
    printf("Pop Element: %d\n", pop(&stack));
    printf("Pop Element: %d\n", pop(&stack));
    printf("Pop Element: %d\n", pop(&stack));

    return 0;
} 