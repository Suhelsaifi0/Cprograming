#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Maximum size of the circular queue

// Circular queue structure
struct CircularQueue {
    int front, rear;
    int arr[MAX];
};

// Initialize the circular queue
void initQueue(struct CircularQueue* q) {
    q->front = q->rear = -1;
}

// Check if the queue is empty
int isEmpty(struct CircularQueue* q) {
    return (q->front == -1);
}

// Check if the queue is full
int isFull(struct CircularQueue* q) {
    return ((q->rear + 1) % MAX == q->front);
}

// Enqueue operation (add an element)
void enqueue(struct CircularQueue* q, int value) {
    if (isFull(q)) {
        printf("Queue is full. Cannot enqueue %d.\n", value);
    } else {
        if (q->front == -1) {
            q->front = 0;  // Queue was empty, now front is at 0
        }
        q->rear = (q->rear + 1) % MAX;  // Circular increment of rear
        q->arr[q->rear] = value;
        printf("%d enqueued to queue.\n", value);
    }
}

// Dequeue operation (remove an element)
int dequeue(struct CircularQueue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;  // Return -1 for empty queue
    } else {
        int value = q->arr[q->front];
        if (q->front == q->rear) {
            q->front = q->rear = -1;  // Queue becomes empty
        } else {
            q->front = (q->front + 1) % MAX;  // Circular increment of front
        }
        return value;
    }
}

// Display the queue elements
void display(struct CircularQueue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        int i = q->front;
        while (i != q->rear) {
            printf("%d ", q->arr[i]);
            i = (i + 1) % MAX;
        }
        printf("%d\n", q->arr[q->rear]);
    }
}

// Main function to test the circular queue
int main() {
    struct CircularQueue q;
    initQueue(&q);  // Initialize the circular queue

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);

    display(&q);  // Display the queue

    printf("Dequeued: %d\n", dequeue(&q));  // Dequeue operation
    display(&q);  // Display the queue after dequeue

    enqueue(&q, 60);
    display(&q);  // Display the queue after enqueuing 60

    return 0;
}
