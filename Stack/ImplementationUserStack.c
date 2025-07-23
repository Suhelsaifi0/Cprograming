#include <stdio.h>
#include <stdlib.h>
#define MAX 100 // Maximum Size of Stack

// Define The Stack Structure
typedef struct {
    int data[MAX];
    int top; // Index At the Top Element
} Stack;

// Function To Initialize Stack
void initializeStack(Stack* stack) {
    stack->top = -1; // Stack is Initially Empty
}

// Function To Check if the stack is Empty
int isempty(Stack* stack) {
    return stack->top == -1;
}

// Function To Check if the stack is Full
int isfull(Stack* stack) {
    return stack->top == MAX - 1;
}

// Function to Push an Element onto the stack
void push(Stack* stack, int value) {
    if (isfull(stack)) {
        printf("Stack Overflow! Cannot Push %d.\n", value);
        return;
    }
    stack->data[++stack->top] = value; // Increment and then Insert Value
    printf("%d pushed onto the stack.\n", value);
}

// Function to Pop an Element from the stack
int pop(Stack* stack) {
    if (isempty(stack)) {
        printf("Stack Underflow! Cannot Pop.\n");
        return -1;
    }
    return stack->data[stack->top--];
}

// Function to Peek at the Top Element
int peek(Stack* stack) {
    if (isempty(stack)) {
        printf("Stack is Empty! Cannot Peek.\n");
        return -1;
    }
    return stack->data[stack->top];
}

// Main Function with User Input
int main() {
    Stack stack;
    initializeStack(&stack);

    int choice, value;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(&stack, value);
                break;
            case 2:
                value = pop(&stack);
                if (value != -1)
                    printf("Popped Element: %d\n", value);
                break;
            case 3:
                value = peek(&stack);
                if (value != -1)
                    printf("Top Element: %d\n", value);
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
