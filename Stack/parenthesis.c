#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100  // Maximum size of the stack

// Stack structure
typedef struct {
    char arr[MAX];
    int top;
} Stack;

// Function to initialize the stack
void initStack(Stack *s) {
    s->top = -1;
}

// Function to check if the stack is full
int isFull(Stack *s) {
    return s->top == MAX - 1;
}

// Function to check if the stack is empty
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Function to push an element onto the stack
void push(Stack *s, char value) {
    if (isFull(s)) {
        printf("Stack Overflow! Cannot push %c\n", value);
        return;
    }
    s->arr[++(s->top)] = value;
}

// Function to pop an element from the stack
char pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow! No elements to pop.\n");
        return '\0';  // Return null character for underflow
    }
    return s->arr[(s->top)--];
}

// Function to get the top element of the stack
char peek(Stack *s) {
    if (isEmpty(s)) {
        return '\0';  // Return null character if the stack is empty
    }
    return s->arr[s->top];
}

// Function to check if the parentheses are matching pairs
int isMatchingPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

// Function to check if the parentheses in a string are balanced
int areParenthesesBalanced(char *arr) {
    Stack s;
    initStack(&s);
    
    for (int i = 0; arr[i] != '\0'; i++) {
        char ch = arr[i];
        
        // If it's an opening bracket, push it onto the stack
        if (ch == '(' || ch == '{' || ch == '[') {
            push(&s, ch);
        }
        // If it's a closing bracket, check for a matching pair
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (isEmpty(&s) || !isMatchingPair(pop(&s), ch)) {
                return 0;  // Not balanced
            }
        }
    }
    
    // If the stack is empty, all parentheses were balanced
    return isEmpty(&s);
}

// Main function to test the program
int main() {
    char arr[MAX];
    
    printf("Enter an expression with parentheses: ");
    scanf("%s", arr);
    
    if (areParenthesesBalanced(arr)) {
        printf("The parentheses are balanced.\n");
    } else {
        printf("The parentheses are not balanced.\n");
    }
    
    return 0;
}
