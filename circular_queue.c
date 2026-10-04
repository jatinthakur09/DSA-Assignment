#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

int isEmpty(void) {
    return front == -1;
}

int isFull(void) {
    return (rear + 1) % MAX == front;
}

void enqueue(int x) {
    if (isFull()) {
        printf("Queue Overflow! Queue is full.\n");
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % MAX;
    }

    queue[rear] = x;
    printf("%d enqueued into the queue.\n", x);
}

void dequeue(void) {
    if (isEmpty()) {
        printf("Queue Underflow! Queue is empty.\n");
        return;
    }

    printf("%d dequeued from the queue.\n", queue[front]);

    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
}

void showFront(void) {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Front element: %d\n", queue[front]);
}

void display(void) {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");

    int i = front;
    while (1) {
        printf("%d ", queue[i]);

        if (i == rear)
            break;

        i = (i + 1) % MAX;
    }

    printf("\n");
}

int main(void) {
    int choice, value;

    while (1) {
        printf("\n--- CIRCULAR QUEUE USING ARRAY ---\n");
        printf("1. ENQUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. FRONT\n");
        printf("4. DISPLAY\n");
        printf("5. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                showFront();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Program ended.\n");
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}
