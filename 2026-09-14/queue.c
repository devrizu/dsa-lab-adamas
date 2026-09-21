#include <stdio.h>
#define SIZE 5

void enQueue(int);
void deQueue();
void display();

int item[SIZE], front = -1, rear = -1;

int main() {
    deQueue();
    enQueue(10);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    enQueue(60);
    
    display();
    deQueue();
    display();
    return 0;
}

void enQueue(int value) {
    if (rear == SIZE - 1)
        printf("Queue is Full\n");
    else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        item[rear] = value;
        printf("Inserted = %d\n", value);
    }
}

void deQueue() {
    if (front == -1)
        printf("Queue is Empty\n");
    else {
        printf("Deleted = %d\n", item[front]);
        front++;
        if (front > rear) {
            front = rear = -1;
        }
    }
}

void display() {
    if (rear == -1)
        printf("Queue is Empty\n");
    else {
        int i;
        printf("The Queue = ");
        for (i = front; i <= rear; i++)
            printf("%d ", item[i]);
    }
    printf("\n");
}