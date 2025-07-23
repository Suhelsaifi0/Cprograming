#include <stdio.h>
#include <stdlib.h>

#define MAX 5

// Structure for Deque
struct Deque {
    int arr[MAX];
    int front;
    int rear;
};

// Function to initialize the deque
void initDeque(struct Deque *d) {
    d->front = -1;
    d->rear = -1;
}

// Check if deque is full
int isFull(struct Deque *d) {
    return (d->rear == MAX - 1);
}

// Check if deque is empty
int isEmpty(struct Deque *d) {
    return (d->front == -1);
}

// Add an element at the rear of the deque
void enqueueRear(struct Deque *d, int value) {
    if (isFull(d)) {
        printf("Deque is full\n");
    } else {
        if (d->front == -1) {
            d->front = 0;
        }
        d->rear++;
        d->arr[d->rear] = value;
        printf("%d added at the rear\n", value);
    }
}

// Add an element at the front of the deque
void enqueueFront(struct Deque *d, int value) {
    if (isFull(d)) {
        printf("Deque is full\n");
    } else {
        if (d->front == -1) {
            d->front = 0;
            d->rear = 0;
        } else {
            d->front--;
        }
        d->arr[d->front] = value;
        printf("%d added at the front\n", value);
    }
}

// Remove an element from the front of the deque
void dequeueFront(struct Deque *d) {
    if (isEmpty(d)) {
        printf("Deque is empty\n");
    } else {
        printf("%d removed from the front\n", d->arr[d->front]);
        if (d->front == d->rear) {
            d->front = d->rear = -1;
        } else {
            d->front++;
        }
    }
}

// Remove an element from the rear of the deque
void dequeueRear(struct Deque *d) {
    if (isEmpty(d)) {
        printf("Deque is empty\n");
    } else {
        printf("%d removed from the rear\n", d->arr[d->rear]);
        if (d->front == d->rear) {
            d->front = d->rear = -1;
        } else {
            d->rear--;
        }
    }
}

// Display the elements in the deque
void display(struct Deque *d) {
    if (isEmpty(d)) {
        printf("Deque is empty\n");
    } else {
        printf("Deque elements are: ");
        for (int i = d->front; i <= d->rear; i++) {
            printf("%d ", d->arr[i]);
        }
        printf("\n");
    }
}

// Main function
int main() {
    struct Deque d;
    initDeque(&d);

    enqueueRear(&d, 10);
    enqueueRear(&d, 20);
    enqueueFront(&d, 5);
    enqueueFront(&d, 2);

    display(&d);

    dequeueFront(&d);
    dequeueRear(&d);

    display(&d);

    return 0;
}
